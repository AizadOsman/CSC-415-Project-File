//Question 1

#include <iostream>
using namespace std;

int main ()
{
	int num;
	
	cout << "Please enter any number: ";
	cin >> num;
	
	if (num % 2 == 0)
		cout << num << " is even number.";
	else
		cout << num << " is odd number."; 
	
	return 0;
}
