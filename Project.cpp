
#include <iostream>
#include <string>
#include <fstream>   //for file handling
#include <conio.h>   //for password asterik
#include <cctype>    //for islower, isupper functions
#include <Windows.h> //for changing text color 
#include <cmath>     
#include <cstdlib> 
#include <ctime>    

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //function for changing text color in conosle output
void displayMenu()  //function for displaying menu
{
	
	SetConsoleTextAttribute(hConsole, 7);  //sets color to pink [7 is for pink, 15 is for white]
	cout << "|---------------------------------------------------|" << endl;
	cout << "|                                                   |" << endl;
	cout << "|";SetConsoleTextAttribute(hConsole, 15); cout << "       Welcome to NAFS Airlines Ltd.    "; SetConsoleTextAttribute(hConsole, 7); cout << "           | " << endl;
	cout << "|                                                   |--------------------|" << endl;
	cout << "|___________________________________________________|                    |" << endl;
    cout << "                     |                                                   |" << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    About us:         "; SetConsoleTextAttribute(hConsole, 7); cout<<"                             | " << endl;
	cout << "                     |                                                   |" << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    We are a historic and well established airline"; SetConsoleTextAttribute(hConsole, 7); cout << " | " << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    that is committed to serving our clients in   "; SetConsoleTextAttribute(hConsole, 7); cout << " | " << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    the best way possible. We have a vision of    "; SetConsoleTextAttribute(hConsole, 7); cout << " | " << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    World class hospitality and excellency given  "; SetConsoleTextAttribute(hConsole, 7); cout << " | " << endl;
	cout << "                     |"; SetConsoleTextAttribute(hConsole, 15); cout << "    to us by our late founder Senna Vandoorne     "; SetConsoleTextAttribute(hConsole, 7); cout << " | " << endl;
	cout << "  |------------------|                                                   |" << endl;
	cout << "  |                  |___________________________________________________|" << endl;
	cout << "  |";SetConsoleTextAttribute(hConsole, 15);cout << "    NAFS Airlines operates globally in 25"; SetConsoleTextAttribute(hConsole, 7);cout<<"          | " << endl;
	cout << "  |";SetConsoleTextAttribute(hConsole, 15);cout << "    countries everyday 10 local and 5    "; SetConsoleTextAttribute(hConsole, 7); cout << "          | " << endl;
	cout << "  |";SetConsoleTextAttribute(hConsole, 15);cout << "    international NAFS flights take off  "; SetConsoleTextAttribute(hConsole, 7); cout << "          | " << endl;
	cout << "  |                                                   |" << endl;
	cout << "  |          |---------------------------------------------------|" << endl;
	cout << "  |__________|                                                   |" << endl;                                         
	cout << "             |"; SetConsoleTextAttribute(hConsole, 15); cout << "    Enter [1] to register as customer"; SetConsoleTextAttribute(hConsole, 7); cout<<"              | " << endl;
	cout << "             |                                                   |" << endl;
	cout << "             |"; SetConsoleTextAttribute(hConsole, 15); cout << "    Enter [2] to Login               "; SetConsoleTextAttribute(hConsole, 7); cout << "              | " << endl;
	cout << "  |----------|                                                   |" << endl;
	cout << "  |          |___________________________________________________|" << endl;
	cout << "  |                                                   |" << endl;
	cout << "  |"; SetConsoleTextAttribute(hConsole, 15); cout << "       Enter [3] to view flight schedule  "; SetConsoleTextAttribute(hConsole, 7); cout << "         | " << endl;
	cout << "  |                                                   |" << endl;
	cout << "  |"; SetConsoleTextAttribute(hConsole, 15); cout << "       Enter [4] to exit                  "; SetConsoleTextAttribute(hConsole, 7); cout << "         | " << endl;
	cout << "  |                                                   |" << endl;
	cout << "  |___________________________________________________|" << endl;
	SetConsoleTextAttribute(hConsole, 15);  //sets color back to white
}

void AdminDisp()
{
	SetConsoleTextAttribute(hConsole, 7);  //sets color to pink
	cout << "|---------------------------------------------------|" << endl;
	cout << "|                                                   |" << endl;
	cout << "|"; SetConsoleTextAttribute(hConsole, 15); cout << "               =====ADMIN PANEL=====    "; SetConsoleTextAttribute(hConsole, 7); cout << "           | " << endl;
	cout << "|                                                   |" << endl;
	cout << "|___________________________________________________|" << endl;
	cout << endl;
}

class User
{
private:
	
	string name;
	string CNIC;
	int visa = 0;
	int age = 0;
	int bankAcc = 0;
	int passport = 0;
public:
	
	User()
	{

	}

	User(string name, string CNIC, int visa, int age, int bankAcc, int passport)
	{
		this->name = name;
		this->CNIC = CNIC;
		this->visa = visa;
		this->age = age;
		this->bankAcc = bankAcc;
		this->passport = passport;
	}


	void setName(string n)  //setter for name
	{
		name = n;
	}

	void setCNIC(string c) //setter for CNIC
	{
		CNIC = c;
	}

	void setAge(int a)  //setter for age
	{
		age = a;
	}

	void setBank(int a)
	{
		bankAcc = a;
	}

	void setPassport(int p)
	{
		passport = p;
	}

	string getName()    //getter for name
	{
		return name;
	}

	string getCNIC()    //getter for CNIC
	{
		return CNIC;
	}

	int getAge()        //getter for age
	{ 
		return age;
	}

	int getPassport()
	{
		return passport;
	}
	void setVisa(int v) //setter for visa
	{
		visa = v;
	}

	int getVisa()       //getter for visas
	{
		srand(time(0));
		visa = rand() % 2;
		return visa;
	}

	int getBank()
	{
		return bankAcc;
	}
};

class Register
{
private:

	int temp1 = 0;
	string temp;    //temporary string to hold input and pass it to user class 
	char* password; //array of characters to hold password
	string cnic, pass;

public:
	User u;         //object of user class

	Register()
	{

	}

	void setPassword(char* p)   //to set password
	{
		password = p;
	}

	string getPass()            //to return password
	{
		return password;
	}

	void EnterName()            //to enter name
	{
		cout << "Name: ";
		cin >> temp;
		u.setName(temp);
	}

	void EnterAge()              //to enter age
	{
		cout << "Age: ";
		cin >> temp1;
		u.setAge(temp1);
	}

	void EnterCNIC()              //to enter CNIC
	{
		cout << "CNIC: ";
		cin >> temp;
		
		while (temp.length() != 13)  //this loop runs until a valid (13 digit) CNIC is entered
		{
			cout << "Invalid CNIC, please re enter!" << endl;
			cout << "CNIC: ";
			cin >> temp;
		}
		u.setCNIC(temp);
	}

	void EnterPassport()
	{
		bool isValid = false;
		cout << "Passport number [9 digits]: ";
		cin >> temp1;
		
		while (!isValid)
		{
			int numOfDigits = static_cast<int>(log10(temp1)) + 1; //sets numOfDigits to 9

		    if (numOfDigits==9)
			{
				isValid = true;
				u.setPassport(temp1);
			}
			
			else
			{
				cout << "Invalid passport, please re enter." << endl;
				cin >> temp1;
			}			
		}
	}

	void EnterPassword()             //function for the asterik password hiding
	{
		password = new char[25];
		bool upper = false;
		bool lower = false;
		bool special = false;
		char c = _getch();
		int i = 0;

		cout << "Password: ";
		while (c != '\r' && i < 25)
		{
			if (isprint(c))
			{
				password[i] = c;     //the entered password character is stored in the array
				cout << "*";         //while an asterik is printed in its place
				i++; 

				if (islower(c))     //checks if lower case letter is present in password
				{
					lower = true;
				}

				else if (isupper(c)) //checks if upper case letter is password
				{
					upper = true;
				}

				else if (!isdigit(c) && !isalpha(c)) //checks if symbols other than number and letters 
				{                                    //are present (special characters)
					special = true;
				}

			}

			else if (c == '\b' && i > 0)  //for backspace key
			{
				i--;
				cout << "\b \b";

				if (islower(password[i]))  //resets the bool flags for password validation
				{                          //for the character that has been backspaced
					lower = false;
				}

				else if (isupper(password[i]))
				{
					upper = false;
				}

				else if (!isdigit(password[i]) && !isalpha(password[i]))
				{
					special=false;
				}
			}
			c = _getch();
		}
		password[i] = '\0'; //terminates password at the last index
		cout << endl;

		if (i < 8 || !upper || !lower || !special)    //uses the boolean flags to check if the password meets the reqs
		{
			cout << "Invalid password. Password must have minimum 8 characters, ";
			cout << "atleast 1 upper case, 1 lower case and 1 special character." << endl;
			EnterPassword();
		}
	}

	void RegisterUser()       //for registering new users
	{
		string cnic, pass, u_cnic;
		bool cnicExists = false;

		ifstream file("data.txt");
		while (file >> cnic >> pass)     //goes through the user data file to check for matching CNIC
		{
			if (cnic == u.getCNIC() && u.getAge() > 19)
			{
				cnicExists = true;
				cout << "CNIC already exists! Please enter a different CNIC: ";
				cin >> u_cnic;
				u.setCNIC(u_cnic);
				file.close();
				file.open("data.txt");
				break;
			}
		}

		if (!cnicExists)
		{
			ofstream outfile("data.txt", ios::app);
			if (outfile.is_open())
			{
				outfile << u.getCNIC() << " " << password << endl;
				cout << "Registration successful!" << endl;
				outfile.close();
			}
			else
			{
				cout << "Cannot open file" << endl;
			}
		}
	}
};

class Login : public Register
{
private:
	string entered_cnic;
	char* entered_pass;
public:

	Login()
	{

	}

	void WelcomeToLogin()
	{
		SetConsoleTextAttribute(hConsole, 7);
		cout << "|---------------------------------------------------|" << endl;
		cout << "|                                                   |" << endl;
		cout << "|"; SetConsoleTextAttribute(hConsole, 15); cout << "       Welcome back to NAFS Airlines Ltd."; SetConsoleTextAttribute(hConsole, 7); cout << "          | " << endl;
		cout << "|                                                   |" << endl;
		cout << "|___________________________________________________|" << endl << endl;
		cout << "=======================LOGIN=========================" << endl;
		cout << endl;
		SetConsoleTextAttribute(hConsole, 15);
	}

	bool checkPass()
	{
		ifstream file("data.txt"); //data text file to store cnic and password
		cout << "CNIC: ";
		SetConsoleTextAttribute(hConsole, 7); //changes CNIC input to pink
		cin >> entered_cnic;

		entered_pass = new char[25];
		
		char c = _getch();
		int i = 0;
		SetConsoleTextAttribute(hConsole, 15); //changes text back to white
		cout << "Password: ";
		SetConsoleTextAttribute(hConsole, 7);  //changes password input to pink
		while (c != '\r' && i < 25)
		{
			if (isprint(c))
			{
				entered_pass[i] = c;
				cout << "*";
				i++;
			}

			else if (c == '\b' && i > 0)  //for backspace key
			{
				i--;
				cout << "\b \b";		
			}
			c = _getch();
		}
		entered_pass[i] = '\0';
		SetConsoleTextAttribute(hConsole, 15);

		if (file.is_open())
		{
			string cnic, pass;
			while (file >> cnic >> pass)
			{
				if (cnic == entered_cnic && pass == entered_pass)
				{
					cout << endl << "Login successful!" << endl;
					file.close();
					return true;
				}
			}

			cout << "Credentials don't match" << endl;
			return false;

		}
		SetConsoleTextAttribute(hConsole, 15); //changes text back to white
	} 
};

class Flight 
{
private:

	string plane_type;  //local or international
	string origin;      //departure airport
	string destination; //arrival airport
	int hours;          //duration of flight
	int seats1;           //available seats
	int num_seats;      //number of available seats
	int num_journeys;   //number of journeys per day for local flights
	int gap;            //gap between local flights
	int start;          //starting time
	int end;            //ending time
	          

public:

	Flight()
	{
		plane_type = "";   //local or international
		origin = "";       //departure airport
		destination = "";  //arrival airport
		hours = 0;         //duration of flight
		seats1 = 60;         //available seats
		num_seats = 0;     //number of available seats
		num_journeys = 0;   //number of journeys per day for local flights
		gap = 0;
		 start = 0;
	}
	// constructor to initialize a flight
	Flight(string type, string origin, string destination, int hours, int num_seats, int start, int end, int num_journeys = 1, int gap = 2) {
		
		this->plane_type = type;
		this->origin = origin;
		this->destination = destination;
		this->hours = hours;
		this->num_seats = num_seats;
		this->start = start;
		this->end = end;
		this->num_journeys = num_journeys;
		this->gap = gap;

	}

	string getPlaneType()    //get the plane type (local or international)
	{
		return plane_type;
	}

	string getOrigin()       //get the origin airport
	{
		return origin;
	}

	string getDestination()  //get the destination airport
	{
		return destination;
	}

	int getHours()           //get the duration of the flight
	{
		return hours;
	}

	int getStart()           //get the starting time
	{
		return start;
	}

	int getEnd()             //get the ending time
	{
		return end;
	}

	int getNumSeats()        //get the number of available seats
	{
		return num_seats;
	}

	void setNumSeats(int a)
	{
		seats1 = a;
	}

	bool hasAvailableSeats() // check if there are any available seats
	{
		if (seats1 < 60)
		{
			return true;
		}

		else
		{
			cout << "No seats available." << endl;
			return false;
		}
	}

	int getGap()              //get the gap between local flights
	{
		return gap;
	}
};

class Schedule {
private:


public:
	Flight flights[50]; // array to store flights
	int num_flights;    // current number of scheduled flights

	Schedule()          // constructor to initialize an empty schedule
	{
		num_flights = 21;
		flights[0] = Flight("Local", "Islamabad South", "Karachi North", 3, 40, 1300, 1600);
		flights[1] = Flight("Local", "Islamabad North", "Lahore South", 1, 35, 1100, 1200);
		flights[2] = Flight("Local", "Islamabad North", "Quetta South", 2, 40, 800, 1300);
		flights[3] = Flight("Local", "Karachi South", "Islamabad South", 3, 40, 800, 1100);
		flights[4] = Flight("Local", "Karachi North", "Lahore North", 2, 35, 900, 1100);
		flights[5] = Flight("Local", "Karachi South", "Quetta South", 2, 40, 1300, 1500);
		flights[6] = Flight("Local", "Lahore North", "Islamabad North", 1, 35, 900, 1000);
		flights[7] = Flight("Local", "Lahore South", "Karachi South", 2, 35, 1200, 1400);
		flights[8] = Flight("Local", "Lahore North", "Peshawar South", 1, 35, 1600, 1700);
		flights[9] = Flight("Local", "Quetta South", "Islamabad South", 2, 40, 1100, 1300);
		flights[10] = Flight("Local", "Quetta North", "Karachi North", 1.5, 30, 1400, 1550);
		flights[11] = Flight("Local", "Quetta South", "Lahore North", 3, 50, 800, 1100);
		flights[12] = Flight("Local", "Peshawar North", "Islamabad South", 1, 40, 1000, 1100);
		flights[13] = Flight("Local", "Peshawar South", "Karachi North", 4, 60, 1200, 1600);
		flights[14] = Flight("Local", "Peshawar South", "Lahore North", 1.5, 35, 1400, 1550);
		flights[15] = Flight("International", "Islamabad", "Paris", 10, 60, 9, 16);
		flights[16] = Flight("International", "Islamabad", "Tokyo", 12, 50, 11, 23);
		flights[17] = Flight("International", "Karachi", "Dubai", 2, 50, 800, 1000);
		flights[18] = Flight("International", "Karachi", "New York", 14, 50, 1300, 2200);
		flights[19] = Flight("International", "Lahore", "Sydney", 16, 50, 700, 2300);
		flights[20] = Flight("International", "Lahore", "Beijing", 8, 50, 1000, 1800);
	}

	void addFlight()
	{
		string origin, dest, type, airport;
		int duration = 0, price = 0, seats = 0, start, end = 0;

		cout << "Enter flight type [local/international]: ";
		SetConsoleTextAttribute(hConsole, 7); //changes input to pink
		cin >> type;

		SetConsoleTextAttribute(hConsole, 15); //changes output back to white
		cout << "Enter departure: ";
		cin >> origin;
		SetConsoleTextAttribute(hConsole, 7); //changes input to pink

		if (type == "local" || type == "Local")
		{
			SetConsoleTextAttribute(hConsole, 15); //changes output back to white
			cout << "Enter airport [north/south]: ";
			SetConsoleTextAttribute(hConsole, 7); //changes input to pink
			cin >> airport;
			origin = origin + " " + airport;

			SetConsoleTextAttribute(hConsole, 15); //changes output back to white
			cout << "Enter destination: ";
			SetConsoleTextAttribute(hConsole, 7); //changes input to pink
			cin >> dest;

			SetConsoleTextAttribute(hConsole, 15); //changes output back to white
			cout << "Enter airport [north/south]: ";
			cin >> airport;
			dest = dest + " " + airport;
		}

		if (type == "international" || type == "International")
		{
			SetConsoleTextAttribute(hConsole, 15); //changes output back to white
			cout << "Enter airport [north/south]: ";
			cin >> airport;
			origin = origin + " " + airport;
		}

		SetConsoleTextAttribute(hConsole, 15); //changes output back to white
		cout << "Enter number of seats available: ";
		SetConsoleTextAttribute(hConsole, 7); //changes input to pink
		cin >> seats;

		SetConsoleTextAttribute(hConsole, 15); //changes output back to white
		cout << "Enter departure time [24 hr format]: ";
		SetConsoleTextAttribute(hConsole, 7); //changes input to pink
		cin >> start;

		SetConsoleTextAttribute(hConsole, 15); //changes output back to white
		cout << "Enter landing time [24 hr format]: ";
		SetConsoleTextAttribute(hConsole, 7); //changes input to pink
		cin >> end;

		duration = (end - start) / 100;

		Flight newflight(type, origin, dest, duration, seats, start, end);

		if (num_flights < 50)
		{
			flights[num_flights] = newflight;
			num_flights++;
			cout << "Flight added succesfully." << endl;
		}
		SetConsoleTextAttribute(hConsole, 15); 
	}

	void searchFlights(string origin, string destination)   //search for flights based on origin and destination airports
	{
		bool found = false;
		
		for (int i = 0; i < num_flights; i++) 
		{
			if (flights[i].getOrigin() == origin && flights[i].getDestination() == destination)
			{
				cout << "Flight found!" << endl << endl;
				cout << "Flight " << i + 1 << ": " << endl;
				cout << "Plane type:      "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getPlaneType() << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Origin:          "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getOrigin() << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Destination:     "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getDestination() << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Starting time:   "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getStart() << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Ending time:     "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getEnd() << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Duration:        "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getHours() << " hours" << endl; SetConsoleTextAttribute(hConsole, 15);
				cout << "Available seats: "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getNumSeats() << endl; SetConsoleTextAttribute(hConsole, 15);
				found = true;
			}
		}

		if (!found) 
		{
			cout << "No available flights found"<<endl;
		}
	}

	void DisplaySchedule()      //displays the schedules flights
	{
		for (int i = 0; i < num_flights; i++)
		{
			cout << "Flight " << i + 1 << ": " << endl;
			cout << "Plane type:      "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getPlaneType() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Origin:          "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getOrigin() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Destination:     "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getDestination() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Starting time:   "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getStart() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Ending time:     "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getEnd() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Duration:        "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getHours() << " hours" << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << "Available seats: "; SetConsoleTextAttribute(hConsole, 7); cout << flights[i].getNumSeats() << endl; SetConsoleTextAttribute(hConsole, 15);
			cout << endl;
		}
	}

};

bool verifyBank(User& u, int price, int tax)
{
	int balance = 0;
	int money = 0;
	balance = u.getBank();
	money = balance / 10000;    //sets balance to first 5 digits of bank account number

	if (money < price)
	{
		cout << "Transaction failed! Not enough bank balance." << endl;
		return false;
	}

	else
	{
		cout << "Transaction successful!" << endl;
		return true;
	}
}

class Booking : public Schedule
{
private:
	User& u;
	Schedule s;
	int choice = 0;
	int type = 0;
	int temp1;
	double price = 0.0;
	int flightHours = 0;
	double tax = 0.0;

public:

	Booking(User& user) : u(user), s(), choice(0), type(0) {}

	void enterBank()
	{
		cout << "Bank Acc [9 digits]: ";
		SetConsoleTextAttribute(hConsole, 7); 
		cin >> temp1;
		int numOfDigits = static_cast<int>(log10(temp1)) + 1;

		if (numOfDigits < 9 || numOfDigits > 9)
		{
			cout << "Invalid account, please re enter." << endl;
			enterBank();
		}

		u.setBank(temp1);
		cout << "Bank acc: " << u.getBank() << endl;
	}

	void BookFlight()
	{
		SetConsoleTextAttribute(hConsole, 15); 

		cout << "Which flight would you like book?" << endl << endl;
		DisplaySchedule();
		cout << endl;
		cout << "Enter flight number: ";

		SetConsoleTextAttribute(hConsole, 7); 
		cin >> choice;

		if (flights[choice].getPlaneType()=="International")
		{
			if (u.getVisa() != 1)
			{
				cout << "VISA/passport validation failed! You may not posses a valid VISA or passport." << endl;
				return;
			}

			else
			{
				cout << "VISA validated succesfully!" << endl;
			}
		}

		SetConsoleTextAttribute(hConsole, 15);
		cout << "Business or economy? [0/1]: ";

		SetConsoleTextAttribute(hConsole, 7); 
		cin >> type;

		SetConsoleTextAttribute(hConsole, 15);

		if (type == 0)
		{
			if (verifyBank(u, price, tax))
			{
				cout << "Price is: " << price << " (inclusive of all taxes, 5% for local and 10% for international flights" << endl;
				cout << "Flight booked!" << endl;
				flights[choice].setNumSeats(flights[choice].getNumSeats() - 1);
			}

			else
			{
				cout << endl << "Flight not booked!" << endl;
			}
			
		}

		if (type == 1)
		{
			if (verifyBank(u, price, tax))
			{
				cout << "Price is: " << price << " (inclusive of all taxes, 5% for local and 10% for international flights" << endl;
				cout << "Flight booked!" << endl;
				flights[choice].setNumSeats(flights[choice].getNumSeats() - 1);
			}

			else
			{
				cout << endl << "Flight not booked!" << endl;
			}
		}
	}

	void flightCost()
	{
		flightHours = flights[choice].getHours();

		if (flights[choice].getPlaneType() == "International")
		{
			price = 20000 * flightHours;
			tax = price * 0.1;

			cout << "Ticket price: " << price;
			cout << "Tax: " << tax;

			price = price + tax;
			cout << "Total price: " << price << endl;

		}


		if (flights[choice].getPlaneType() == "Local")
		{
			price = 10000 * flightHours;
			tax = price * 0.05;

			cout << "Ticket price: " << price;
			cout << "Tax: " << tax;

			price = price + tax;
			cout << "Total price: " << price << endl;
		}
	}
};

int main() 
{
	int choice;
	Register reg;
	User u;
	Schedule s;
	Login log;
	Booking b(u);
	string str1;
	string str2;

	displayMenu();
	while (true)
	{
		cout << endl << "Choice: ";
		cin >> choice;

		if (choice == 1)
		{
			system("cls");
			reg.EnterName();
			reg.EnterAge();
			reg.EnterCNIC();
			reg.EnterPassword();
			reg.EnterPassport();
			reg.RegisterUser();
			displayMenu();
		}

		else if (choice == 2)
		{
			system("cls");
			log.WelcomeToLogin();
			if (log.checkPass())
			{
				SetConsoleTextAttribute(hConsole, 15);
				cout << "Press [1] to see available flights." << endl;
				cout << "Press [2] to book flight." << endl;
				cout << "Press [3] to search for flight." << endl;
				cout << "Choice: ";
				cin >> choice;

				if (choice == 1)
				{
					s.DisplaySchedule();
					displayMenu();
				}

				if (choice == 2)
				{
					b.enterBank();
					b.flightCost();
					b.BookFlight();
				}

				if (choice == 3)
				{
					cout << "Enter flight origin: ";
					cin >> str1;
					cout << "Enter flight destination: ";
					cin >> str2;
					b.searchFlights(str1, str2);
				}
			}

		}

		else if (choice == 3)
		{
			system("cls");
			s.DisplaySchedule();
		}

		else if (choice == 2417)
		{
			system("cls");
			AdminDisp();
			cout << "Press [1] to add flight." << endl;
			cout << "Press [2] to see all registered CNIC numbers." << endl;
			cout << "Choice: ";
			cin >> choice;

			if (choice == 1)
			{
				s.addFlight();
				s.DisplaySchedule();
			}

			if (choice == 2)
			{
				ifstream file("data.txt");
				if (!file.is_open()) {
					cout << "Failed to open file!" << endl;
					return 1;
				}

				SetConsoleTextAttribute(hConsole, 15);
				string line;
				while (getline(file, line)) {
					long long number = stoll(line.substr(0, 13));
					cout << number << endl;
				}

				file.close();
			}
		}
	}
	return 0;
}
