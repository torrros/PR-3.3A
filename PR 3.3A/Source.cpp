#include "PRrat.h"
#include "PUBrat.h"
#include "Rational.h"
#include<iostream>

using namespace std;

int main()
{
	PUBrat pr, p{ 1, 8 };
	cin >> pr;
	cout << pr / p << endl;
	cout << endl;
	PRrat pr1, pr2{ 0, 5};
	cin >> pr1;
	cout << pr1 / pr2 << endl;
	cout << endl;

	Rational a(2,4);

	cout << "++a - " << ++a << endl;
	cout << "--a - " << --a << endl;
	cout << "a++ - " << a++ << endl;
	cout << "a-- - " << a-- << endl;
	cout << endl;
	Rational r1(3, 4), r2(4, 5);
	cout << r1 << "|" << r2 << "=" << r1 / r2 << endl;

	if (r1 == r2)
		cout << "Equal";
	else
		cout << "Not equal";
	cout << endl;

	if (r1 > r2)
		cout << "Great";
	else
		cout << "Less";
	cout << endl;

	if (r1 <r2)
		cout << "Great";
	else
		cout << "Less";
	cout << endl;
	return 0;
}
	
