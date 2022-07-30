#pragma once
#include <string>
#include <iostream>
class Fraction
{
private:
	int numerator_;
	int denominator_;
	int value;
public:
	
	Fraction(std::string& str);
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
	void reduce_fraction();
	void get_fraction();
};
