#include "fraction.h"
Fraction::Fraction(std::string& str) {
    std::string temp = "";
    
    int i = 0;
    while (str[i] != '/') {

        temp += str[i];
        i++;

    }
    numerator_ = stoi(temp);
    temp = "";
    for (int k = i + 1; k < str.length(); k++) {
        temp += str[k];
        denominator_ = stoi(temp);
    }
    str = "";
}
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
	return (numerator_ * other.denominator_ > other.numerator_ * denominator_);
}


bool Fraction::operator <= (const Fraction& other) {
	return !(numerator_ * other.denominator_ > other.numerator_ * denominator_);
}

bool Fraction::operator >= (const Fraction& other) {
	return !(numerator_ * other.denominator_ < other.numerator_* denominator_);
}

 Fraction Fraction::operator + (const Fraction& other) {
     return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
}

 Fraction Fraction::operator - (const Fraction& other) {
     return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_);
 }

 Fraction Fraction::operator * (const Fraction& other) {
     return Fraction(numerator_*other.numerator_, denominator_*other.denominator_);
 }

 Fraction Fraction::operator / (const Fraction& other) {
     return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
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