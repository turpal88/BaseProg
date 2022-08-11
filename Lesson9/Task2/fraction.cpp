#include "fraction.h"

Fraction::Fraction(int numerator, int denominator) {
    if (denominator == 0 && numerator != 0) throw std::invalid_argument("Невозможно создать дробь со знаменателем, равным нулю!");
    else if (numerator == 0 && denominator != 0) throw std::invalid_argument("Невозможно создать дробь с числителем, равным нулю!");
    else if (numerator == 0 && denominator == 0) throw std::invalid_argument("Невозможно создать дробь с числителем и знаменателями, равными нулю!");
    else {
        this->numerator_ = numerator / std::gcd(numerator, denominator);
        this->denominator_ = denominator / std::gcd(numerator, denominator);
        
    }
}
    


bool Fraction::operator == (const Fraction& other) {


	return (numerator_ * other.denominator_ == other.numerator_ * denominator_);


}

bool Fraction::operator != (const Fraction& other) {
	return !(*this == other);
}

bool Fraction::operator < (const Fraction& other) {

	return (numerator_ * other.denominator_ < other.numerator_* denominator_);
}

bool Fraction::operator > (const Fraction& other) {
	return !(*this < other) && *this != other;
}


bool Fraction::operator <= (const Fraction& other) {
	return *this < other || *this == other;
}

bool Fraction::operator >= (const Fraction& other) {
	return !(*this < other) || *this == other;
}

 Fraction Fraction::operator + (const Fraction& other) {
     return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
}

 Fraction Fraction::operator - (const Fraction& other) {
     return *this + Fraction(-other.numerator_, other.denominator_);
 }

 Fraction Fraction::operator * (const Fraction& other) {
     return Fraction(numerator_*other.numerator_, denominator_*other.denominator_);
 }

 Fraction Fraction::operator / (const Fraction& other) {
     return *this * Fraction(other.denominator_, other.numerator_);
 }
 Fraction& Fraction::operator ++ () {
     this->numerator_ += this->denominator_;
    return *this;
 }
 Fraction& Fraction::operator -- () {
     this->numerator_ -= this->denominator_;
     return *this;
 }
 Fraction Fraction::operator ++ (int) {
     Fraction temp = *this;
     ++(*this);
     return temp;
 }
 Fraction Fraction::operator -- (int) {
     Fraction temp = *this;
     --(*this);
     return temp;
 }
 

void Fraction::get_fraction() {
    if (numerator_ == 0) std::cout << 0;
    else if (numerator_ / denominator_ == 1) std::cout << 1;
    else if (numerator_ % denominator_ == 0) std::cout << numerator_ / denominator_;
    else std::cout << numerator_ << "/" << denominator_;
   
}