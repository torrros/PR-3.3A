#include "PRrat.h"
#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

PRrat::PRrat(const PRrat&pr)
{
	*this = pr;
}

PRrat& PRrat::operator=(const PRrat& pr)
{
	seta(pr.geta());
	setb(pr.getb());
	return *this;
}

PRrat::operator string	() const
{
	stringstream ss;
	ss << "(" << geta() << "/" << getb() << ")";
	return ss.str();
}

istream& operator>>(istream& is, PRrat& pr)
{
	int a, b;
	cout << "a -"; cin >>  a;
	cout << "b -"; cin >>  b;
	pr.seta(a);
	pr.setb(b);
	return is;
}

ostream& operator<<(ostream& os, const PRrat& pr)
{
	os << string(pr);
	return os;
}

Rational operator/(const PRrat& pr1, const PRrat& pr2)
{
	return (const Rational&)pr1 / (const Rational&)pr2;
};

bool operator == (const PRrat& pr1, const PRrat& pr2)
{
	return (const Rational&)pr1 == (const Rational&)pr2;
}

bool operator> (const PRrat& pr1, const PRrat& pr2)
{
	return (const Rational&)pr1 > (const Rational&)pr2;
}

bool operator< (const PRrat& pr1, const PRrat& pr2)
{
	return (const Rational&)pr1 < (const Rational&)pr2;
}