#pragma once
#include "Rational.h"
class PRrat: private Rational
{
	public:
	PRrat(const PRrat& pr);
	PRrat(int a = 0, int b = 0) : Rational(a, b) {};
	PRrat& operator=(const PRrat& pr);
	
	friend istream & operator>>(istream & in, PRrat & pr);
	friend ostream & operator<<(ostream & out, const PRrat & pr);
	operator string () const;
	
	friend Rational operator/ (const PRrat & pr1, const PRrat & pr2);
	friend bool	operator== (const PRrat& r1, const PRrat& r2);
	friend bool	operator> (const PRrat& r1, const PRrat& r2);
	friend bool	operator< (const PRrat& r1, const PRrat& r2);
};


