#include <iostream>
using namespace std;

int main()
{
	float farenheit, celcius;
	
	cout << "Enter temperature in celcius: ";
	cin >> farenheit;
	
	celcius = 5.0/9.0 * (farenheit -32.0);
	
	cout << celcius << " degrees celcius is equivalent to " << farenheit << " degrees farenheit " ;
	
	
	
	return 0;
}
