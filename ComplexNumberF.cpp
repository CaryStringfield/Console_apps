#include "stdafx.h"
#include "ComplexNumberF.h"

ComplexNumberF::ComplexNumberF()
{
}

ComplexNumberF :: ComplexNumberF(int real, int imaginary)
{
	Real=real;
	Imaginary=imaginary;
}

void ComplexNumberF :: SetReal(int r)
{
	Real=r;
}

void ComplexNumberF :: SetImaginary(int i)
{
	Imaginary=i;
}

int	ComplexNumberF :: GetReal()
{
	return Real;
}

int	ComplexNumberF :: GetImaginary()
{
	return Imaginary;
}

ostream& operator<<(ostream& out, ComplexNumberF& x)
{
	out<<"("<<x.GetReal()<<"+"<<x.GetImaginary()<<"i)";
	return out;
}

istream& operator>>(istream& in, ComplexNumberF& x)
{
	int i,r;
	cout<<"Enter Real Portion of Number:"<<endl;
	in>>r;
	cout<<"Enter Imaginary Portion of Number:"<<endl;
	in>>i;
	x=ComplexNumberF(r,i);
	return in;
}

ComplexNumberF::~ComplexNumberF()
{
}
