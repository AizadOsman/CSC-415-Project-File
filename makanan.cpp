#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;


void menu1();
void menu2();
void menu3();
void menu4();
	int menu;
  int roomnum, night;
  char name, roomType;
  string name1; 
  int age, day, month, date;
  char yes_no;
  char meal_time;
	float meal_price, total_meal_price, roomPrice, totalFare;
	int total_set;

int main() 
{
	char name[25];// String Array
  cout<<"Enter your name: ";
  cin.get(name, 25);
       
  system("cls");
  cout<<"\nWelcome to our Hotel, "<< name << endl;
  while(menu!=5) {


    cout << setfill('*') << setw(20) << "*";
    cout << "*\n HOTEL MAIN MENU \n*";
    cout << setfill('*') << setw(20) << "*";
    cout << "\n1. Book a room";
    cout << "\n2. Foods and drinks";
    cout << "\n3. Customer Records";
    cout << "\n4. Staff Only";
    cout << "\n5. Exit system" << endl;
    cout << "\nYour choice: ";
    cin >> menu;


    switch (menu) {

    case 1:menu1();
      break;
    case 2:menu2();
      break;
    case 3:menu3();
      break;
    case 4:menu4();
      break;
    case 5:
      cout << "\nThank You for coming!"
           << "\nPlease come again!";
      break;
    default:{
      cout << "\nInvalid Selection!"
           << "\n\tChoose again\n"
           << endl;
      break;
      }

    }
  } 


return 0;
}

void menu1()
{

  
  while(yes_no!='Y'&& yes_no!='y')
    {system("cls");
  cout << setfill('=') << setw(20) << "=" << endl;
  cout << " ROOM RESERVATION" << endl;
  cout << setfill('=') << setw(20) << "=" << endl;
  cout << "State your name: ";
  cin >> name1;
  cout << endl;
  cout << setfill(' ') << setw(7) << " [ROOM CLASS]" << setw(14) << "[ROOM NO.]"
       << setw(15) << " [PRICE/DAY]" << endl;
  cout << endl;
  cout << setfill(' ') << setw(7) << " FAMILY [F]" << setw(15) << "41 - 60"
       << setw(15) << " RM 130" << endl;
  cout << setfill(' ') << setw(7) << " DOUBLE [D]" << setw(15) << "21 - 40"
       << setw(15) << " RM 60" << endl;
  cout << setfill(' ') << setw(7) << " SINGLE [S]" << setw(15) << "1 - 20"
       << setw(15) << " RM 45" << endl;
  cout << setfill('-') << setw(60) << '-' << endl;
  cout << "Choose your room type [F/D/S]: ";
  cin >> roomType;
  cout << "Which room number do you want to choose: ";
  cin >> roomnum;
  cout << "How many night you wish to stay: ";
  cin >> night;
  cout << "State the day in month (in numeral form): ";
  cin >> day;
  cout << "State the month (in numeral form): ";
  cin >> month;
  if(roomType == 'F')
  {
    roomPrice = 130 * night;
  }
  else if(roomType == 'D')
  {
    roomPrice = 60 * night;
  }
  else if(roomType == 'S')
  {
    roomPrice = 45 * night;
  }

  cout << "Your total room price is RM " << roomPrice << endl;
      
  cout << "Confirm or re-enter the data: \n[Y] confirm [N] re-enter "<<endl;
  cin >> yes_no;
      }
} 

void menu2()
{
	
   system("cls");
  cout << setfill('=') << setw(20) << "=" << endl;
  cout << " FOOD AND DRINKS" << endl;
  cout << setfill('=') << setw(20) << "=" << endl;
  cout << endl;
   cout << setfill(' ') << setw(7) << " [TIME]" << setw(34) << "[MEALS SET]" << setw(46) << " [PRICE PER SET/PERSON]" << endl;
  cout << endl;
  cout << setfill(' ') << setw(7) << " BREAKFAST [B]" << setw(41) << "NASI LEMAK, ROTI CANAI AND TEH TARIK" << setw(23) << " RM 12" << endl;
  cout << setfill(' ') << setw(7) << " LUNCH     [L]" << setw(49) << "NASI BRIYANI (DAGING & AYAM) AND SARSI FLOAT"<< setw(15) << " RM 12" << endl;
  cout << setfill(' ') << setw(7) << " DINNER    [D]" << setw(18) << "BUFFET DINNER" << setw(46) << " RM 38" << endl;
  cout << setfill('-') << setw(60) << '-' << endl;
  cout << "Choose your meal time [B/L/D]: ";
  cin >> meal_time;
  if(meal_time == 'B')
  {
  	meal_price = 12;
  }
  else if(meal_time == 'L')
  {
  	meal_price = 12;
  }
  else if(meal_time == 'D')
  {
  	meal_price = 38;
  }
  cout << "How many set you wish to buy (in numeral form): ";
  cin >> total_set;
  
  total_meal_price = meal_price * total_set;
  
  cout << "Your total meal price is RM" << total_meal_price << endl;

}

void menu3()  // 
{
  char exit1;
  // char exit;
  while(exit1!='Y'&& exit1!='y')
  {
  system("cls");
  cout << setfill('=') << setw(20) << "=" << endl;
  cout << " Customer Records" << endl;
  cout << setfill('=') << setw(20) << "=" << endl;
  
  cout << setfill('-') << setw(60) << "-" << endl;
  cout <<"Name: " <<name1;
  cout << "\nRoom Type: " << roomType;
  cout <<"\nRoom Number: " <<roomnum;
  cout << "\nTotal nights stay: " << night;
  cout << "\nTotal room price: RM" << roomPrice;
  cout << "\nMeal time code: " << meal_time;
  cout << "\nTotal meal set: " << total_set;
  cout << "\nTotal Meal Price: RM " << total_meal_price << endl;
  totalFare = roomPrice + total_meal_price;
  cout << "Your total fare is: RM " << totalFare;
  cout << setfill('-') << setw(60) << "-" << endl;
  cout << "Enter Y to exit to main menu: " << endl;
  cin  >>exit1;
  system("cls");
  }
} 

void menu4()
{
  system("cls");
  char password[10]= {1234}, pWord[10];//array
  int staff, date_;
  string day_, month_;
  int totalcust, totalrb, totalcin, totalcout, totalmale, totalfemale, totalld;
  
do{
  cout<<" Please enter password: ";
	cin>> pWord;
  
  if (pWord[10] == password[10])
  {
    cout << " Password matched" << endl;
    while(staff!=3){
    cout<<"\n1. Modify customer records"<<"\n2. Daily report"<<"\n3. Exit"<<endl;
    cin>>staff;

    if(staff==1)
    {
      cout<<"\nRoom Type [F/D/S]: "<<roomType<<"\nChange to: ";
      cin>>roomType;
      cout<<"\nRoom Number: "<<roomnum<<"\nChange to: ";
      cin>>roomnum;
      cout<<"\nNight Stay: "<<night<<"\nChange to: ";
      cin>>night;
      cout<<"\nDate: "<<day<<"/"<<month<<"/2022"<<endl<<"\nChange to: "<<endl;
      cin>>day; cout<<"/"; cin>>month;
    }

    else if(staff==2)
    {

      
      cout << setfill('=') << setw(20) << "=" << endl;
      cout<<"Daily data collection "<<endl;
      cout << setfill('=') << setw(20) << "=" << endl;
      cout<<"Date: ";
      cin>>date_;
      cout<<"Month: ";
      cin>>month_;
      cout<<"Day: ";
      cin>>day_;
      cout<<"Today's total customer: ";
      cin>>totalcust;
      cout<<"Total of room booked: ";
      cin>>totalrb;
      cout<<"Total of customers checking in: ";
      cin>>totalcin;
      cout<<"Total of customers checking out: ";
      cin>>totalcout;
      cout<<"Total male customers: ";
      cin>>totalmale;
      cout<<"Total female customers: ";
      cin>>totalfemale;
      cout<<"Total loss or damage: RM ";
      cin>>totalld;
    }
    else{cout<<"Invalid input";}
      
    }
    }
  else{
    cout << " Wrong Password!!!";
      }
  }while(pWord[10]!= password[10]);
  
    system("cls");
}
