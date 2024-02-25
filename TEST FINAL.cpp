#include <iostream>
using namespace std;

int main ()
{
	string product_code;
	int quantity;
	char yes_no;
	float price, taxPrice;
	float total_price=0, total, count_tax=0, Sale_after_tax=0;
	
	
	do
	{
			cout << "\nPlease enter product code: ";
	cin >> product_code;
	
	cout << "Please enter the quantity: ";
	cin >> quantity;
	
	if (product_code == "AT" && quantity <=50)
	{
		price = 4.00;
		taxPrice = 4.00 * 0.06;
		cout << "\nCURRENT ORDER BEFORE TAX" << endl;
		cout << "Total : RM " << price;
	}
	
	
	else if(product_code == "AT" && quantity >=51 && quantity <=100)
	{
		price = 3.00;
		taxPrice = 3.00 * 0.06;
		cout << "\nCURRENT ORDER BEFORE TAX" << endl;
		cout << "Total : RM " << price;
	}
	
	else if(product_code == "AT" && quantity >100)
	{
		price = 2.50;
		taxPrice = 2.50 * 0.06;
		cout << "\nCURRENT ORDER BEFORE TAX" << endl;
		cout << "Total : RM " << price;
	}
	
	else if(product_code == "GM" && quantity >=20 && quantity <=50)
	{
		price = 9.00;
		taxPrice = 9.00 * 0.06;
		cout << "\nCURRENT ORDER BEFORE TAX" << endl;
		cout << "Total : RM " << price;
	}
	
	else if(product_code == "GM" && quantity >50)
	{
		price = 7.00;
		taxPrice = 7.00 * 0.05;
		cout << "\nCURRENT ORDER BEFORE TAX" << endl;
		cout << "Total : RM " << price;
	}
	
	else
	{
		cout << "Invalid code";
	}
	
		cout << endl;
		cout << "\n Do you want to continue (Y-yes/N-no): ";
		cin >> yes_no;
		
		
	total_price = total + price;
	count_tax = count_tax + taxPrice;
	Sale_after_tax = Sale_after_tax + price + taxPrice;
	
	} while (yes_no != 'n' && yes_no != 'N');
	

	
	cout << endl;
	cout << "FGH Healthcare Sdn Bhd" << endl; 
	cout << endl;
	cout << "CURRENT SALES AFTER TAX " << endl;
	cout << "Total sales : RM " << total_price << endl;
	cout << "Tax : RM " << count_tax << endl;
	cout << "Total Sales After Tax: RM " << Sale_after_tax;
	
	return 0;
} 


/* #include <iostream>
using namespace std;

void getData(string name, int & hours);
int calcGrossPay(int hours);
float calcDeduction (float gross_pay);

int main ()
{
	string name;
	int hours;
	float Net_pay, gross_pay;
	char yes_no;
	
	do
	{
		getData(name, hours);
		Net_pay = calcGrossPay(hours) - calcDeduction(gross_pay);
		
		cout << "\nPAYSLIP" << endl;
		cout << "Employee ID : " << name << endl;
		cout << "Gross pay   : RM " << calcGrossPay(hours) << endl;
		cout << "Deduction   : RM " << calcDeduction(gross_pay) << endl;
		cout << "Net pay     : RM " << Net_pay;
		
		cout << "\n \n Do you want to continue (Y-yes/N-no): ";
		cin >> yes_no;
	} while (yes_no != 'n' && yes_no !='N');
	
	
	
	
	return 0;
}

void getData(string name, int & hours)
{
	cout << "\nPlease enter your name: ";
	cin >> name;
	
	cout << "Please enter your working hours: ";
	cin >> hours;
}

int calcGrossPay(int hours)
{
	float gross_pay;
	
	if (hours <= 20)
	{
		gross_pay = 15.00;
	}
	else if(hours > 20 && hours <=40)
	{
		gross_pay = (15.00 * 1.5) * hours;
	}
	else if(hours > 40)
	{
		gross_pay = (15.00 * 2) * hours;
	}
	
	return gross_pay;
}

float calcDeduction(float gross_pay)
{
	float total_deduction, income_tax, EPF, employee_club;
	
	income_tax = 0.11;
	EPF = 0.09;
	employee_club = 20.00;
	
	total_deduction = income_tax + EPF + employee_club;
	
	return total_deduction;
} */
