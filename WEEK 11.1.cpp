//WEEK 11

//---------------FUNCTION CMATH & IOMANIP--------------
 /*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	int number;
	double answer;
	
	cout << "Enter a number: ";
	cin >> number;
	
	answer = pow (number,13);
	
	cout << setprecision(2) << fixed;
	cout << number << " to the number of 13 is " << answer << endl;
	
	return 0;
} */




//------------------------FUNCTION CCTYPE f and m also can be entered---------------------
/*#include <iostream>
#include <cctype>
using namespace std;

int main ()
{
	char gender;
	
	cout << "Enter your gender: ";
	cin >> gender;
	
	gender = toupper (gender);
	
	if (gender == 'F')
	{
		cout << "You are a Female." << endl;
	}
	else if (gender == 'M')
	{
		cout << "You are a Male.";
	}
	else
	{
		cout << "Wrong gender!";
	}
	
	return 0; 
} */


//---------------------Function call ----------------

/*#include <iostream>
using namespace std;

float volumeC (float, float);  //function declaration

int main () // main function
{
	float radius, height;
	
	cout << "Enter the radius of cylinder: ";
	cin >> radius;
	
	cout << "Enter the height of cylinder: ";
	cin >> height;
	
	cout << "Volume of cylinder: " << volumeC( radius , height) << endl; //call function
	
	return 0;
} 
float volumeC (float r, float h) //function definition
{
	float volume;
	volume = 3.14 * r * r * h;
	return volume;
	
} */

