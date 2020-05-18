#include <iostream>
#include "Complex.h"
using namespace std;


int main()
{
	Complex *c1 = new Complex();
	Complex *c2 = new Complex(2.1);
	Complex *c3 = new Complex(2.1, 3.3);
	Complex *c4 = new Complex(0.3, 3);
	Complex *c5 = new Complex(2.1, 0);
	Complex *c6 = new Complex(2.1, -3.3);

	
	c1->View();
	c2->View();
	c3->View();
	c4->View();
	c5->View();
	c6->View();
	
	delete c1;
	delete c2;
	delete c3;
	delete c4;
	delete c5;
	delete c6;
}