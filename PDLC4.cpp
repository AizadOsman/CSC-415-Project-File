#include <iostream>
using namespace std;

int main ()
{
	float x1, y1, x2, y2, midpointX, midpointY;
	
	cout << " Enter the first coordinate(x1): ";
	cin >> x1;
	cout << " Enter the first coordinate(y1): ";
	cin >> y1;
	cout << " Enter the second coordinate(x2): ";
	cin >> x2;
	cout << " Enter the second coordinate(y2): ";
	cin >> y2;
	
	midpointX = (x1 + x2) / 2;
	midpointY = (y1 + y2) / 2;
	
	cout << endl;
	cout << " The midpoint of the x asis is: " << midpointX << endl;
	cout << " The midpoint of the y asis is: " << midpointY;
	
	return 0;	
}
