//EXERCISE BEFORE FINAL

//Q1
//#include <iostream>
//using namespace std;

/*int main ()
{
	int a = 40;
	while (a > 5)
	{
		cout << a << " ";
		a -= 5;
	} 
	
	for (int a = 40; a>5; a -=5)
	cout << a << " ";
	
	return 0;
} */

//Q2
//#include <iostream>
//using namespace std;

/*int main ()
{
	for (int x = 1; x<10; x++)
	cout << x+2 << " "; 
	
	int x = 1;
	while (x < 10)
	{
		cout << x+2 << " ";
		x++;	
	}
	
	
	return 0;
} */

//Q3
/*#include <iostream>
using namespace std;

int main ()
{
	int i = 5000;
	int year;
	
	do
	{
		cout << "The amount for year " << year++ << " " << "RM " << i << endl;
		i = i + 5000;
	}
	while (i <= 200000);
	
	
	return 0;
} */

//Q3 ANSWER
/*#include <iostream>
using namespace std;

int main ()
{
	float saving;
	int year;
	
	for (saving = 5000; saving <= 200000; saving += 5000)
	year ++;
	
	cout << "The total year is " << year;
} */

//Q4 & Q5	
/*#include <iostream>
using namespace std;

int main ()
{
	int mark[5] = {60, 75, 85, 50, 65};
	int max, index;
	float sum = 0, average;
	
	for(int i=0; i<5; i++)
	sum = sum + mark[i];
	cout << "The total of all marks is: " << sum;
	
	average = sum/5;
	cout << "\nThe average of the marks is: " << average;
	
	max = mark[0];
	for(index=1; index<5; index++)
		if(mark[index] > max)
		max = mark[index];
		
	cout << "\nThe maximum mark is: " << max;
	
	return 0;
} */

//Q6
/*#include <iostream>
using namespace std;

char alphabet(char);

int main ()
{
	char letter;
	
	alphabet(letter);
	
	return 0;
}

char alphabet(char letter)
{
	char value;
	
	cout << "Please enter any alphabet: ";
	cin >> letter;
	
	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
	{
		value = 'v';
		cout << value;	
	}
	else
	{
		value = 'c';
		cout << value;
	}
	
	return value;
} */


//Q7
/*#include <iostream>
using namespace std;

void input_data(float &income);
float calculateBonus(float income);

int main ()
{
	float income;
	
	input_data(income);
	cout << calculateBonus(income);
	
	
	return 0;
}

void input_data(float &income)
{
	cout << "Please enter your salary: ";
	cin >> income;
}

float calculateBonus(float income)
{
	float bonus;
	
	bonus = income * 0.2;
	
	return bonus;
} */



//Q8 & Q9
/*#include <iostream>
#include <fstream>
using namespace std;

struct member
{
	int memberID;
	string name;
	string handphone;
};

int main ()
{
	member input1 = {101, "Ali", "0138589478"};
	member input2 = {102, "Ahmad", "0169858785"};
	ofstream outData;
	outData.open("memberData.txt");
	outData << input1.memberID << " " << input1.name << " " << input1.handphone << endl;
	outData << input2.memberID << " " << input2.name << " " << input2.handphone << endl;
	outData.close(); 
	
	return 0;
} */


//Q10

#include <iostream>
#include <fstream>
using namespace std;

struct student
{
	string name;
	int mark;	
};

int main ()
{
	float total, average;
	student classA;
	ifstream inData;
	inData.open("mark.txt");
	
	for (int i = 0; i<4; i++)
	{
		inData >> classA.name >> classA.mark;
		cout << classA.name << " " << classA.mark << endl;
		
		total = total + classA.mark;
	}
	average = total / 4;
	cout << "\nThe average mark is " << average;
	inData.close();
	
	
	return 0;
} 
