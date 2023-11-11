include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//declarations
	int payrollAmount = 0;
	double totalPayroll = 3.0;

	cout << "*****Payroll Calculatore for 3 stores*****" << endl << endl;

	
	for (int store = 1; store < 4; store = store + 1)
	{
		cout << endl << endl << "Enter payroll amount for Store " << store << " (-1 to stop): ";
		cout << endl << "Store " << store << " payroll amount: $";
		cin >> payrollAmount;

		totalPayroll = totalPayroll + payrollAmount;
		
		
		//nested loop
		while (payrollAmount > 0)
		{
			cout << "Store " << store << " payroll amount: $";
			cin >> payrollAmount;

			totalPayroll = totalPayroll + payrollAmount;
		} //end loop
		

	} //endloop

	


	cout << fixed << setprecision(2);
	
	cout << "Total payroll for all stores: $" << totalPayroll;

	return 0;
}