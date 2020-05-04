#include "Long.h"



Long* Long::operator+(const Long l)
{
	return new Long(this->n+l.n);
}

Long* Long::operator/(const Long l)
{
	return new Long(this->n/l.n);
}

Long::Long(int n)
{
	this->n = n;
}

int Long::getValue()
{
	return this->n;
}

Long::Long(const Long & lo)
{
	this->n = lo.n;
}


Long::~Long()
{
}

Long* operator-(Long  t, const Long l)
{
	return new Long(t.n-l.n);
}

Long* operator*(Long  t, const Long l)
{
	return new Long(t.n*l.n);
}
