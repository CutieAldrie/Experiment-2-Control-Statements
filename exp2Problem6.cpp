#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	int lastnumber, sum = 0;

	cout << "Enter a number: "; cin >> lastnumber;

	while (lastnumber > 0)
	{
		for (int i = 1; i <= lastnumber; i++)
		{
			sum = (lastnumber * (lastnumber + 1)) / 2; 
		}
		cout << "The sum of all whole numbers from 1 to " << lastnumber << " is: " << sum << endl; 
			cout << "Enter a number: "; cin >> lastnumber;
	}
	_getch();
	return 0;
}