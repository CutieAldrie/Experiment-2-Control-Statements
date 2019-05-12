#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int counter;
	cout << "NOW COUNTING!!!!!!" << endl;
	for (counter = 1;counter <= 10;counter++)
		cout << counter <<",";
	for (counter = 12; counter <= 30;counter += 2)
		cout << counter << ",";
	_getch();
	return 0;
}
	
 
	