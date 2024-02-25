//Question 3

#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	float temp;
	
	cout << "Please enter any temperature in celcius: ";
	cin >> temp;
	
	if ( temp >= 30 )
		cout << "The temperature is hot.";
	else if ( temp >= 23 &&  temp <= 29 )
		cout << "The temperature is warm.";
	else if ( temp >= 17 &&  temp <= 23 )
		cout << "The temperature is comfortable.";
	else if ( temp >= 10 &&  temp <= 16 )
		cout << "The temperature is cool.";
	else if ( temp  >= 0 &&  temp <= 10 )
		cout << "The temperature is cold.";
	else if ( temp < 0 )
		cout << "The temperature reach freezing point.";
	else
		cout << "The input entered is invalid.";
	
	
	return 0;
}
