#include "stdafx.h"
#include "complex.h"


int main()
{
	double re, im;
	Complex *a = new Complex();
	Complex *b = new Complex();
	while (1)
	{
		Complex complex;
		cout << "Enter realy complex numbers: ";
		cin >> re;
		cout << "Enter Imag complex numbers: ";
		cin >> im;
		a->setRe(re);
		a->setIm(im);
		

		cout << "Enter realy complex numbers: ";
		cin >> re;
		cout << "Enter Imag complex numbers: ";
		cin >> im;
		b->setRe(re);
		b->setIm(im);


		complex.menu();
		complex.EnterOperation(*a, *b);
		delete a;
		delete b;
	}

    return 0;
}

