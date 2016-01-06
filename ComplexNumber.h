#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#pragma once
#include <iostream>

using namespace std;

class ComplexNumber
{
	static const int SIZE=2;
	int Array[SIZE];
public:
	ComplexNumber(void);
	friend ostream& operator<<(ostream&, ComplexNumber&);	
	friend istream& operator>>(istream &, ComplexNumber&);
	ComplexNumber operator+(ComplexNumber);
	ComplexNumber operator*(ComplexNumber);
	bool operator==(ComplexNumber);

	~ComplexNumber(void);
};
#endif
