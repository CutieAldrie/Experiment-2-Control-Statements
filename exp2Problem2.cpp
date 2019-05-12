#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	cout << "						VIEW HERE YOUR MONTHLY BILL								 " << endl;
	float b, G, unpaid;
	cout << " Enter number of gallons used recently and from the previous month: ";
	cin >> G;
	cout << " Enter your unpaid balance:  ";
	cin >> unpaid;
	{
		if (unpaid > 0)
		{
			cout << " Additional P20 is added on the bill" << endl;
			cout << " Unpaid balance = " << unpaid << endl;
			b = (G * 1.10) + 35 + 20;
		}
		else
		{
			cout << " No additional payment is added on the bill" << endl;
			b = (G * 1.10) + 35;
		}
	}
	cout << " Your bill includes a P35 demand charge" << endl;
	cout << "Bill =" << b << endl;

	_getch();
	return 0;
}