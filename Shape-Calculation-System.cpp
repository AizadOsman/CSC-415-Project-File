//LAB ASSIGNMENT 3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	int calculation, choice;
	int count_triangle=0, count_square=0, count_area=0, count_perimeter=0;
	float triangleBase, triangleHeight, area_triangle, perimeter_triangle, sideA, sideB, sideC;
	float area_square, squareSide, perimeter_square;
	char yes_no;
	
	cout << setfill('=') << setw(50) << '=' << endl;
	cout << "\tWELCOME TO SHAPE CALCULATION SYSTEM" << endl;
	cout << setfill('=') << setw(50) << '=' << endl;
	
	do 
	{
			cout << endl;
			cout << " Choose the shape below by entering the shape code [1/2]: ";
			cout << "\n     1 : TRIANGLE";
			cout << "\n     2 : SQUARE";
			cout << "\n     Please enter your choice: ";
			cin >> choice;
	
			cout << endl;
			cout << " Please select type of calculation [1/2]: ";
			cout << "\n     1 : AREA";
			cout << "\n     2 : PERIMETER";
			cout << "\n     Enter the type of calculation: ";
			cin >> calculation;
	
	//TRIANGLE AREA
	if (choice == 1 && calculation == 1)
	{
		cout << "\n";
		cout << setfill ('+') << setw(12) << '+' << "TRIANGLE AREA" << setw(12) << '+' << endl;
		cout << " Please enter the base (cm): ";
		cin >> triangleBase;
		cout << " Please enter the height (cm): ";
		cin >> triangleHeight;
		
		count_triangle++;
		count_area++;
		area_triangle = 0.5 * triangleBase * triangleHeight;
		
		cout << endl;
		cout << setfill ('+') << setw(10) << '+' << "Result of Calculation" << setw(10) << '+' << endl;
		cout << " Area: " << area_triangle;
	}
	
	//TRIANGLE PERIMETER
	else if (choice == 1 && calculation == 2)
	{
		cout << "\n";
		cout << setfill ('+') << setw(12) << '+' << "TRIANGLE PERIMETER" << setw(12) << '+' << endl;
		cout << " Please enter side A (cm): ";
		cin >> sideA;
		cout << " Please enter side B (cm): ";
		cin >> sideB;
		cout << " Please enter side C (cm): ";
		cin >> sideC;
		
		count_triangle++;
		count_perimeter++;
		perimeter_triangle = sideA + sideB + sideC;
		
		cout << endl;
		cout << setfill ('+') << setw(10) << '+' << "Result of Calculation" << setw(10) << '+' << endl;
		cout << " Perimeter: " << perimeter_triangle;
	}
	
	//SQUARE AREA
	else if (choice == 2 && calculation == 1)
	{
		cout << "\n";
		cout << setfill ('+') << setw(12) << '+' << "SQUARE AREA" << setw(12) << '+' << endl;
		cout << " Please enter the side (cm): ";
		cin >> squareSide;
		
		count_square++;
		count_area++;
		area_square = pow (squareSide, 2);
		
		cout << endl;
		cout << setfill ('+') << setw(10) << '+' << "Result of Calculation" << setw(10) << '+' << endl;
		cout << " Area: " << area_square;
	}
	
	//SQUARE PERIMETER
	else if (choice == 2 && calculation == 2)
	{
		cout << "\n";
		cout << setfill ('+') << setw(12) << '+' << "SQUARE PERIMETER" << setw(12) << '+' << endl;
		cout << " Please enter side (cm): ";
		cin >> squareSide;
		
		count_square++;
		count_perimeter++;
		perimeter_square = 4 * squareSide;
		
		cout << endl;
		cout << setfill ('+') << setw(10) << '+' << "Result of Calculation" << setw(10) << '+' << endl;
		cout << " Perimeter: " << perimeter_square;
	}
	
	//INVALID CODE
	else if ( choice != 1 && choice != 2 && calculation != 1 && calculation != 2)
	{
		cout << "\n Invalid Code !!";
	}
		cout << endl;
		cout << "\n Do you want to continue (Y-yes/N-no): ";
		cin >> yes_no;
	} while (yes_no != 'n' && yes_no != 'N');
	
	//SHAPE CALCULATION REPORT
	cout << endl;
	cout << setfill ('*') << setw(13) << '*' << "SHAPE CALCULATION REPORT" << setw(13) << '*' << endl; 
	cout << endl;
	cout << " Number of Calculated Triangle: " << count_triangle << endl;
	cout << " Number of Calculated Square: " << count_square << endl;
	cout << " Total of area calculated: " << count_area << endl;
	cout << " Total of perimeter calculated: " << count_perimeter << endl;
	
	return 0;
}

	
