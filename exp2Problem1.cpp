#include<iostream>
using namespace std;
int main()
{
	char package; 
	double hours, monthlyfee = 0, extracharge = 0, accesshours = 0, extrahours = 0, total = 0;
	const double MonthFeeA = 995, MonthFeeB = 1495, MonthFeeC = 1995, ExtraA = 20, ExtraB = 10, AccessA = 10, AccessB = 20;
	while (true)
	{
		cout << "                            HI YOU MAY CHECK YOUR TOTAL MONTHLY BILL HERE!										" << endl;
		cout << "Packages: \n\n";
		cout << "A. P995/mo 10hrs of accesss are provided. Additional hours are P" << ExtraA << endl;
		cout << "B. P1495/mo 20hrs of access are provided. Additional hours are P" << ExtraB << endl;
		cout << "C. P1995/mo of unlimited access is provided.\n\n";
		cout << "Please enter the letter of what package have you purchased: "; cin >> package;
		switch (package)
		{
		case 'a':
		case 'A': monthlyfee = MonthFeeA, extracharge = ExtraA, accesshours = AccessA; break;
		case 'b':
		case 'B': monthlyfee = MonthFeeB, extracharge = ExtraB, accesshours = AccessB; break;
		case 'c':
		case 'C': monthlyfee = MonthFeeC; break;
		default: cout << "Please enter letters A,B, or C only :) \n\n";
			system("pause"); continue;
		}
		cout << "Please enter number of hours consumed: "; cin >> hours;
		if (hours <= accesshours)
		{
			cout << " Your total bill is P" << monthlyfee << endl; break;
		}
		else if (hours > accesshours)
		{
			extrahours = hours - accesshours,
				total = monthlyfee + (extrahours * extracharge);
			cout << " Your total bill is: " << total << endl;
	
		}
		system("pause"); continue; 
	}
	return 0;
}




