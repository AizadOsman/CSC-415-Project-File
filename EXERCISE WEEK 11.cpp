#include <iostream>
using namespace std;

float totalPrice(char,int);

int main ()
{
	char roomType;
	int charge, days;
	
	cout << "Please enter room type (F-First Class / S-Second Class): ";
	cin >> roomType;
	
	cout << "How many days you wish to stay: ";
	cin >> days;
	
	cout << "\nThe total price that should be paid is RM " << totalPrice(roomType,days) << endl;
	
	return 0;
}

float totalPrice(char r, int d)
{
	float totalPrice;
	
	if (r == 'F' || r == 'f')
	{
		totalPrice = 255 * d;
	}
	if (r == 'S' || r == 's')
	{
		totalPrice = 220 * d;
	}
	
	return totalPrice;
}
