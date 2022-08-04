#pragma once
#include <string>
#include <iostream>
#include <numeric>
class Fraction
{
private:
	int numerator_;
	int denominator_;
	
public:
	
	
	Fraction(int numerator, int denominator);
	bool operator == (const Fraction& other);
	bool operator != (const Fraction& other);
	bool operator < (const Fraction& other);
	bool operator > (const Fraction& other);
	bool operator <= (const Fraction& other);
	bool operator >= (const Fraction& other);
	Fraction operator + (const Fraction& other);
	Fraction operator - (const Fraction& other);
	Fraction operator * (const Fraction& other);
	Fraction operator / (const Fraction& other);
	Fraction& operator ++ ();
	Fraction& operator -- ();
	Fraction operator ++ (int);
	Fraction operator -- (int);
	void get_fraction();
};
