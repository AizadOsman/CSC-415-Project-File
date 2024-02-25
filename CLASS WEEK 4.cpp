#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <cstdio>
using namespace std;

int main ()
{
	//cout << sqrt (16) << endl;  //built-in function
	//cout << fabs (2.3 * 4.6) << endl;
	//cout << pow (2, 3);
	
	//cout << setfill('x') << setw(50) << 8 << endl; // setkan berapa banyak barisan x
	//cout << fixed << setprecision (2) << 3.14159 << endl; // setkan berapa banyak perpuluhan nk letak
	//cout << setw(15) << right << 3.1416;
	
	/*string name;
	cout << "What is your name? ";
	cin >> name;
	cout << "Welcome " << name << endl;
	cout << "The length of your name: " << name.length() << endl;
	cout << "The substring of your name: " << name.substr(2,4) << endl; // outputdia akan jadi Zad A=0 I=1 Z=2 A=3 D=4
	cout << name + ", you have to attend the class.";*/
	
	
	/*An array of character
	char name[30];
	char message[200];
	
	cout << "Enter your name: ";
	cin.getline(name, 30);
	cout << "Enter your message: ";
	cin.getline(message, 200);
	cout << name << " has a message." << endl;
	cout << "Message: " << message;
	
	char address[100];
	cout << "Enter your address: ";
	gets(address);
	cout<< "You live in: " << address;*/
	
	char str1[10] = "Happy";
	char str2[10];
	strcpy(str1, str2);
	cout << str2;

	
	
	return 0;
}
