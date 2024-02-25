/*
* File name: LAB2.cpp
* Programmer: Muhammad Aizad Bin Osman
* Matric No: 2022782423
* Assignment: Lab 2
* Program Purpose: LAB 2 ASSIGNMENT
* Date of Submission: 25 Mei 2022
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main ()
{
	string salesName;
	float totalSalary, basicSalary, monthlySalary, monthlySales, commission, royalty;
	char status;
	
	cout << "Enter salesman's name: ";
	getline (cin, salesName);
	cout << "State your basic salary: ";
	cin >> basicSalary;
	cout << "State your monthly sales: ";
	cin >> monthlySales;
	cout << "Enter your staff status [T-trainee/ E-executive]: ";
	cin >> status;
	
	if (monthlySales > 30000.00)
		commission = 0.08;
	else if (monthlySales >= 20000.01 && monthlySales <= 30000.00)
		commission = 0.07;
	else if (monthlySales >= 10000.00 && monthlySales <= 20000.00)
		commission = 0.06;
	else if (monthlySales < 10000.00)
		commission = 0.05;
		
	switch (status)
	{
		case 't':
		case 'T': royalty = 0.15;
		break;
		
		case 'e': 
		case 'E': royalty = 0.30;
		break;
		
		default : cout << "Invalid choice.";
	}
	
	totalSalary = basicSalary + (monthlySales * commission) + (monthlySales * royalty);
	
	cout << endl;
	cout << "  PAYSLIP" << endl;
	cout << setfill('-') << setw(50) << '-' << endl;
	cout << "Salesman name: " << salesName << endl;
	cout << "Basic salary: RM" << basicSalary << endl;
	cout << "Commission: RM" << commission << endl;
	cout << "Total salary: RM" << totalSalary << setprecision(2);
	
	return 0;
}
