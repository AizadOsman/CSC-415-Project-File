#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	float income;
	string status;
	
	//input from user
	cout << "Enter your income: ";
	cin >> income;
	
	//Multiple Selection Structure
	if (income <= 3000)
		status = "Lower income";
	else if (income > 3000 && income <= 5000)
		status = "Middle income";
	else if (income > 5000 && income <= 10000)
		status = "High income";	
	else if (income > 10000)
		status = "Highest income";
	
	cout << "Your status income is " << status;
	
	return 0;
}
