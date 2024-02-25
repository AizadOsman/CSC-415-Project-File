//ARRAY
#include <iostream>
using namespace std;

int main ()
{
	int list[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	
	cout << "The number in the list is: " << endl;
	for (i=0; i<10; i++)
	cout << list[i] << " ";
	
	cout << endl << endl;
	cout << "Element 3 + Element 4 = " << list[2] + list[3] << endl;
	cout << "Element of 5 is: " << list[4] << endl;
	cout << "Index of 5 is: " << list[5];
	
	int sum = 0;
	for (i =0; i<10; i++)
	
	sum = sum + list[i];
	cout << "\nThe sum up of all these number is: " << sum;
	
	float average;
	average = sum / 10;
	cout << "\nThe average of these numbers is: " << average;
	
	int min;
	min = list[0];
	for (i=1; i<1; i++)
	if (list[i] < min)
	cout << "\nThe minimum value of the list is: " << min;
	
} 

/*int main ()
{
	int mylist[5] = {0};
	int index, max, min, sum = 0;
	float average;
	
	cout << "Please enter any 5 numbers: ";
	
	for(index=0; index<5; index++)
	cin >> mylist[index];
	
	cout << "\nThe number in the list are: ";
	
	for(index=0; index<5; index++)
	cout << mylist[index] << " ";
	
	max = mylist[0];
	for (index=1; index<5; index++)
		if (mylist[index] > max)
		max = mylist[index];
	
	cout << "\nThe maximum number in the list is: " << max;
	
	min = mylist[0];
	for (index=1; index<5; index++)
		if(mylist[index] < min)
		min = mylist[index];
		
	cout << "\nThe minimum number in the list is: " << min;
	
	for (int i =0; i<5; i++)
	sum = sum + mylist[i];
	
	cout << "\nThe sum up of all the list is: " << sum;
	
	average = sum / 5;
	cout <<"\nThe average of the list is:  " << average;


	return 0;
} */
