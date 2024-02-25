#include <iostream>
using namespace std;

int main()
{
	// Variable declaration
	int num1, num2, sum = 0;
	float average;
	
	// Input statement
	cout << " Enter first number: ";
	cin >> num1;
	cout << " Enter second number: ";
	cin >> num2;
	
	// Processing
	sum = num1 + num2;
	average = sum / 2;
	
	// Output
	cout << " Your sum is: " << sum << endl;
	cout << " Your average is: " << average;
	
	
	
	
	
	
	return 0;	
}
