#include "Complex.h"
#include <iostream>
using namespace std;



Complex::Complex(double real, double image) // 소스부에는 디폴트 매개변수 명시하지 않음
{
	SetReal(real);
	SetImage(image);
}
double Complex::Getimage()const
{
	return image;
}
double Complex::GetReal()const
{
	return real;
}
void Complex::SetImage(double image)
{
	this->image = image;
}
void Complex::SetReal(double real)
{
	this->real = real;
}

void Complex::View()const
{
	if ((real != 0) && (image != 0))
	{
		cout << real << "+" << image << "i" << endl;
	}
	else
	{
		if (image != 0)
		{
			if (image < 0)
			{
				cout << "(";
			}
			cout << image << "i";
			if (image < 0)
			{
				cout << ")";
			}
			cout << endl;
		}
		else
		{
			cout << real << endl;
		}
	}
}