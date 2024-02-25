#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void header();
void main_menu(int & choice);


int main ()
{	
	int choice;
	char name;
	
	header();
	main_menu(choice);

	
	return 0;
}

//HEADER SECTION
void header()
{
	cout << setfill('=') << setw(53) << '=' << endl;
	cout << " WELCOME TO DAMANSARA HERMES HOTEL BILLING SYSTEM" << endl;
	cout << "\t\t* MAIN MENU *" << endl;
	cout << setfill('=') << setw(53) << '=' << endl;
}

//MAIN MENU
void main_menu(int & choice)
{
	string name;
	
	cout << "Please enter your name: ";
	cin >> name;
	cout << "\n HI " << name << "," << " How can I assist you?" << endl;
	cout << "\t 1 : Room Reservation" << endl;
	cout << "\t 2 : Hotel Meals" << endl;
	cout << "\t 3 : Exit" << endl;
	cout << " Please enter your choice [1-3] : ";
	cin >> choice;
	
	if (choice == 1)
	{
		system("cls");
		int total_person, days;
		char room_class, yes_no_meals;
		
		cout << name << "," << " Please take a look of our offer room." << endl << endl;
		cout << setfill('-') << setw(60) << '-' << endl;
		cout << "\t\t ROOM RESERVATION" << endl;
		cout << setfill('-') << setw(60) << '-' << endl;
		cout << setfill(' ') << setw(7) << " [ROOM CLASS]" << setw(45) << " [PRICE per person]" << endl;
		cout << endl;
		cout << setfill(' ') << setw(7) << " LUXURY [L]" << setw(43) << " RM 130" << endl;
		cout << setfill(' ') << setw(7) << " ECONOMIC [E]" << setw(40) << " RM 70" << endl;
		cout << setfill(' ') << setw(7) << " BASIC [B]" << setw(43) << " RM 30" << endl;
		cout << setfill('-') << setw(60) << '-' << endl;
		
		cout << "Please enter your choosen room class [L/E/B]: ";
		cin >> room_class;
		cout << "State the number of people: ";
		cin >> total_person;
		cout << "Enter the number of days to stay: ";
		cin >> days;
		cout << "Do you want to proceed with our hotel meals? [Y-yes/N-no]: ";
		cin >> yes_no_meals;
	}
	else if (choice == 2)
	{
		system("cls");
		
		cout << name << "," << " Please take a look of our offer meals." << endl << endl;
		cout << setfill('-') << setw(100) << '-' << endl;
		cout << "\t\t HOTEL MEALS" << endl;
		cout << setfill('-') << setw(100) << '-' << endl;
		cout << setfill(' ') << setw(7) << " [MENU]" << setw(45) << " [PACKAGE]" << setw(45) << " [PRICE per person]" << endl;
		cout << endl;
		cout << setfill(' ') << setw(7) << " LUXURY [L]" << setw(43) << " RM 130" << endl;
		cout << setfill(' ') << setw(7) << " ECONOMIC [E]" << setw(40) << " RM 70" << endl;
		cout << setfill(' ') << setw(7) << " BASIC [B]" << setw(43) << " RM 30" << endl;
	}
}


