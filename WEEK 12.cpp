
//FUNCTION WITH RETURN VALUE
#include <iostream>
#include <cctype>
using namespace std;

double totalPrice (char, int); //function prototype

int main ()
{
	char room;
	int numday;
	double total;
	
	cout << "Enter the type of the room (F/S): ";
	cin >> room;
	
	room = toupper (room);
	
	cout << "Enter the number of days: ";
	cin >> numday;
	
	total = totalPrice (room, numday); //call function
	
	cout << "Total price is : RM" << total << endl;
	
	return 0;
}
double totalPrice (char r, int d) //function definition
{
	double charge;
	
	if (r == 'F')
	{
		charge = d * 255.00;
	}
	else if (r == 'S')
	{
		charge = d * 220.00;
	}
	else
	{
		cout << "Your input is invalid!" << endl;
	}
	
	return charge;
} 

//EXERCISE 1 (A)
/*
void calcLatestBalance (float accBalance)
{
	float latestBalance;
	
	latestBalance = accBalance * 1.05;
	
	cout << "The latest balance is : " << latestBalance;
	
}

//EXERCISE 1 (B)
void customerInfo (stringname, int accNum, float accBalance, float latestBalance)
{
	cout << "Name: " << name;
	cout << "Acc number: " << accNum;
	cout << "Acc Balance: " << accBalance;
	cout << "Latest acc balance: " << latestBalance;
} */


