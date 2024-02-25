/*
* File name: LAB1.cpp
* Programmer: Muhammad Aizad Bin Osman
* Matric No: 2022782423
* Assignment: Lab 1
* Program Purpose: LAB 1 ASSIGNMENT
* Date of Submission: 29 April 2022
*/

#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	
	int floor, night;
	float rate, payment, discount;
	string guestName, roomType;
	
	
	cout << "Please enter your name in CAPITAL LETTER: ";
	getline (cin, guestName);
	cout << "Please enter room type (SINGLE/DOUBLE/SUITE): ";
	cin >> roomType;
	cout << "Please enter floor desired (1-6): ";
	cin >> floor;
	cout << "Please enter number nights to stay: ";
	cin >> night;
	

	if (roomType == "SINGLE" && floor <= 3 && night <= 4)
	{
		rate = 45;
		payment = rate * night;
	}
	
	if (roomType == "SINGLE" && floor <= 3 && night > 4)
	{
		rate = 45;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
	if (roomType == "SINGLE" && floor > 3 && night <= 4)
	{
		rate = 55;
		payment = rate * night;
	}
	
	if (roomType == "SINGLE" && floor > 3 && night > 4)
	{
		rate = 55;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
	if (roomType == "DOUBLE" && floor <= 3 && night <= 4)
	{
		rate = 60;
		payment = rate * night;
	}
	
	if (roomType == "DOUBLE" && floor <= 3 && night > 4)
	{
		rate = 60;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
	if (roomType == "DOUBLE" && floor > 3 && night <= 4)
	{
		rate = 72;
		payment = rate * night;
	}
	
	if (roomType == "DOUBLE" && floor > 3 && night > 4)
	{
		rate = 72;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
	if (roomType == "SUITE" && floor <= 3 && night <= 4)
	{
		rate = 130;
		payment = rate * night;
	}
	
	if (roomType == "SUITE" && floor <= 3 && night > 4)
	{
		rate = 130;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
		if (roomType == "SUITE" && floor > 3 && night <= 4)
	{
		rate = 215;
		payment = rate * night;
	}
	
	if (roomType == "SUITE" && floor > 3 && night > 4)
	{
		rate = 215;
		discount = (rate * night) * 0.1;
		payment = (rate * night) - discount;
	}
	
	cout << endl;
	cout << "    WELCOME TO AQF HOTEL" << endl;   
	cout << " WARM REGARDS FROM US," << guestName << endl;
	cout << setfill('-') << setw(50) << '-' << endl;
	cout << " ROOM TYPE    : " << roomType << endl;
	cout << " FLOOR        : " << floor << endl;
	cout << " DURATION     : " << night << " " << "day (s)" << endl;
	cout << " TOTAL CHARGE : " << payment;
	
	
	return 0;
}
