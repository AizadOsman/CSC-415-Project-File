#include <iostream>
#include <iomanip>
using namespace std;

void getinfo(double & sticker, double & percentage);
void calculate(double sticker, double percentage, double & discount, double & finalcost);
void displaycarcost (double sticker, double finalcost, double discount);

int main ()
{
	double sticker, percentage, discount, finalcost;
	
	getinfo (sticker, percentage);
	calculate (sticker, percentage, discount, finalcost);
	displaycarcost (sticker, finalcost, discount);
	
	system ("pause");
	return 0;
}

void getinfo (double & sticker, double & percentage)
{
	cout << "Enter the sticker price of a car: ";
	cin >> sticker;
	cout << "Enter the percentage of discount (5/10/15/20): ";
	cin >> percentage;
}

void calculate (double sticker, double percentage, double & discount, double & finalcost)
{
	discount = sticker * percentage / 100;
	finalcost = sticker - discount;
}

void displaycarcost (double sticker1, double finalcost1, double discount1)
{
	cout << fixed << setprecision (2);
	cout << "\nThe original cost is RM " << sticker1 << endl;	
	cout << "The discounted cost is RM " << finalcost1 << endl;
	cout << "The total savings is RM " << discount1 << endl;	
	
}
