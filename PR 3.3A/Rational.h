#pragma once
# include <iostream>
# include <string>

using namespace std;

class Rational
{
	int a;
	int b;
public:
	Rational(int a = 0, int b = 0);
	Rational(const Rational& r);
	Rational& operator = (const Rational& r);

	int geta() const { return a; }
	int getb() const { return b; }
	void seta(int a) { this->a = a; }
	void setb(int b) { this->b = b; }
	~Rational() {};

	operator string() const;
	friend ostream& operator << (ostream& os, const Rational& r);
	friend istream& operator >> (istream& is, Rational& r);

	Rational& operator++();
	Rational& operator--();
	Rational operator++(int);
	Rational operator--(int);

	friend Rational operator/ (const Rational& r1, const Rational& r2);
	friend bool operator== (const Rational& r1, const Rational& r2);
	friend bool operator> (const Rational& r1, const Rational& r2);
	friend bool operator< (const Rational& r1, const Rational& r2);
	double value () {return a / b; }
	
};

