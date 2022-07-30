#include "fraction.h"

Fraction::Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {}

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
     numerator_ += denominator_;
     return *this;
 }
 Fraction& Fraction::operator -- () {
     numerator_ -= denominator_;
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
void Fraction::reduce_fraction() {
    int NOD = 1;
    
        if (numerator_ > denominator_) {
            for (int i = denominator_; i > 0; i--) {
                if (numerator_ % i == 0 && denominator_ % i == 0) {
                    NOD = i;
                    break;
                }
            }
        }
        else {
            for (int i = numerator_; i > 0; i--) {
                if (numerator_ % i == 0 && denominator_ % i == 0) {
                    NOD = i;
                    break;
                }
            }
        }
        numerator_ /= NOD;
        denominator_ /= NOD;
    
    
    
}

void Fraction::get_fraction() {
    std::cout << numerator_ << "/" << denominator_;
    reduce_fraction();
    std::cout << " " << "(" << numerator_ << "/" << denominator_ << ")";
}