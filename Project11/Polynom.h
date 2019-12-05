#pragma once
struct Monom
{
	int mpow;
	double coeff;
	Monom();
	Monom(int p, double c) :mpow(p), coeff(c) {}
	Monom operator *(const Monom &m);

	~Monom();
};
class Polynom
{
private:
	int coeff;
	int pow;

public:
	Polynom();
	~Polynom();
};

