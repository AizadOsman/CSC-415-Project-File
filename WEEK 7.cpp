#include <iostream>

using namespace std;

int main ()
{
	int select;
	double fnum, snum, sum, prod, sub;
	
	cout << "Please enter two numbers." << endl;
	cout << "\n The first number: ";
	cin >> fnum;
	cout << " The second number: ";
	cin >> snum;
	
	cout << endl;
	cout << " Enter a select code from list below: ";
	cout << "\n     1 : addition";
	cout << "\n     2 : multiplication";
	cout << "\n     3 : subtraction";
	cout << "\n\n   Enter selection >> ";
	cin >> select;
	
	switch (select)
	{
		case 1 : 
		sum = fnum + snum;
		cout << "\n   Your answer is " << sum;
		break;
		
		case 2 : 
		prod = fnum * snum;
		cout << "\n   Your answer is " << prod;
		break;
		
		case 3 :
		sub = fnum - snum;
		cout << "\n   Your answer is " << sub;
		break;
		
		default: cout << "Invalid number";
	}
	
	return 0;
}
