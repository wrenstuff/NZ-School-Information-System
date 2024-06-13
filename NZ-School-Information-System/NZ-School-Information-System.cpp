#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

// ----- structure definition ----- //

struct newSR {
	string password;
	string firstname;
	string middlename;
	string lastname;
	char gender= ' ';
	string parentname1;
	string parentname2;
}newrecord;

// ----- Function decleration ----- //

void createSR(vector <newSR>& records);
void stars();

void login();

// -------- Menu Functions -------- //

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

	// Variables //

	

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
		cout << "2 - view student record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 2);

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
	cout << "Enter the students Password: ";
	cin >> newrecord.password;
	cout << "Enter the Students First name: ";
	cin.ignore();
	getline(cin, newrecord.firstname);
	cout << "Enter the Students Middle name: ";
	getline(cin, newrecord.middlename);
	cout << "Enter the Students Last name : ";
	getline(cin, newrecord.lastname);
	cout << "Enter the Students Gender M/F/X: ";
	cin >> newrecord.gender;

	cout << "Enter the Parents Full name: ";
	cin.ignore();
	getline(cin, newrecord.parentname1);
	
	cout << "Enter the Parents Full name: ";
	
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

// ------------ Login / Sign Up ------------ //

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

			if (currentLine == 1)
			{

				do
				{

					if (currentLine != 1)
					{

						break;

					}

					cout << currentLine << endl;
					cout << "Enter password" << endl << "> ";
					cin >> userPass;

					if (userPass == line)
					{

						//Maybe there could be a function called here which accesses everything in the users file and adds it to let's say a structure, so that the file doesn't have to keep being accessed

						while (getline(userFile, line))
						{

							currentLine++;

							switch (currentLine)
							{
							case 2:

								userName += line;
								break;

							case 3:

								userName += " " + line;
								cout << "Welcome, " << userName;
								break;

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

						cout << "Incorrect Password. ";
						tries--;
						cout << tries << " tries remaining" << endl;

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