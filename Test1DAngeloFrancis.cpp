
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string keepGoing = "YES";
	double monthlySales;
	double advancedPay;
	double comissionRate = 0;
	double comission;
	double remainingPay;

	while (keepGoing == "YES")
	{
		do
		{
			cout << "Enter the salesperson's monthly sales: ";
			cin >> monthlySales;

			if (monthlySales < 0)
			{
				cout << "You entered an invalid number. Please try again." << endl << endl;
			}
		} while (monthlySales < 0);

		if (monthlySales < 10000)
		{
			comissionRate = 0.15;
		}
		else if (monthlySales > 10000 && monthlySales < 14999)
		{
			comissionRate = 0.10;
		}
		else if (monthlySales > 15000 && monthlySales < 17999)
		{
			comissionRate = 0.12;
		}
		else if (monthlySales > 18000 && monthlySales < 21999)
		{
			comissionRate = 0.14;
		}
		else if (monthlySales >= 22000)
		{
			comissionRate = 0.16;
		}

		do
		{
			cout << endl << "Enter the amount of advanced pay for this salesperson: ";
			cin >> advancedPay;

			if (advancedPay < 0)
			{
				cout << "You entered an invalid number. Please try again." << endl << endl;
			}
		} while (advancedPay < 0);

		comission = monthlySales * comissionRate;
		if (comission < advancedPay)
		{
			remainingPay = advancedPay - comission;
		}
		else
		{
			remainingPay = comission - advancedPay;
		}
	
		cout << fixed << setprecision(2);
		cout << endl << "Pay Results" << endl;
		cout << "----------" << endl;
		cout << "Sales: $" << monthlySales << endl;
		cout << "Comission Rate: " << comissionRate * 100 << "%" << endl;
		cout << "Comission: $" << comission << endl;
		cout << "Advanced Pay: $" << advancedPay << endl;
		
		if (comission < advancedPay)
		{
			cout << "Remaining Pay: $" << remainingPay << " (Pay back to Crazy Al's)";
		}
		else
		{
			cout << "Remaining Pay: $" << remainingPay << endl;
		}

		cout << endl << endl << "Would you like to keep going? Enter YES or NO (case sensitive):";
		cin >> keepGoing;
	}
	return 0;
}
