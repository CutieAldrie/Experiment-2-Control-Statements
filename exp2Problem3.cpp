#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	const double z = 2.50;
	double x,y,V;
	int a;
		cout << "enter value of x: "; cin >> a;
		cout << "enter value of y: "; cin >> y;
		cout << setprecision(2) << fixed; 
		switch (a)
		{
		case 1:
			x = 1;
			if (y > 1 && y < 5)
			{
				cout << "V is equal to: " << setw(10) << x * y * z << endl;
			}
			else if (y > 4)
			{
				cout << "V is equal to: " << setw(10) << x + (y / z) << endl;
			} break;
		case 2: 
			x = 2;
			if (y < 6)
			{
				cout << "V is equal to: " << setw(10) << abs((x - y) / z) << endl;
			}
			else if (y > 5)
			{
				cout << "V is equal to: " << setw(10) << x - sqrt(y + z) << endl;
			} break;
		default: x = a;
			cout << "V is equal to: " << setw(10) << x + y + z << endl;
		}
	_getch();
	return 0;
}