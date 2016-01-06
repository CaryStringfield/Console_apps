#include "stdafx.h"
//#include <cassert>
#include "ComplexNumber.h"


ComplexNumber::ComplexNumber(void)
{
}

ComplexNumber ComplexNumber :: operator+(ComplexNumber x)
{
	ComplexNumber sum;
	for (int i=0; i<x.SIZE; i++)
	{
		sum.Array[i]= Array[i] + x.Array[i];
	}
	return (sum);
}

ComplexNumber ComplexNumber :: operator*(ComplexNumber x)
{
	ComplexNumber product;
	product.Array[0]= Array[0] * x.Array[0] - Array[1] * x.Array[1];
	product.Array[1]= Array[0] * x.Array[1] + Array[1] * x.Array[0];
	return (product);
}

bool ComplexNumber :: operator==(ComplexNumber x)
{
	bool equal;
	for(int i=0; i<x.SIZE; i++)
		if (Array[i]==x.Array[i])
			equal=true;
		else 
			equal = false;
	return equal;
}
	
ComplexNumber::~ComplexNumber(void)
{
}
