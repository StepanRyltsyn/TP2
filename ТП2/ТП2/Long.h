#pragma once
class Long
{
private:
	int n;
public:
	Long* operator+(const Long l/*объект, с которым мы будем складывать наш текущий объект */);
	friend Long* operator-(Long t, const Long l);
	Long* operator/(const Long l);
	friend Long* operator*(Long t, const Long l);
	Long(int n);
	int getValue();
	Long(const Long &lo);
	~Long();
};

