#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdio>
using namespace std;

// ----- structure definition ----- //

struct newSR {

	string
		firstname,
		middlename,
		lastname,
		maths,
		science,
		reading,
		writing,
		learning,
		other;
	char gender;
}newrecord,viewsr;

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
		username,
		usertype;

}activeuser;

// ----- Function decleration ----- //
void viewSR();
void deleteSR();
void createSR(vector <newSR>& records);
void stars();
void login();

// ----- Creation Functions ----- //

void createTeacher();
void createParent();
void checkChild();
void createChild();

// ----- Menu Functions ----- //

void menuTerms();
void menuMain();
void menuTeacher();
void menuAdmin();
void menuParent();
void menuRecordAdmin();
void menuRecordParent();
void menuEvents();

// ----- Error File Creation ----- //

void errorFileCreate(string, string, string);
string errorType;
string errorDesc;

int main()
{

	// ----- Introduction Screen ----- //
	// Add events/notices
	

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

// -------- Menu Functions -------- //

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

void menuTerms() {

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

	return menuParent();

}

void createTeacher() {

	ofstream newTeacher;

	cout << "Create New Account" << endl;
	//Display to the user
	//Details for user to enter
	cout << "First Name:\n> ";
	getline(cin, newteacher.firstname);

	cout << "Last Name:\n> ";
	getline(cin, newteacher.lastname);

	cout << "Gender:\n> ";
	cin >> newteacher.gender;

	cout << "Date Of Birth:\n> ";
	cin >> newteacher.DOB;

	cout << "Phone Number:\n> ";
	cin >> newteacher.PH;

	cout << "email:\n> ";
	cin >> newteacher.email;

	cout << "username:\n> ";
	cin >> newteacher.username;

	cout << "password:\n> ";
	cin >> newteacher.password;

	cout << "Class Number:\n> ";
	cin >> newteacher.classNo;

	cout << "Year Level Teaching:\n> ";
	cin >> newteacher.yearTeach;

	//Saves the new created account

	newTeacher.open("Users/" + newteacher.username + ".txt");
	newTeacher << newteacher.password << endl << newteacher.firstname << endl << newteacher.lastname << endl << "Teacher" << endl << newteacher.PH << endl << newteacher.email << endl << newteacher.gender << endl << newteacher.DOB << endl << newteacher.classNo << endl << newteacher.yearTeach << endl;
	newTeacher.close();

	return menuAdmin();

}

void createParent() {

	ofstream newParent;

	cout << "Create New Account" << endl;
	//Display to the user
	//Details for user to enter
	cout << "First Name:\n> ";
	getline(cin, newparent.firstname);

	cout << "Last Name:\n> ";
	getline(cin, newparent.lastname);

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
	newParent.open("Users/" + newparent.username + ".txt");
	newParent << newparent.password << endl << newparent.firstname << endl << newparent.lastname << endl << "Parent" << endl << newparent.PH << endl << newparent.email << endl << newparent.gender << endl << newparent.DOB << endl /*<< newparent.child << endl*/;
	newParent.close();

	return menuTeacher();

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
		break;
	case 2:
		exit(0);
		break;
	default:
		break;
	}

}

void menuTeacher() {

	// Create student records
	vector<newSR> records;
	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "Teacher Menu options\n";
		cout << "1 - list students" << endl;
		cout << "2 - create student record" << endl;
		cout << "3 - edit student record" << endl;
		cout << "4 - view student record" << endl;
		cout << "5 - delete student record" << endl;
		cout << "6 - Exit Program" << endl;
		cout << endl;
		cout << "> "; // I've made this an arrow because I thought it looked better than a colon. We can use a colon if you think it looks better though. My reasoning was that because the input is without and other text, it looked cleaner.
		cin >> menu;
		cout << endl;

		switch (menu)
		{
		case 2: createSR(records);
			return menuTeacher();
		case 4:viewSR();
			return menuTeacher();
		case 5:  deleteSR();
			return menuTeacher();
		case 6:
			exit(0);
			break;
		default:
			break;
		}

	} while (menu <= 0 || menu > 6);

}

void menuAdmin() {

	// Add class records

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

		// The report should include, classroom number, student full name, learning progress of each subject, teacher name and their parents contact number.

		switch (menu)
		{
		case 2:
			menuRecordParent();
			break;
		case 3:
			menuRecordAdmin();
			break;
		case 6:
			exit(0);
			break;
		default:
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
		cout << "3 - view child report" << endl; // access info from record
		cout << "4 - Add Child" << endl;
		cout << "5 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		switch (menu)
		{
		case 1:
			menuEvents();
			break;
		case 2:
			menuTerms();
			break;
		case 4:
			checkChild();
			break;
		case 5:
			exit(0);
			break;

		default:
			break;
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

void menuRecordParent() {

	int menu = 0;

	string parentSelect;

	do
	{

		stars();

		cout << endl;
		cout << "1 - view parent record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		if (menu == 1) {
			//This function will allow the user to select a parent record to view`
			cout << "Select a parent" << endl;
			cin >> parentSelect;
			ifstream parentFile;
			parentFile.open("Users/" + parentSelect + ".txt");

			if (parentFile.fail()) {
				cout << "Error opening the file." << endl;
				exit(0);
			}
			else
			{
				string line;
				int currentLine = 0;
				while (!parentFile.eof()) {
					currentLine++;
					if (currentLine != 1) {
						getline(parentFile, line);
						cout << line << endl;
					}
				}
			}
		}
	} while (menu <= 0 || menu > 3);
}

//function for making the student record and calling the structure
void createSR(vector <newSR>& records) {



	//user inputs.
	stars();
	cout << "Create The student record." << endl;
	stars();
	cout << "Enter the Students First name:\n> ";
	cin.ignore();
	getline(cin, newrecord.firstname);
	cout << "Enter the Students Middle name:\n> ";
	getline(cin, newrecord.middlename);
	cout << "Enter the Students Last name:\n> ";
	getline(cin, newrecord.lastname);
	cout << "Enter the Students Gender M/F/X:\n> ";
	cin >> newrecord.gender;

	cin.ignore(); // have to add this because of the change of data type
	cout << "Enter maths level:\n> ";
	getline(cin, newrecord.maths);
	cout << "Enter the Science level:\n> ";
	getline(cin, newrecord.science);
	cout << "Enter the Reading level:\n> ";
	getline(cin, newrecord.reading);
	cout << "Enter the Writing level:\n> ";
	getline(cin, newrecord.writing);
	cout << "Learning Progress state:\n> ";
	getline(cin, newrecord.learning);
	cout << "Other activities / notes?\n";
	getline(cin, newrecord.other);

	// adding newrecord to vector
	records.push_back(newrecord);


	//creating a string to make file names of the first + last names of the student and makign it a record of the .txt
	string childrecord = newrecord.firstname + "-" + newrecord.middlename + "-" + newrecord.lastname + "-record.txt";

	ofstream filecreate;

	filecreate.open("Students/" + childrecord, ios::app); // change to check if any other files exist with same name rather than append

	if (filecreate.is_open()) {
		filecreate << newrecord.firstname << endl << newrecord.middlename << endl << newrecord.lastname << endl << newrecord.gender << endl;
		filecreate << "Subjects\n";
		filecreate << "Maths: " << newrecord.maths << endl << "Science: " << newrecord.science << endl << "Writing: " << newrecord.writing << endl << "Reading: " << newrecord.maths << endl;
		filecreate << "Other: " << newrecord.other << endl;

		filecreate.close(); // function is complete close the file

		cout << "You have created the record sucessfully" << endl;//feed back to user
	}
	else {
		cout << "cannot open the file" << endl;
	}

}


void viewSR()
{
	string filename;

	stars();
	cout << "viewing student record" << endl;
	stars();
	// user entry to open the student record via inputs
	cin.ignore();
	cout << "enter the students first name:\n> ";
	getline(cin, viewsr.firstname);


	cout << "Enter the Students Middle name:\n> ";
	getline(cin, viewsr.middlename);
	

	cout << "Enter the Students Last name:\n> ";
	getline(cin, viewsr.lastname);
	


	filename = "Students/" + viewsr.firstname + "-" + viewsr.middlename + "-" + viewsr.lastname +"-" +  "record.txt";// string so we can use it to find the file by this name


	ifstream recordFile(filename);

	if (recordFile.is_open())
	{
		stars();
		cout << "This is the student record for " << viewsr.firstname << " " << viewsr.middlename << " " << viewsr.lastname << endl; // feedback for on which file they are in
		stars();
		string information; // printing student record while the file is open
		while (getline(recordFile, information))
		{
			cout << information << endl;
		}

		recordFile.close();

	}
	else
	{

		cout << "\nSorry we couldnt find that file." << endl;
	}
	stars();
}

void deleteSR() {
	int deletefile;


	cout << "Enter the child's full name you wish to delete\n";
	cout << "Enter the Students First name:\n> ";
	cin.ignore();
	getline(cin, newrecord.firstname);
	cout << "Enter the Students Middle name:\n> ";
	getline(cin, newrecord.middlename);
	cout << "Enter the Students Last name:\n> ";
	getline(cin, newrecord.lastname);

	string childrecord = newrecord.firstname + "-" + newrecord.middlename + "-" + newrecord.lastname + "-record.txt";

	deletefile = remove(("Students/" + childrecord).c_str());

	if (deletefile == 0) {
		stars();
		cout << "File '" << childrecord << "' successfully deleted.\n";
	}
	else {
		cout << "Error deleting file '" << childrecord << "'.\n";
	}
	return menuTeacher();
}

void menuRecordAdmin() {

	// Add edit record

	// Update records (different to edit) - Teacher

	vector<newSR> records;
	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;
		cout << "4 - Exit" << endl;
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

			return menuRecordAdmin();

		case 2:
			viewSR();

			return menuRecordAdmin();

		case 3:
			deleteSR();

			return menuRecordAdmin();
		case 4:
			exit(0);
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
	userFile.open("Users/" + userLogin + ".txt");

	if (userFile) 
	{

		string line;
		int currentLine = 0;

		while (true)
		{

			currentLine++;

			getline(userFile, line);

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

								activeuser.lastname = line;
								userName += " " + line;
								cout << "Welcome, " << userName << endl;
								break;

							// User's type
							case 4:

								activeuser.username = userLogin;
								activeuser.usertype = line;

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

									errorType = "TypeUser";

									errorDesc = "Invalid user type";
									errorFileCreate(errorType, errorDesc, line);
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
						// use __DATE__ and __TIME__

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
void checkChild() {

	// Opens the active user's file --- done
	// Check to see if usertype is parent
	// See if they have a child
	// If no child, create child
	// Repeat
	// If child, ask to create new child
	// If yes, create child
	ifstream userFile;
	userFile.open("Users/" + activeuser.username + ".txt");

	if (userFile)
	{

		string line;
		int currentline = 0;
		while (getline(userFile, line))
		{

			currentline++;
			if (currentline == 4)
			{

				if (line == "Parent")
				{

					for (int i = 5; i < 9; i++) {
						if (!getline(userFile, line)) {
							cout << "File too short" << endl;
							break;
						}
					}

					if (getline(userFile, line)) {
						if (!line.empty()) {
							cout << "You have child" << endl;
						}
						else {
							cout << "You have no child" << endl;
						}
					}
					else {
						userFile.close();

						createChild();

					}

					break;

				}
				else
				{

					cout << "Incorrect user type";
					break;

				}

			}

		}

	}
	else
	{

		cout << "File doesn't exist";

	}

}

void createChild() {

	string checkChild, firstName, middleName, lastName;

	cout << "Child's first name\n> ";
	cin.ignore();
	getline(cin, firstName);
	cout << "Child's middle name\n> ";
	getline(cin, middleName);
	cout << "Child's last name\n> ";
	getline(cin, lastName);

	checkChild = "Students/" + firstName + "-" + middleName + "-" + lastName + "-record.txt";

	ifstream file;
	file.open(checkChild);
	if (file.is_open())
	{

		cout << "Student exists";
		file.close();
		ofstream userFile;
		userFile.open("Users/" + activeuser.username + ".txt", ios::app);
		userFile << firstName << " " << middleName << " " << lastName << endl;

	}
	else
	{

		file.close();
		errorType = "StudentNotExist";
		errorDesc = "When creating a new child, the user has entered the name of a student that does not exist.";
		string childNameForError = firstName + middleName + lastName;
		errorFileCreate(errorType, errorDesc, childNameForError);

	}

}


//function definition for making stars for menus
void stars() {
	for (int i = 0; i < 92; i++) {
		cout << "*";
	}
	cout << endl;
}
void menuEvents() {
	string lines;
	int menu;



	ifstream eventsfile("Events.txt"); // reading Events file
	if (!eventsfile.is_open()) {
		cout << "Error in opening the file" << endl;//error message for user if it cant read.
		return;
	}


	stars();
	while (getline(eventsfile, lines)) {
		cout << lines << endl;//displaying text fromm the file
	}
	stars();//printing top stars

	eventsfile.close();


	cout << "1 - Return to Parents Menu" << endl;
	cout << "2 - Exit program" << endl;
	cout << "> ";
	
	cin >> menu;

	switch (menu)
	{
	case 1:
		return menuParent();
		break;
	case 2:
		exit(0);
	default:
		break;
	}

}

void errorFileCreate(string x, string y, string extra) {

	cout << endl;
	cout << "ERROR: " << x << " " << y << endl;
	ofstream errorFile;
	string errorFileName;

	int errorTime = time(NULL);
	errorFileName = "Errors/";
	errorFileName += to_string(errorTime);
	errorFileName += "error" + x + ".txt";
	errorFile.open(errorFileName);
	errorFile << "ERROR: " << x << " " << y << endl << extra;
	errorFile.close();

}