#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	//variable declaration
	float mark;
	char grade;
	
	//input section
	cout << "Please enter your mark: ";
	cin >> mark;
	
	if (mark >= 80)
	{
	cout << "The mark is " << mark;
		grade = 'A';	
	}	
	else
	{
	cout << "The mark is " << mark;
		grade = 'B';	
	}
		
	//display status
	cout << "\nYou get the " << grade << " " << "grade";
	
	return 0;
}
