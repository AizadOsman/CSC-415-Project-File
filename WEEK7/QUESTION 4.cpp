//QUESTION 4

#include <iostream>
using namespace std;

int main ()
{
	float purchase, discount1, discount2;
	
	cout << "Plese enter your purchase amount: ";
	cin >> purchase;
	
	discount1 = purchase * 0.05;
	discount2 = purchase * 0.08;
	
	if ( purchase > 500)
	{
		if ( purchase >= 501 && purchase <= 1000 )
			cout << "You are eligible for discount and your total amount is RM " << purchase - discount1;
		if ( purchase > 1000)
			cout << "You are eligible for discount and your total amount is RM " << purchase - discount2;
	}
	else if ( purchase <= 500)
		cout << "You are not eligible for discount and your total amount is RM " << purchase;

	return 0;
}
