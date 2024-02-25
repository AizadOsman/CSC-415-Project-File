//WRITE IN A TXT FILE
//STRUCT
#include <iostream>
#include <fstream>
using namespace std;

struct person
{
	int id;
	char fname[20];
	char lname[20];
};


int main ()
{
	person input1 = {1, "Siti Aminah", "Ahmad"};
	person input2 = {2, "Mahathir", "Lokman"};
	ofstream outData;
	outData.open("Outtest.txt");
	outData << input1.id << " " << input1.fname << " " << input1.lname << endl;
	outData << input2.id << " " << input2.fname << " " << input2.lname << endl;
	outData.close();
	
	
	return 0;
}

