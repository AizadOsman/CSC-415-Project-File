//WEEK 11

/*#include <iostream>
using namespace std;



int main ()
{
	char displaymenu ();

	char choice;	
	cout << "A = chicken Pie";
	cout << "\n B = beef";
	cout << "\n C = carbonara";
	cout << "\n D = donut";
	cout << "Enter a choice: ";
	cin >> choice;	
	return choice;

	
	
	return 0;
} */



/*#include <iostream>
using namespace std;

int main ()
{
	int addNum (int a , int b );

	int sum = 0;
	sum = a + b;
	return sum;

} */

/*2 Way of declare funtion
1) double larger (double x, double y);
2) double larger (double,double);
*/

#include <iostream>
using namespace std;

//function prototype
int calculatesum (int x, int y);
int findMin (int a, int b);

int main ()
{
	int firstNum, secondNum, sum = 0, min;
	
	cout << "Enter first number: ";
	cin >> firstNum;
	cout << "Enter second number: ";
	cin >> secondNum;
	
	//function call
	sum = calculatesum (firstNum, secondNum);
	min = findMin (firstNum, secondNum);
	
	cout << "\nThe sum is " << sum << endl;
	cout << "The min is " << min;
	
	
	return 0;
}

//function definition
int calculatesum (int x, int y)
{
	int total;
	total = x + y;
	return total;
}

int findMin (int a, int b)
{
	int minValue;
	if ( a < b)
		minValue = a;
	else
		minValue = b;
	return minValue;
}
