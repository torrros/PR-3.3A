#pragma once
#include "Rational.h"

using namespace std;

class PUBrat:public Rational
{
public:
	PUBrat(int a=0, int b=0) : Rational(a, b) {}
	PUBrat(const PUBrat const& pr);
	PUBrat& operator=(const PUBrat& pr);
};

