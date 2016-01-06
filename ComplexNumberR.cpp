#include "stdafx.h"
#include "ComplexNumberR.h"


ComplexNumberR::ComplexNumberR(void)
{
}

ComplexNumberR :: ComplexNumberR(int real, int imaginary)
{
	Real=real;
	Imaginary=imaginary;
}

void ComplexNumberR :: SetReal(int r)
{
	Real=r;
}

void ComplexNumberR :: SetImaginary(int i)
{
	Imaginary=i;
}

int	ComplexNumberR :: GetReal()
{
	return Real;
}

int	ComplexNumberR :: GetImaginary()
{
	return Imaginary;
}

ComplexNumberR ComplexNumberR :: operator+(ComplexNumberR x)
{
	ComplexNumberR sum;
	sum.Real= Real + x.Real;
	sum.Imaginary= Imaginary + x.Imaginary;
	return (sum);
}

ComplexNumberR ComplexNumberR :: operator*(ComplexNumberR x)
{
	ComplexNumberR product;
	product.Real= Real * x.Real - Imaginary * x.Imaginary;
	product.Imaginary= Real * x.Imaginary + Imaginary * x.Real;
	return (product);
}

bool& ComplexNumberR :: operator==(ComplexNumberR x)
{
	bool equal=false;
	if (Real == x.Real)
		equal=true;
	if (Imaginary != x.Imaginary)
		equal=false;
	return equal;
}

ostream& operator<<(ostream& out, ComplexNumberR& x)
{
	out<<"("<<x.GetReal()<<"+"<<x.GetImaginary()<<"i)";
	return out;
}

istream& operator>>(istream& in, ComplexNumberR& x)
{
	int i,r;
	cout<<"Enter Real Portion of Number:"<<endl;
	in>>r;
	cout<<"Enter Imaginary Portion of Number:"<<endl;
	in>>i;
	x=ComplexNumberR(r,i);
	return in;
}

ComplexNumberR::~ComplexNumberR(void)
{
}
