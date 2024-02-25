//QUESTION 5

#include <iostream>
using namespace std;

int main ()
{
	int menu, quantity;
	float price, discount, normalPrice, discountRM, priceAfterDiscount;
	char coupon;
	
	cout << " Choose a menu [1/2]: ";
	cout << "\n     1 : Orange Juice";
	cout << "\n     2 : Apple juice";
	cout << "\n\n   Enter selection >> ";
	cin >> menu;
	
	cout <<"   Enter quantity: ";
	cin >> quantity;
	
	switch (menu)
	{
		case 1:
			price = 2.90;
			break;
		
		case 2:
			price = 3.90;
			break;
				
		default : cout << "Invalid choice.";
	}
	
	cout << endl;
	cout <<" Do you have a coupon for discount [Y-yes/ N-no]: ";
	cin >> coupon;
	
	switch (coupon)
	{	
		case 'Y':
		case 'y': discount = 0.1;
	}
	
	normalPrice = price * quantity;
	discountRM = normalPrice * discount;
	priceAfterDiscount = normalPrice - (discountRM);

	cout << endl;
	cout << " Your normal price is RM " << normalPrice << endl;
	cout << " Your price after discount RM " << priceAfterDiscount;
	
	return 0;
}
