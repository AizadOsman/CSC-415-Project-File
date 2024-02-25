#include <iostream>
using namespace std;


int main ()
{
	int Player_ID[6] = {101, 102, 103, 104, 105, 106};
	float Point[6] = {55.2, 70.7, 65.5, 88.9, 35.6, 22.5};
	
	int index;
	int max = Point[0];
	for(index=1; index<6; index++)
	{
		if(Point[index] > max)
		max = Point[index];
		cout << "Player who get highest mark: " << max << endl;
 	}		


	

	
	
	return 0;
}
