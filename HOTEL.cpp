#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
	int nights, floor;
	double discount, normal, totalCharges;
	char guestName [100], roomType [6];
	
	cout << "Please enter your name in Capital Letters: ";
	cin >> guestName;
	cout << "Please enter room type (SINGLE/DOUBLE/SUITE): ";
	cin >> roomType;
	
	
	//ROOM SINGLE
	if (roomType == "SINGLE")
	{
	cout << "Please enter your floor desired: ";
	cin >> floor;
	
	if (floor <= 3 && floor >=1)
	{
	cout << "Please enter number of night to stay: ";
	cin >> nights;
	
	if (nights >= 4)
		{
			totalCharges = (45 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (45 * nights);
		}
	}
	else ( floor >= 4 && floor <= 6);
		{
			if (nights >= 4)
		{
			totalCharges = (55 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (55 * nights);
		}	
		}
	}
	
	// ROOM DOUBLE
	else if ( roomType == "DOUBLE")
	{
		cout << "Please enter your floor desired: ";
		cin >> floor;
		
	if (floor <= 3 && floor >=1)
	{
		cout << "Please enter number of night to stay: ";
		cin >> nights;
	if (nights >= 4)
		{
			totalCharges = (60 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (60 * nights);
		}
	}else ( floor >= 4 && floor <= 6);
	{
			if (nights >= 4)
		{
			totalCharges = (72 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (72 * nights);
		}	
	}
	}
	
	//ROOM SUITE
	else ( roomType == "SUITE");
	{
		cout << "Please enter your floor desired: ";
		cin >> floor;
		
	if (floor <= 3 && floor >=1)
	{
		cout << "Please enter number of night to stay: ";
		cin >> nights;
	if (nights >= 4)
		{
			totalCharges = (130 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (130 * nights);
		}
	}else ( floor >= 4 && floor <= 6);
	{
			if (nights >= 4)
		{
			totalCharges = (215 * nights) / 0.1;
		}
		else ( nights <= 3);
		{
			totalCharges = (215 * nights);
		}	
	}
	}
	
	cout << endl;
	cout <<"     Welcome to AQF Hotel" << endl;
	cout <<"WARM REGARDS FROM US," << guestName << endl;
	cout << setfill('-') << setw(50) << '-' << endl;
	cout <<" ROOM TYPE    : " << roomType << endl;
	cout <<" FLOOR        : " << floor << endl;
	cout <<" DURATION     : " << nights << " " << "day(s)" << endl;
	cout <<" TOTAL CHARGES: " << totalCharges;
	 
	
	return 0;
}
