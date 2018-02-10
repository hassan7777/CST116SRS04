// CST116SRS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>

using std::cin;
using std::cout;


int main()
{
	const double kPi = 3.14;
	int choice{};
	std::cout << "enter the choice of trisngle: 0)AAS 1)ASA 2)SAS 3)SSA 4)AAA 5)SSS ";
	std::cin >> choice;
	switch (choice)
	{

	case 0:
	{
		double a, b, c, A, B, C;

		std::cout << "Enter the angle in degrees 'A'";
		std::cin >> A;


		std::cout << "Enter the angle in degrees 'C'";
		std::cin >> C;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;

		B = (180.00 - A - C);

		C = C * kPi / 180.00;
		A = A * kPi / 180.00;
		a = (c*sin(A)) / sin(C);

		
		b = (c*sin(B)) / sin(C);
		C = C * kPi / 180.00;

		std::cout << "The angle of B is: " << B;
		std::cout << "The side of a is: " << a;
		std::cout << "The side of b is: " << b;
	}
	case 1:
	{
		double a, b, c, A, B, C;


		std::cout << "Enter the angle in degrees 'A'";
		std::cin >> A;

		std::cout << "Enter the angle in degrees 'B'";
		std::cin >> B;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;


		
		C = (180.00 - A - B);
		
		

		A = A * kPi / 180.00;
		C = C * kPi / 180.00;
		a = ((c / sin(C))*sin(A));
		

		B = B * kPi / 180.00;
		b = (c / sin(C)) * sin(B);
		
		

		C = C * 180.00 / kPi;
		
		
	
		std::cout << "The angle of C is: " << C;
		std::cout << "The side of a is: " << a;
		std::cout << "The side of b is: " << b;

	}
	case 2:
	{
		double a, b, c, A, B, C;
		
		std::cout << "Enter the angle of 'A'";
		std::cin >> A;

		std::cout << "Enter the side of 'b'";
		std::cin >> b;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;

		

		A = A * (kPi / 180.00);
		a = sqrt(b*b + c * c - 2 * b * c * cos(A));
		
		
		B = (sin(A) * b) / a;
		B = B * (180.00 / kPi);
		
		C = (180.00 - A - B);
		
		

		std::cout << "The angle of B is: " << B;
		std::cout << "The angle of C is: " << C;
		std::cout << "The side of a is: " << a;
	}
	case 3:
	{
		double a, b, c, A, B, C;

		std::cout << "Enter the angle in degrees 'B'";
		std::cin >> B;

		std::cout << "Enter the side of 'b'";
		std::cin >> b;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;

		B = B * (kPi / 180.00);
		C = (c*sin(B)) / b;
		C = C * (180.00 / kPi);

		A = 180.00 - B - C;

		B = B * (180.00 / kPi);
		a = (sin(A)*b) / sin(B);
		
		std::cout << "The angle of A is: " << A;
		std::cout << "The angle of C is: " << C;
		std::cout << "The side of a is: " << a;
	}
	case 4:
	{

		double a, b, c, A, B, C;

		std::cout << "Enter the side of 'a'";
		std::cin >> a;

		std::cout << "Enter the side of 'b'";
		std::cin >> b;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;


		A = ((b * b) + (c * c) - (a * a)) / (2 * b*c);


		B = ((c * c) + (a * a) - (b * b)) / (2 * c*a);


		B = B * (180.00 / kPi);
		A = A * (180.00 / kPi);
		C = (180.00 - A - B);

		std::cout << "The angle of A is: " << A;
		std::cout << "The angle of B is: " << B;
		std::cout << "The angle of C is: " << C;
		
	}
	case 5:
	{
		double a, b, c, A, B, C;

		std::cout << "Enter the side of 'a'";
		std::cin >> a;

		std::cout << "Enter the side of 'b'";
		std::cin >> b;

		std::cout << "Enter the side of 'c'";
		std::cin >> c;

		
		A = ((b * b) + (c * c) - (a * a)) / (2 * b*c);
		
		
		B = ((c * c) + (a * a) - (b * b)) / (2 * c*a);
		

		B = B * (180.00 / kPi);
		A = A * (180.00 / kPi);
		C = (180.00 - A - B);
		



		std::cout << "The angle of A is: " << A;
		std::cout << "The angle of B is: " << B;
		std::cout << "The angle of C is: " << C;
	}



	}

    return 0;
}

