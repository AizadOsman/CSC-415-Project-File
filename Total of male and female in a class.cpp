//Total of male and female in a class
#include <iostream>
using namespace std;

int main ()
{
	int count, countM=0, countF=0;
	char gender;
	
	for (count=1; count<=10; count++)
	{
		cout << "Enter gender of student " << count << " (F/M) : ";
		cin >> gender;
		
		if (gender == 'M' || gender == 'm')
		{
			countM++;
		}
		else if (gender == 'F' || gender == 'f')
		{
			countF++;
		}
	}
	
	cout << "\nThe number of female students are : " << countF << endl;
	cout << "The number of male students are : " << countM << endl;
	
	
	return 0;
}
