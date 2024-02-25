//READ TXT FROM FILE
//MAKE SURE CREATE TXT FILE FIRST
//FILE
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	
	ifstream inData;
	inData.open("input.txt");
	
	string firstname;
	string lastname;
	int age;
	
	inData >> firstname >> lastname >> age;
	cout << firstname << " " << lastname << " " << age << endl;
	inData >> firstname >> lastname >> age;
	cout << firstname << " " << lastname << " " << age << endl;
	inData.close();
	
	return 0;
}


