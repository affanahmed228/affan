#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <windows.h>
using namespace std;
void firstScreen();
void loadingbar();
void Loadingbar();
void guestInformation();
void availabilityOfRoom();
void bookingStayDuration();
void meal();
void clearanceOfBill();
void checkinCheckout();
void loadfile();

int standardRoom, deluxeRoom,roomtype,roomnum,roomrent,royalRoom, choice, advancePayment, total_Bill, totalMealBill, totalRent,breakfastBill, breakfastNetBill,lunchBill, lunchNetBill,DinnerBill, DinnerNetBill;
string stayDuration, roomType , person;
const int fsj = 400;
const int hfet = 200;
const int ott = 700;
const int sandwt = 600;
const int biryani = 300;
const int psw = 500;
const int psh = 900;
const int psp = 1500;
const int cs = 250;
const int ck = 200;
const int bk = 1000;

int main()
{
	
	system("Color 72");

    int secondchoice;

    firstScreen();
    loadingbar();
    while(true)
	{
		 cout << setw(40) << "\n WELCOME To RA HOTEL \a"<<endl;
    	cout<<"   1 New Hotel Guest \a"<<endl;
    	cout<<"   2 Credits"<<endl;
    	cout<<"   3 Exit"<<endl;
    	cout<<"Enter to select option: ";
    	cin>>choice;
    	switch (choice)
 		{
        case 1:
        {
            while (true)
            {
                system("CLS");
                guestInformation();
                availabilityOfRoom();
                bookingStayDuration();
                meal();                
                clearanceOfBill();
                checkinCheckout();

                cout << "Press 1 or 2 to go back to the main menu " << endl;
                cin >> secondchoice;
                if (secondchoice == 2)
                {
                    break;
                }
            }
            system("CLS");
            break;
        }
        case 2:
        {
        	system("CLS");
            cout << " AFFAN AHMED        70143338 \n";
            cout << " HIRA KHALID        70143855 \n";
            cout << "Press 1 to go back" << endl;
            cin >> secondchoice;
            if (secondchoice == 1)
            {
                break;
            }

            break;
        }
        case 3:
            return 0;
        }
    }
	
    return 0;
}     
void loadingbar()
{
	
	int i=0;
	cout<<"\nPlease wait while loading... \n\n";
	while (i <= 150)
	{
	for(int j=0;j<=i;j+=7)
		{
			cout<<char(178);
		}
		Sleep(500);
		i+=18;
	}
	system("CLS");
}
void firstScreen()
{
	system("CLS");

	cout << setw(40) << " RA HOTEL \n";
    cout << setw(45) << " WELCOME To RA HOTEL \n";
}
void guestInformation()
{
	cout << setw(40) << " RA HOTEL \n\a";
    	string firstname,lastname,contactNumber, cnic, passportNumber, city;
	cout<<"\n Guest Registration \n";
    cout  << " Enter the Guest Information. \n";
    cout  << " Enter the Name of Guest. \n";
    cin >> firstname >> lastname;
    cout << " Enter the Guest Contact Number \n";
    cin >> contactNumber;
    cout << " Enter the CNIC Number of Guest. \n";
    cin >> cnic;
    cout  << " Enter the Passport Number for the Foreign Guest. \n";
    cin >> passportNumber;
    cout  << " Enter the City of Guest. \n";
    cin >> city;
    cout << " Guest Name: " << firstname << " " << lastname << endl;
    cout  << " Guest Contact Number:" << contactNumber << endl;
    cout  << " Guest CNIC Number: " << cnic << endl;
    cout  << " Guest Passport Number: " << passportNumber << endl;
    cout  << " Guest City: " << city << endl;
}
void availabilityOfRoom()
{
    int choice;
    cout << "     Select the Room \n";
    cout << "   1 Standard room \n";
    cout << "   2 Deluxe room \n";
    cout << "   3 Royal room \n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << " Standard Room \n";
        	
        int array_Single_Person[100] = {0};
        int array_Double_Person[100] = {0};
        int array_Family[100] = {0};

        int type;

        cout << "  Select type of Room " << endl;
        cout << " 1 Single Person " << endl;
        cout << " 2 Double Person " << endl;
        cout << " 3 Family " << endl;
        cin >> type;
        
        cout << "Enter the room number" << endl;
        cin >> roomnum;

        if (type == 1)
        {
            if (array_Single_Person[roomnum] == 1)
            {
                cout << "Room is occupied \n";
                return availabilityOfRoom();
            }
            else 
                cout << "Room is not occupied \n";
                cout << "Single Person Room Price is 800 Rs \n";
        }
        else if (type == 2)
        {
            if (array_Double_Person[roomnum] == 1)
            {
                cout << "Room is occupied \n";
                return availabilityOfRoom();
            }
            else
                cout << "Room is not occupied \n";
                cout << "Double Person Room Price is 1000 Rs \n";
        }
        else if (type == 3)
        {
            if (array_Family[roomnum] == 1)
            {
                cout << "Room is occupied \n";
                return availabilityOfRoom();
            }
            else 
                cout << "Room is not occupied\n";
                cout << "\n Family Room Price is 2000 Rs \n";
        }
        else
        {
            cout << "Invalid room type";
        }
        break;
    }
		
    case 2:
    {
        cout << setw(50) << " Deluxe Room \n";
        	
        int array_Single_Person[100] = {0};
        int array_Double_Person[100] = {0};
        int array_Family[100] = {0};

        int type,roomnum;

        cout << " Select type of Room" << endl;
        cout << " 1 Single Person " << endl;
        cout << " 2 Double Person " << endl;
        cout << " 3 Family " << endl;
        cin >> type;
        
        cout << "Enter the room number " << endl;
        cin >> roomnum;
        
        if (type == 1)
        {
            if (array_Single_Person[roomnum] == 1)
            {
                cout << "\n Room is occupied \n";
                return availabilityOfRoom();
            }
            else 
                cout << "\n Room is not occupied";
            cout << "\n Single Room Price is 2500 Rs \n";
        }
        else if (type == 2)
        {
            if (array_Double_Person[roomnum] == 1)
                            {
                cout << "Room is occupied"<<endl;
                return availabilityOfRoom();
            }
            else 
                cout << "\n Room is not occupied \n";
                cout << "\nDouble Person Room Price is 3000 Rs \n";
        }
        else if (type == 3)
        {
            if (array_Family[roomnum] == 1)
            {
                cout << "\n Room is occupied \n";
                return availabilityOfRoom();
            }
            else
                cout << "\n Room is not occupied \n";
                cout << "\n Family Room Price is 3500 Rs \n";
        }
        else
        {
            cout << "Invalid room type";
        }
        break;
    }
		
    case 3:
    {
        cout << " Royal Room \n";
        	
        int array_Single_Person[100] = {0};
        int array_Double_Person[100] = {0};
        int array_Family[100] = {0};
        
        int type,roomnum;
        
        cout << " Select type of Room" << endl;
        cout << " 1 Single Person " << endl;
        cout << " 2 Double Person " << endl;
        cout << " 3 Family " << endl;
        cin >> type;
        
        cout << "Enter the room number" << endl;
        cin >> roomnum;
        
        if (type == 1)
        {
            if (array_Single_Person[roomnum] == 1)
            {
                cout << "\n Room is occupied \n";
                return availabilityOfRoom();
            }
            else
                cout << "\n Room is not occupied \n";
                cout << "\n Single Person Room Price is 4000 Rs \n";
        }
        else if (type == 2)
        {
            if (array_Double_Person[roomnum] == 1)
        	{
                cout << "\n Room is occupied \n";
                return availabilityOfRoom();
            }
            else
                cout << "\n Room is not occupied \n";
                cout << "\n Double Person Room Price is 5000 Rs \n";
        }
        else if (type == 3)
        {
            if (array_Family[roomnum] == 1)
        {
                cout << "\n Room is occupied \n";
                return availabilityOfRoom();
            }
            else 
                cout << "\n Room is not occupied\n";
                cout << "\n Family Room Price is 6000 Rs \n";
        }
        else
        {
            cout << "Invalid room type";
        }

        break;
    }
		
    default:
        cout << "Invalid input. Please enter the number from (1-3)";
        
    }
   
}

void bookingStayDuration()
{
    cout << " Room Booking. "<<endl;
    cout << setw(40) << " Enter name of Room Booking . (Room Type)  " << endl;
    cin >> roomType;
    cout<< " Guest stay duration \n";
    cin >> stayDuration;
    cout<< " He has Booked the Room: " <<roomType<<"\n RoomNum: "<<roomnum<< endl;

	cout << " Guest stay duration " << stayDuration <<" days"<<endl;
	cout << " Enter  Room rent:  \n";
	cin>>roomrent;
    totalRent = roomrent * stoi(stayDuration);
	cout<<" totalRent: "<<totalRent<<endl;
}

void meal()
{	

    cout << setw(40) << " ---------- Meal Menu ---------- \n";
    cout << setw(40) << " Press 1 for Breakfast Menu  \n";
    cout << setw(40) << " Press 2 for Lunch Menu \n";
    cout << setw(40) << " Press 3 for Dinner Menu \n";
	cout << setw(40) << " ------------------------------- \n";
	
    cin >> choice;
    switch (choice)
    {

    case 1:
    {
        cout << " ============== Breakfast Menu ==============\n";
        cout << "|           For Per Person                   | \n";
        cout << "|============================================| \n";
        cout << "|       List                           Price | \n";
        cout << "|============================================| \n";
        cout << "| 1-  Fruit salad with juice         400 Rs  | \n";
        cout << "| 2-  Half fried egg with tea        200 Rs  | \n";
        cout << "| 3-  Omelette with truffles and tea 700 Rs  | \n";
        cout << "| 4-  Sandwich                       600 Rs  | \n";
        cout << " ============================================\n";
    cout << " Enter the Total Person for Meal. \n";
    cin >> person;
    cout<< " Meal for " << person << " Person." << endl;
        breakfastBill = fsj + hfet + ott + sandwt;
        breakfastNetBill = breakfastBill*stoi(person)* stoi(stayDuration);
        cout<<"Breakfast Net Bill: "<<breakfastNetBill<<endl;
        
    }
        return meal();
        break;

    case 2:
    {
        cout << " ============ Lunch Menu ==============  \n";
        cout << "|           For Per Person             | \n";
        cout << "|======================================| \n";
        cout << "|                               Price  | \n";
        cout << "|======================================| \n";
        cout << "| 1- Biryani                   300 Rs  | \n";
        cout << "| 2- Pasta Soupegitarian wrap  500 Rs  | \n";
        cout << "| 3- Prime Sandwich            5000 Rs | \n";
        cout << "| 4- Pasta Soup                1500 Rs | \n";
        cout << " =====================================  \n";
        cout << " Enter the Total Person for Meal. \n";
    cin >> person;
    cout<< " Meal for " << person << " Person." << endl;
        lunchBill = biryani + psw + psh + psp;
        lunchNetBill = lunchBill*stoi(person)* stoi(stayDuration);
        cout<<"Lunch Net Bill: "<<lunchNetBill<<endl;
    }
    return meal();
        break;

    case 3:
    {
        cout << " ============ Dinner Menu ============  \n";
        cout << "|           For Per Person           | \n";
        cout << "|====================================| \n";
        cout << "|     List                     Price | \n";
        cout << "|====================================| \n";
        cout << "|  Chicken Soup              250 Rs  | \n";
        cout << "|  Chapli Kabab              200 Rs  | \n";
        cout << "|  Beef Korma                1000 Rs | \n";
        cout << " ====================================  \n";
    cout << " Enter the Total Person for Meal. \n";
    cin >> person;
    cout<< " Meal for " << person << " Person." << endl;    
    DinnerBill = cs + ck + bk;
	DinnerNetBill= DinnerBill*stoi(person)* stoi(stayDuration);
    cout<<"Dinner Net Bill: " <<DinnerNetBill<<endl;
           
        break;
    }
    default:
        cout << "Invalid input. Please enter a number from (1-3)";
    }
       	cout << setw(40) << " Advance Payment: \n";
    cin >> advancePayment;
}

void clearanceOfBill()
{
    cout << setw(40) << " ---------- RA Hotel Bill ---------- \n";
    cout << setw(90) << " Advance Payment: " << advancePayment <<" Rs"<<endl;
    cout << setw(90) << " Total room rent: " <<totalRent<<" Rs"<<endl;
	if(breakfastNetBill+lunchNetBill+DinnerNetBill)
	{
    	totalMealBill= breakfastNetBill+lunchNetBill+DinnerNetBill;
		cout << setw(90) << " Total meal bill: " << totalMealBill <<" Rs"<<endl;
		}
    else if (breakfastNetBill+DinnerNetBill)
	{
    	    totalMealBill=breakfastNetBill+DinnerNetBill;
    	    cout << setw(90) << " Total meal bill: " << totalMealBill <<" Rs"<<endl;
			   }
	else if (lunchNetBill+DinnerNetBill){
			totalMealBill=lunchNetBill+DinnerNetBill;
			cout << setw(90) << " Total meal bill: " << totalMealBill <<" Rs"<<endl; }
	else{
				  totalMealBill=DinnerNetBill;
			cout << setw(90) << " Total meal bill: " << totalMealBill <<" Rs"<<endl;
			}
    total_Bill = ((totalRent + totalMealBill) - advancePayment);
	cout<<setw(90)<<" Total bill= "<<total_Bill<<" Rs"<<endl;
	

	cout<<" Payment Method \n";
	cout<<" 1 Cash Payment \n";
	cout<<" 2 Online Payment \n";
	
	cin>>choice;
	switch(choice)
	{
	    case 1:
	        cout<<" Cash Payment \n";
	        cout<<" Guest paid the bill in cash. \n";
	            break;
	   {
	       case 2:
	            cout<<" Online Payment \n";
	            cout<<" Guest paid the bill online. \n";
	            break;
	   }     
	   default:
	   cout<<" Invallid Input! Enter the value between(1-2) \n";
	}
 }
  	void checkinCheckout()
{
    cout << setw(40) << " Guest date and time of Checkin and Checkout \n";
    auto currentTime = chrono::system_clock::now();
    auto futureTime = currentTime + chrono::hours(stoi(stayDuration) * 24);
    time_t currentTimeT = chrono::system_clock::to_time_t(currentTime);
    time_t futureTimeT = chrono::system_clock::to_time_t(futureTime);
    char currentBuffer[80];
    char futureBuffer[80];
    strftime(currentBuffer, sizeof(currentBuffer), "%d-%m-%y %H:%M:%S", localtime(&currentTimeT));
    strftime(futureBuffer, sizeof(futureBuffer), "%d-%m-%y %H:%M:%S", localtime(&futureTimeT));
    cout << "Check in date and time: " << currentBuffer << endl;
    cout << "Check out date and time: " << futureBuffer << endl;
}
