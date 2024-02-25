#include <iostream>
using namespace std;

int main()
{
	int n, a, sum = 0;
	float d;
	
	
	cout << " Enter first numbers from 1 to 100: ";
	cin >> a;
	cout << "Enter second numbers from 1 to 100: ";
	cin >> n;
	
	d = a - n;
	sum = (n/2) * (2*a+(n-1)*d);
	
	
	cout << "The sum of the number is: "<< sum; 

	return 0;
}
