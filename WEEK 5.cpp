#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	// variable declaration
	char roomType;
	float rate, payment;
	int numOfNight;
	
	// input section
	cout << "Enter the room type: ";
	cin >> roomType;
	cout << "How many night?: ";
	cin >> numOfNight;
	
	// selection structure
	if (roomType == 'S' || roomType == 's')
	{
	rate = 180;
	payment = numOfNight * rate;
	cout << "Your room rate is " << rate;
	cout << "\nYou have to pay RM " << payment;	
	}

		
	
	
	
	return 0;
}
