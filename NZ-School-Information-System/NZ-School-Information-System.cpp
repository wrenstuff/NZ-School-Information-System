#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

// Function decleration //

void login();

// -------- Menu Functions -------- //

void menuMain();
void menuTeacher();
void menuAdmin();
void menuParent();
void menuRecord();

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

		cout << endl;
		cout << "1 - list students" << endl;
		cout << "2 - create parent record" << endl;
		cout << "3 - view parent record" << endl;
		cout << "4 - delete parent record" << endl;
		cout << "5 - view 'help needed' students" << endl; //Can be renamed. Couldn't think of anything else at the time of writing
		cout << "6 - view 'progressing' students" << endl;
		cout << "7 - Exit Program" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		if (menu == 7)
		{

			break;

		}

	} while (menu <= 0 || menu > 7);

}

void menuParent() {

	int menu = 0;

	do
	{

		cout << endl;
		cout << "1 - school news/notices" << endl;
		cout << "2 - view student record" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 2);

}

void menuRecord() {

	int menu = 0;

	do
	{

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

// ------------ Login / Sign Up ------------ //

void login() {

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

void errorFileCreate(string x, string line, string y) {

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