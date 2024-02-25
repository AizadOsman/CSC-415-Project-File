//MAKE SURE CREATE TXT FILE FIRST
//READ STRUCT FILE
#include <iostream>
#include <fstream>
using namespace std;

struct sales_record
{
	int sales_id;
	string product_name;
	double sales_amount;
};


int main ()
{
	sales_record jan;
	ifstream inData;
	inData.open("salesJan.txt");
	
	for (int i = 0; i<3; i++)
	{
		inData >> jan.sales_id >> jan.product_name >> jan.sales_amount;
		cout << jan.sales_id << " " << jan.product_name << " " << "RM" << jan.sales_amount << endl;
	}
	inData.close()
;	
	
	return 0;
}

