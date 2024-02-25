#include <iostream>
using namespace std;

int main ()
{
	char roomType;
	int night;
	float totalCharge, tax;
	
	cout << "Enter type of room [S/L/D]: ";
	cin >> roomType;
	
	cout << "Enter number of night: ";
	cin >> night;
	
	tax = 0.06;
	
	if (roomType = 'S')
		totalCharge = (25000 * night * tax) + tax;
	else if (roomType = 'L')
		totalCharge = (1500 * night * tax) + tax;
	else if (roomType = 'D')
		totalCharge = (750 * night * tax) + tax;
	
	
	cout << "Your total charge is " << totalCharge;
	
	return 0;
}
