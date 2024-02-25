#include <iostream>
using namespace std;

int main ()
{
	float radius, distance, volume;
	
	cout << " Please enter radius: ";
	cin >> radius;
	cout << " Please enter distance: ";
	cin >> distance;
	
	volume = 3.142 * radius * radius * (200 - distance);
	
	cout << " The volume is: " << volume;
	
	return 0;	
}
