//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//define variables
	double item1_Cost = 0.0;
	double item2_Cost = 0.0;
	double total = 0.0;
	//enter input items
	cout << "Enter cost of item 1: ";
	cin >> item1_Cost;
	cout << "Enter cost of item 2: ";
	cin >> item2_Cost;
	if (item1_Cost >= item2_Cost)
		total = item1_Cost + (item2_Cost / 2);
	else
		total = (item1_Cost / 2) + item2_Cost;
	//end if
	//display total owed
	cout << fixed << setprecision(2);
	cout << "Total owed: " << total << endl;
	
	return 0;
}	//end of main function