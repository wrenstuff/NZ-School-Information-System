#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

// ----- structure definition ----- //

struct newSR {

	string password,
		firstname,
		middlename,
		lastname,
		parentname1,
		parentname2;
	char gender;

}newrecord;

struct NewParent
{

	string firstname,
		lastname,
		email,
		username,
		password,
		child;
	char gender;
	int DOB;
	long int PH;

}newparent;

struct NewTeacher
{

	string firstname,
		lastname,
		email,
		username,
		password;
	char gender;
	int DOB,
		yearTeach,
		classNo;
	long int PH;

}newteacher;

struct ActiveUser
{

	string firstname,
		lastname,
		email,
		usertype;

};

// ----- Function decleration ----- //

void createSR(vector <newSR>& records);
void stars();

void login();

// ----- Creation Functions ----- //

void teacherCreate();
void parentCreate();
void childCreate();

// ----- Menu Functions ----- //

void terms();
void menuMain();
void menuTeacher();
void menuAdmin();
void menuParent();
void menuRecord();
void menuRecordAdmin();
void menuRecordTeacher();

// ----- Error File Creation ----- //

void errorFileCreate(string, string, string);
string errorType;
string errorDesc;

int main()
{

	// ----- Variables ----- //

	

    cout << "NZ School Information System" << endl;



	cout << "______    _____                  __                   _____                " << endl;
	cout << "|     \\  /            /\\        |  \\    |\\      /|   /     \\  |  /        " << endl;
	cout << "|     |  |           /  \\       |   \\   | \\    / |   |     |  | /   _____ " << endl;
	cout << "|_____/  |          /    \\      |    \\  |  \\  /  |   |     |  |/   /     \\" << endl;
	cout << "|        |-----    /------\\     |    |  |   \\/   |   |     |  |   |______/" << endl;
	cout << "|\\       |        /        \\    |    /  |        |   |     |  |   |       " << endl;
	cout << "| \\      |       /          \\   |   /   |        |   |     |  |    \\_____ " << endl;
	cout << "|  \\     \\_____ /            \\  |__/    |        |   \\_____/  |     __________" << endl;
	cout << "___________________________________________________________________/" << endl;
	cout << "___                                                                      " << endl;
	cout << "|  \\  | /  .  |\\    /|      /\\      | /  \\    /     ___     ____ |       ___    ___   |" << endl;
	cout << "|  |  |/   |  | \\  / |     /  \\     |/    \\  /     /       /     |___   /   \\  /   \\  |" << endl;
	cout << "|__/  |    |  |  \\/  |    /----\\    |      \\/      \\___   |      |   \\ |     ||     | |" << endl;
	cout << "|     |    |  |      |   /      \\   |      ||          \\  |      |   | |     ||     | |" << endl;
	cout << "|     |    |  |      |  /        \\  |      ||       ___/   \\____ |   |  \\___/  \\___/  |____" << endl;
	cout << endl; 
    stars();
	cout << "Phone number: 03 123 4567" << endl;
	cout << "email: office@readmoreprimary.school.nz" << endl;
	cout << "Address: 123 Oak Street, Readmore 1234" << endl;
	
	menuMain();

}

// Functions. If creating a new function, make sure you add it to the top of the code as well.

// ----- Menu Functions ----- //

/*void menuTemplate() {

	int menu = 0;

	do
	{

		cout << endl;
		cout << "1 - {name}" << endl;
		cout << "2 - {name}" << endl;
		cout << "3 - {name}" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > [number of options]);

}*/

void terms() {

	int menu = 0;

	// Prints out the menu for viewing term dates
	do
	{

		cout << endl;
		cout << "1 - Term 1" << endl;
		cout << "2 - Term 2" << endl;
		cout << "3 - Term 3" << endl;
		cout << "4 - Term 4" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 4 );

	// Prints out whichever term dates that have been selected
	switch (menu)
	{
		cout << "Term Dates & Holidays\n";
	
	case 1:
		cout << "Term 1\n\n\n";
		cout << "Number of weeks: 10\n\n\n";
		cout << "Start & end dates: Starts between Monday 29 January (at the earliest & Wednesday 7 February (at the latest)\n";
		cout << "Ends Friday 12 April\n\n\n";
		cout << "Public Holidays: Waitangi Day - Tuesday 6 February\n";
		cout << "Easter: Good Friday 29 March, Easter Monday 1 April, Easter Tuesday 2 April (a school holiday)\n\n\n";
		cout << "School Holidays: Saturday 13 April to Sunday 28 April\n";
		cout << "Includes: ANZAC Day - Thursday 25 April\n";
		
		break;

	case 2: 
		cout << "Term 2\n\n\n";
		cout << "Number of weeks: 10\n\n\n";
		cout << "Start & end dates: Starts Monday 29 April to Friday 5 July\n\n\n";
		cout << "Public Holidays: Kings Birthday - Monday 3 June\n";
		cout << "Matariki - Friday 28 June\n\n\n";
		cout << "School Holidays: Saturday 6 July to Sunday 21 July\n";

		break;

	case 3:
		cout << "Term 3\n\n\n";
		cout << "Number of weeks: 10\n\n\n";
		cout << "Start & end dates: Monday 22 July to Friday 27 September\n\n\n";
		cout << "Public Holidays: None\n\n\n";
		cout << "School Holidays: Saturday 28 September to Sunday 13 October\n";

		break;

	case 4:
		cout << "Term 4\n\n\n";
		cout << "Number of weeks: 10\n\n\n";
		cout << "Start & end dates: Monday 14 October\n";
		cout << "Ends no later than Friday 20 December\n\n\n";
		cout << "Public Holidays: Labour Day - Monday 28 October\n\n\n";
		cout << "School Holidays: 5 to 6 Weeks (From school's closing day until the opening date the following year)\n";
		cout << "Includes: Christmas Day - Wednesday 25 December\n";
		cout << "Boxing Day - Thursday 26 December\n";
		cout << "New Year's Day - Wednesday 1 January 2025\n";
		cout << "Day after New Year's Day - Thursday 2 January 2025\n";

		break;

	}
}

void teacherCreate() {

	ofstream newTeacher;

	cout << "Create New Account" << endl;
	//Display to the user
	//Details for user to enter
	cout << "First Name:\n> ";
	cin >> newteacher.firstname;

	cout << "Last Name:\n> ";
	cin >> newteacher.lastname;

	cout << "Gender:\n> ";
	cin >> newteacher.gender;

	cout << "Date Of Birth:\n> ";
	cin >> newteacher.DOB;

	cout << "Phone Number:\n> ";
	cin >> newteacher.PH;

	cout << "email:\n> ";
	cin >> newteacher.email;

	cout << "username:\n> ";
	getline(cin, newteacher.username);

	cout << "password:\n> ";
	cin >> newteacher.password;

	cout << "Class Number:\n> ";
	cin >> newteacher.classNo;
	cout << "Year Level Teaching:\n> ";
	cin >> newteacher.yearTeach;

	//Saves the new created account

	newTeacher.open("users/" + newteacher.username + ".txt");
	newTeacher << newteacher.password << endl << newteacher.firstname << endl << newteacher.lastname << endl << "Teacher" << endl << newteacher.PH << endl << newteacher.email << endl << newteacher.gender << endl << newteacher.DOB << endl << newteacher.classNo << endl << newteacher.yearTeach << endl;
	newTeacher.close();
}

void parentCreate() {

	ofstream newParent;

	cout << "Create New Account" << endl;
	//Display to the user
	//Details for user to enter
	cout << "First Name:\n> ";
	cin >> newparent.firstname;
	cout << "Last Name:\n> ";
	cin >> newparent.lastname;

	cout << "Gender:\n> ";
	cin >> newparent.gender;

	cout << "Date Of Birth:\n> ";
	cin >> newparent.DOB;

	cout << "Phone Number:\n> ";
	cin >> newparent.PH;

	cout << "email:\n> ";
	cin >> newparent.email;

	/*cout << "Child:\n> ";
	cin.ignore();
	getline(cin, newparent.child);*/

	cout << "username:\n> ";
	cin.ignore();
	getline(cin, newparent.username);

	cout << "password:\n> ";
	cin >> newparent.password;
	//Saves the new created account
	newParent.open("users/" + newparent.username + ".txt");
	newParent << newparent.password << endl << newparent.firstname << endl << newparent.lastname << endl << "Parent" << endl << newparent.PH << endl << newparent.email << endl << newparent.gender << endl << newparent.DOB << endl /*<< newparent.child << endl*/;
	newParent.close();
}

void menuMain() {

	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - Login" << endl;
		cout << "2 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 2);

	switch (menu)
	{
	case 1:
		login();
	case 2:
		break;
	default:
		break;
	}

}

void menuTeacher() {

	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - list students" << endl;
		cout << "2 - create student record" << endl;
		cout << "3 - view student record" << endl;
		cout << "4 - delete student record" << endl;
		cout << endl;
		cout << "> "; // I've made this an arrow because I thought it looked better than a colon. We can use a colon if you think it looks better though. My reasoning was that because the input is without and other text, it looked cleaner.
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 4);

}

void menuAdmin() {

	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - List Students" << endl;
		cout << "2 - Parent Records" << endl;
		cout << "3 - Student Records" << endl;
		cout << "4 - view 'help needed' students" << endl; //Can be renamed. Couldn't think of anything else at the time of writing
		cout << "5 - view 'progressing' students" << endl;
		cout << "6 - Exit Program" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		if (menu == 1) {}
		else if (menu == 2) {}
		else if (menu == 3)
		{

			menuRecordAdmin();

		}
		else if (menu == 4) {}
		else if (menu == 5) {}
		else if (menu == 6)
		{

			break;

		}

	} while (menu <= 0 || menu > 7);

}

void menuParent() {

	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - school news/notices" << endl;
		cout << "2 - term dates" << endl;
		cout << "3 - view child record" << endl;
		cout << "4 - Add Child" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;
		if (menu == 2) {
			terms();
		}
	} while (menu <= 0 || menu > 4);

}
/*
void menuRecord() {
	
	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 3);

}

void menuRecordTeacher() {

	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 3);

}*/

//function for making the student record and calling the structure
void createSR(vector <newSR>& records) {
	


	//user inputs.
	stars();
	cout << "Create The student record." << endl;
	stars();
	cout << "Enter the students Password:\n> ";
	cin >> newrecord.password;
	cout << "Enter the Students First name:\n> ";
	cin.ignore();
	getline(cin, newrecord.firstname);
	cout << "Enter the Students Middle name:\n> ";
	getline(cin, newrecord.middlename);
	cout << "Enter the Students Last name:\n> ";
	getline(cin, newrecord.lastname);
	cout << "Enter the Students Gender M/F/X:\n> ";
	cin >> newrecord.gender;

	cout << "Enter the Parents Full name:\n> ";
	cin.ignore();
	getline(cin, newrecord.parentname1);
	
	cout << "Enter the Parents Full name:\n> ";
	
	getline(cin, newrecord.parentname2);

	// adding newrecord to vector
	records.push_back(newrecord);


	//creating a string to make file names of the first + last names of the student and makign it a record of the .txt
	string childrecord = newrecord.firstname + "-" + newrecord.middlename + "-" + newrecord.lastname + "-record.txt";

	ofstream filecreate;

	filecreate.open("Students/" + childrecord, ios::app); // change to check if any other files exist with same name rather than append

	if (filecreate.is_open()) {
		filecreate << newrecord.password << endl << newrecord.firstname << endl << newrecord.middlename << endl << newrecord.lastname << endl << newrecord.gender << endl << newrecord.parentname1 << endl << newrecord.parentname2 << endl;

		filecreate.close(); // function is complete close the file

		cout << "You have created the record sucessfully" << endl;//feed back to user
		stars();
	}
	else {
		cout << "cannot open the file" << endl;
	}

}
void menuRecordAdmin() {
	vector<newSR> records;
	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;
		// Making switch cases for the menu options
		switch (menu)
		{
		case 1:
			cout << endl;

			//Records is using the create SR function to make student records
			createSR(records);



			break;

		case 2:
			cout << "Which student would you like to view? Enter the name: " << endl;



			break;

		case 3:
			cout << "Which student record would you like to delete?" << endl;

			break;
		}

	} while (menu <= 0 || menu > 3);

}

// ----- Login / Sign Up ----- //

void login() {

	stars();

	string userLogin;
	string userPass;
	string userName = "";
	string userType;
	int tries = 3;

	cout << "Enter username" << endl << "> ";
	cin >> userLogin;

	//add something to get the hash of userLogin variable

	ifstream userFile;
	userFile.open("users/" + userLogin + ".txt");

	if (userFile) 
	{

		string line;
		int currentLine = 0;

		while (true)
		{

			getline(userFile, line);

			currentLine++;

			// If current line is the password
			if (currentLine == 1)
			{

				do
				{

					// Do not delete!!!!! This is because when a menu function breaks, the current line IS NOT 1!!!
					if (currentLine != 1)
					{

						break;

					}

					cout << currentLine << endl;
					cout << "Enter password" << endl << "> ";
					cin >> userPass;

					// If the user has entered the correct password
					if (userPass == line)
					{

						//Maybe there could be a function called here which accesses everything in the users file and adds it to let's say a structure, so that the file doesn't have to keep being accessed

						while (getline(userFile, line))
						{

							currentLine++;

							switch (currentLine)
							{
							// User's first name
							case 2:

								userName += line;
								break;

							// User's last name
							case 3:

								userName += " " + line;
								cout << "Welcome, " << userName;
								break;

							// User's type
							case 4:

								if (line == "Admin")
								{

									// Opens the Admin menu if the user type is "Admin"
									menuAdmin();
									break;

								}
								else if (line == "Teacher")
								{

									// Opens the Teacher menu if the user type is "Teacher"
									menuTeacher();
									break;

								}
								else if (line == "Parent")
								{

									// Opens the Parent menu if user type is "Parent"
									menuParent();
									break;

								}
								else
								{

									// Creates error file if the user's type doesn't exist
									errorType = "TypeUser";
									errorDesc = "Invalid user type";
									errorFileCreate(errorType, line, errorDesc);
									break;

								}

							default:
								break;
							}

						}

					}
					else
					{

						// Removes 1 from the tries remaining
						cout << "Incorrect Password. ";
						tries--;
						cout << tries << " tries remaining" << endl;

						// Can maybe include a time stamp in the user's file later on if the attempts reach 0

					}

				} while (tries > 0);

			}

			userFile.close();
			break;

		}

	}
	else 
	{
		cout << "User does not exist." << endl;
	}

}

// Child creation
void createChild() {

	// Takes the 

}

//function definition for making stars for menus
void stars() {
	for (int i = 0; i < 92; i++) {
		cout << "*";
	}
	cout << endl;
}

void errorFileCreate(string x, string line, string y) {

	cout << endl;
	cout << "ERROR: " << x << " " << y << endl;
	ofstream errorFile;
	string errorFileName;

	int errorTime = time(NULL);
	errorFileName = "errors/";
	errorFileName += to_string(errorTime);
	errorFileName += "error" + x + ".txt";
	errorFile.open(errorFileName);
	errorFile << "ERROR: " << x << " " << y << endl << line;
	errorFile.close();

}