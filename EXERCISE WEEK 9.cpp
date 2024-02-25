#include <iostream>
#include <vector>
using namespace std;

int main ()
{
	int score, countA=0, numberOfScore=0;
	int count;
	int wishScore;
	
	cout << "How many scores you wish to enter: ";
	cin >> wishScore;
	cout << endl;
	
	vector<int> store(wishScore);
	
	for (count=1; count<=wishScore; count++)
	{
		cout << "Enter score " << count << ": ";
		cin >> score;
		
		if (score > 80)
		{
			countA++;
		}
	}
	
	cout << "\nThere are " << countA << " scores that exceed 80." << endl;
	
	return 0;
}
