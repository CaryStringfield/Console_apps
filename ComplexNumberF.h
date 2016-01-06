#ifndef COMPLEXNUMBERF_H
#define COMPLEXNUMBERF_H

#pragma once
#include <iostream>
//#include <cassert>

using namespace std;


class ComplexNumberF
{
	int Real,Imaginary;

public:
	ComplexNumberF();
	ComplexNumberF(int, int);
	void SetReal(int);
	void SetImaginary(int);
	int GetReal();
	int GetImaginary();
	friend ComplexNumberF operator+(ComplexNumberF a, ComplexNumberF b);
	friend ComplexNumberF operator*(ComplexNumberF a, ComplexNumberF b);
	friend bool operator==(ComplexNumberF a, ComplexNumberF b);
	~ComplexNumberF();

};
	ostream& operator<<(ostream& out, ComplexNumberF& x);
    istream& operator>>(istream& in, ComplexNumberF& x);
	
#endif


