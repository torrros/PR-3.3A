#include "PUBrat.h"

using namespace std;

PUBrat::PUBrat(const PUBrat& pr)
{
	*this = pr;
}

PUBrat& PUBrat:: operator=(	const PUBrat& pr)
{
	seta(pr.geta());
	setb(pr.getb());
	return *this;
}
