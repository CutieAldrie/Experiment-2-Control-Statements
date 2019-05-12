#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int firstNum = 0, secondNum = 1, fiboNum;
	const int range = 20;
	cout << "This Fibonacci series will now display the next 20 Terms (after 0 and 1): " << endl;

	for (int c = 0; c < range; c++)
	{
		if (range <= 1)
			fiboNum = range;
		else
		{
			fiboNum = firstNum + secondNum;
			firstNum = secondNum;
			secondNum = fiboNum;
		}
		cout << fiboNum << ",";
	}
	_getch();
	return 0;
}