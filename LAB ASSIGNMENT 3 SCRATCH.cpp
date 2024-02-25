//LAB ASSIGNMENT 3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	int calculation, triangle, square;
	float triangleBase, triangleHeight, areaOfTriangle, perimeterOfTriangle, sideA, sideB, sideC;
	float areaOfSquare, squareSide, perimeterOfSquare;
	char yesOrNo, choice;
	
	cout << setfill('=') << setw(50) << '=' << endl;
	cout << "\tWELCOME TO SHAPE CALCULATION SYSTEM" << endl;
	cout << setfill('=') << setw(50) << '=' << endl;
	
	cout << endl;
	cout << " Choose the shape below by entering the shape code [A/B]: ";
	cout << "\n     A : TRIANGLE";
	cout << "\n     B : SQUARE";
	cout << "\n     Please enter your choice: ";
	cin >> choice;
	
	switch (choice)
	{
		case 'a':
		case 'A':
			triangle;
			break;
			
		case 'b':
		case 'B':
			square;
			break;
	}
	
	cout << endl;
	cout << " Please select type of calculation [1/2]: ";
	cout << "\n     1 : AREA";
	cout << "\n     2 : PERIMETER";
	cout << "\n     Enter the type of calculation: ";
	cin >> calculation;
	
	if (calculation == 1 || choice == 'A' || choice == 'a')
	{
		cout << "\n";
		cout << setfill ('+') << setw(12) << '+' << "TRIANGLE AREA" << setw(12) << '+' << endl;
		cout << "Please enter the base (cm): ";
		cin >> triangleBase;
		cout << "Please enter the height (cm): ";
		cin >> triangleHeight;
		areaOfTriangle = 0.5 * triangleBase * triangleHeight;
		cout << endl;
		cout << setfill ('+') << setw(10) << '+' << "Result of Calculation" << setw(10) << '+' << endl;
		cout << "Area: " << areaOfTriangle;
	}
	
	
	return 0;
}
