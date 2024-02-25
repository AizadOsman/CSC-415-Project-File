/*#include <iostream>
using namespace std;

int main ()
{
	int number = 0;
	int sum = 0;
	
	do {
		sum += number;
		
		cout << "Enter a number: ";
		cin >> number;
	}
	while (number >= 0);
	
	cout << "\nThe sum is " << sum << endl;

	return 0;
} */

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <iostream>
using namespace std;

int main ()
{
	float salary, average, totalsalary = 0;
	int n = 1;
	
	for (n=1; n<=5; n++)
	{
		cout << "Salary of employee " << n;
		cin >> salary;
		totalsalary = totalsalary + salary;
	}
	average = totalsalary / 5;
	cout << "Average salary is RM " << average << endl;
	

	return 0;
} */

////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

int main ()
{
	int score= 0, counter= 0, sum=0 ;
	
	cout << "Enter score: ";
	cin >> score;
	
	while (score != -99)
	{
		if (score> 80)
		{
			counter ++;
			sum += score;
		}
		cout << "Enter score: ";
		cin >> score;
	}
	cout << "\nCount of scores > 80" << counter;
	cout << "\nTotal score: " << sum;
	
	return 0;
}
