// PA4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "ComplexNumber.h"
#include "ComplexNumberF.h"
#include "ComplexNumberR.h"

ostream& operator<<(ostream& out, ComplexNumber& arr);
istream& operator>>(istream& in, ComplexNumber& arr);
ComplexNumberF operator+(ComplexNumberF a, ComplexNumberF b);
ComplexNumberF operator*(ComplexNumberF a, ComplexNumberF b);
bool operator==(ComplexNumberF a, ComplexNumberF b);


int main()
{
	bool result;

	ComplexNumber number1,number2,number3,number4;
	cin>>number1;
	cin>>number2;
	number3=number1+number2;
	cout<< number1<<" + "<<number2<<" = "<<number3<<endl;
	number4=number1*number2;
	cout<< number1<<" * "<<number2<<" = "<<number4<<endl;
	result= number3 == number4;
	if (result)
		cout<<number3<<" = "<<number4<<endl<<endl;
	else
		cout<<number3<<" != "<<number4<<endl<<endl;

	ComplexNumberF number5,number6,number7,number8;
	cin>>number5;
	cin>>number6;
	number7=number5+number6;
	cout<< number5<<" + "<<number6<<" = "<<number7<<endl;
	number8=number5*number6;
	cout<< number5<<" * "<<number6<<" = "<<number8<<endl;
	result= number7 == number8;
	if (result)
		cout<<number7<<" = "<<number8<<endl<<endl;
	else
		cout<<number7<<" != "<<number8<<endl<<endl;

	ComplexNumberR number9,number10,number11,number12;
	cin>>number9;
	cin>>number10;
	number11=number9+number10;
	cout<< number9<<" + "<<number10<<" = "<<number11<<endl;
	number12=number9*number10;
	cout<< number9<<" * "<<number10<<" = "<<number12<<endl;
	result= number11 == number12;
	if (result)
		cout<<number11<<" = "<<number12<<endl<<endl;
	else
		cout<<number11<<" != "<<number12<<endl<<endl;
}

ostream& operator<<(ostream& out, ComplexNumber& arr)
{
	for(int i = 0; i < arr.SIZE-1;)
	{
		out <<"("<< arr.Array[i]; 
		i++;
		out<<"+"<< arr.Array[i]<<"i)";
	}
	return out;
}

istream& operator>>(istream& in, ComplexNumber& arr)
{
	for(int i = 0; i < arr.SIZE;i++) {
		cout << "Enter Real Part of Number: "<<endl;
		in >> arr.Array[i];
		i++;
		cout<< "Enter Imaginary Part of Number"<<endl;
		in >> arr.Array[i];
		i++;
	}
	return in;
}


ComplexNumberF operator+(ComplexNumberF a, ComplexNumberF b)
{
	ComplexNumberF sum;
	sum.Real =a.Real + b.Real;
	sum.Imaginary= a.Imaginary + b.Imaginary;
	return sum;
}

ComplexNumberF operator*(ComplexNumberF a, ComplexNumberF b)
{
	ComplexNumberF product;
	product.Real =a.Real * b.Real - a.Imaginary  *b.Imaginary;
	product.Imaginary= a.Real * b.Imaginary + a.Imaginary * b.Real;
	return product;
}

bool operator==(ComplexNumberF a, ComplexNumberF b)
{
	bool equal=false;
	if (a.Real==b.Real)
		equal=true;
	if (a.Imaginary!=b.Imaginary)
		equal=false;
	return equal;
}
