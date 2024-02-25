//Q1
/*#include <iostream>
using namespace std;

int main ()
{
	float foo[5] = {1.5,8.4,3.3,6.2,12.4};
	
	for (int i=0; i<5; i++)
	{
		cout << foo[i] << endl;
	}
	
	
	return 0;
} */

//Q2
/* #include <iostream>
using namespace std;

int main ()
{
	int number[10];

	for(int i=0; i<10; i++)
	{
		cout << "Enter number " << (i+1) << ": ";
		cin >> number[i];
	}
	
	cout << "The entered number are: " << endl;
	for (int x=0; x<10; x++)
	{
		cout << number[x] << endl;
	}

	
	return 0;
}
 */

//Q4
/*#include <iostream>
using namespace std;

int main ()
{
	int number[30];
	int total = 0;
	
	for (int i=0; i<30; i++)
	{
		cout << "Pleaase enter number " << (i+1) << ": ";
		cin >> number[i];
		total = total + number[i];
	}
	cout << "\nThe total of the number is: " << total;
	
	return 0;
} */


//Q5
/*#include <iostream>
using namespace std;

int main ()
{
	int number[20];
	
	for (int i=0; i<20; i++)
	{
		cout << "Please enter number: ";
		cin >> number[i];
	}
	
	cout << "The number entered in reverse order: " << endl;
	for (int x=19; x>=0; x--)
	{
		cout << number[x] << endl;
	}

	
	return 0;
} */

//Q6
/* #include <iostream>
using namespace std;

int main ()
{
	int array[8];
	
	for (int x=0; x<8; x++)
	{
		cin >> array[x];
		array[x] =  array[x] - 5;
	}
	
	cout << "The list of the number after minus 5: " << endl;
	for (int x=0; x<8; x++)
	{
		cout << array[x] << endl;
	}
	
	return 0;
} */

//Q7

/*#include <iostream>
using namespace std;

int main ()
{
	int number[10];
	for(int i=0; i<10; i++)
	{
		cin >> number[i];
	}
	
	int min = number[0];
	int max = number[0];
	
	for (int i=1; i<10; i++)
	{
		if (number[i] < min)
			min = number[i];
		if (number[i] > max)
			max = number[i];
	}
	cout << "Range " << min << " - " << max;
} */

//Q8
/*#include <iostream>
using namespace std;

int main ()
{
	char month[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
	
	for (int i =0; i<12; i++)
	{
		if (month[i] == 'A')
			cout << "January" << endl;
		else if (month[i] == 'B')
			cout << "February" << endl;
		else if (month[i] == 'C')
			cout << "March" << endl;
		else if (month[i] == 'D')
			cout << "April" << endl;
		else if (month[i] == 'E')
			cout << "May" << endl;
		else if (month[i] == 'F')
			cout << "June" << endl;
		else if (month[i] == 'G')
			cout << "July" << endl;
		else if (month[i] == 'H')
			cout << "August" << endl;
		else if (month[i] == 'I')
			cout << "September" << endl;
		else if (month[i] == 'J')
			cout << "October" << endl;
		else if (month[i] == 'K')
			cout << "November" << endl;
		else if (month[i] == 'L')
			cout << "December" << endl;
	}
	
	return 0;
} */

//Q9
/*#include <iostream>
using namespace std;

int main ()
{
	float temp[7];
	float total=0;
	float average;
	
	for (int i=0; i<7; i++)
	{
		cout << "Please enter temperature for day " << (i+1) << ": ";
		cin >> temp[i];
		total = total + temp[i];
	}
	average = total / 7;
	
	cout << "The average of the temperature is: " << average;
	
	return 0;
} */

//Q10
/*#include <iostream>
using namespace std;

int main ()
{
	int exam[6] = {78, 45, 90, 78, 50, 68};
	
	for (int i=0; i<6; i++)
	{
		cout << exam[i] << endl;
	}
	
	
	return 0;
} */

//Q11

#include <iostream>
using namespace std;

int main ()
{
	float salary[10];
	
	for (int i=0; i<10; i++)
	{
		cout << "Please enter salary " << (i+1) << ": ";
		cin >> salary[i];
	}
	
	float lowestSalary = salary[0];
	for (int i=1; i<10; i++)
	{
		if (salary[i] < lowestSalary)
			lowestSalary = salary[i];
	}
	cout << "The lowest salary is: " << lowestSalary;
	
	return 0;
}

