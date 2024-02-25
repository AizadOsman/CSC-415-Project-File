#include <iostream>
using namespace std;

void input_data (float & income);
float calculate_tax (float income);
void display (float tax_payable,float netIncome);

int main ()
{
	float income, tax_payable, netIncome;
	
	input_data (income);
	
	tax_payable = calculate_tax(income);
	netIncome = income - tax_payable;
	
	display (tax_payable, netIncome);

	return 0;	
}   

void input_data (float & income)
{	
	cout << "Please enter your income: " ;
	cin >> income;
}

float calculate_tax (float income)
{
	float tax_payable;
	
	if (income <= 25350.00)
	{
		tax_payable = income * 0.15;
	}
	else if (income >= 25350.01 && income <= 61400.00)
	{
		tax_payable = (0.15 * 25350.00) + (income - 25350.00) * 0.28;
	}
	else if (income >= 61400.01 && income <= 128100.00)
	{
		tax_payable = (0.15 * 25350.00) + (0.28 * 36050.00) + (income - 25350.00 - 36050.00) * 0.31;
	}
	else if (income > 128100.00)
	{
		tax_payable = (0.15 * 25350.00) + (0.28 * 36050.00) + (0.31 * 66700.00) + (income - 25350.00 - 36050.00 - 66700.00) * 0.36;
	}
	
	return tax_payable;
} 

void display (float tax_payable, float netIncome)
{
	cout << "\nYou are taxed at RM " << tax_payable << endl;
	cout << "Your net income is RM " << netIncome;
	
}

