#include <iostream>
#include <vector>
#include <string>
#include<fstream>

using namespace std;

//structure definition
struct newSR {
	string password;
	string firstname;
	string middlename;
	string lastname;
	char gender= ' ';// assigning ecause it was causing issues?
	string parentname1;
	string parentname2;
}newrecord;

// Function decleration //
void createSR(vector <newSR>& records);
void stars();
// -------- Menu Functions -------- //
void menuTeacher();
void menuAdmin();
void menuRecordAdmin();
void menuParent();
void menuRecord();
//structure for student record creation


int main()
{
	
    cout << "NZ School Information System" << endl;



	cout << "______    _____                  __                   _____       ___   " << endl;
	cout << "|     \\  /            /\\        |  \\    |\\      /|   /     \\  |  /        " << endl;
	cout << "|     |  |           /  \\       |   \\   | \\    / |   |     |  | /   _____ " << endl;
	cout << "|_____/  |          /    \\      |    \\  |  \\  /  |   |     |  |/   /     \\" << endl;
	cout << "|        |-----    /------\\     |    |  |   \\/   |   |     |  |   |______/" << endl;
	cout << "|\\       |        /        \\    |    /  |        |   |     |  |   |       " << endl;
	cout << "| \\      |       /          \\   |   /   |        |   |     |  |    \\_____ " << endl;
	cout << "|  \\     \\_____ /            \\  |__/    |        |   \\_____/  |     __________" << endl;
	cout << "___________________________________________________________________/" << endl;
	cout << "___                                                                      " << endl;
	cout << "|  \\  | /  .  |\\    /|      /\\      | __ \\    /     ___     ____ |       ___    ___   |" << endl;
	cout << "|  |  |/   |  | \\  / |     /  \\     |/    \\  /     /       /     |___   /   \\  /   \\  |" << endl;
	cout << "|__/  |    |  |  \\/  |    /----\\    |      \\/      \\___   |      |   \\ |     ||     | |" << endl;
	cout << "|     |    |  |      |   /      \\   |      ||          \\  |      |   | |     ||     | |" << endl;
	cout << "|     |    |  |      |  /        \\  |      ||       ___/   \\____ |   |  \\___/  \\___/  |____" << endl;
	cout << endl;
	stars();
	
	menuRecordAdmin();
	return 0;
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

		cout << "> ";
		cin >> menu;

	} while (menu <= 0 || menu > [number of options]);

}*/


void menuTeacher() {

	int menu = 0;

	do
	{

		cout << endl;
		cout << "1 - list students" << endl;
		cout << "2 - create student record" << endl;
		cout << "3 - view student record" << endl;
		cout << "4 - delete student record" << endl;

		cout << "> "; // I've made this an arrow because I thought it looked better than a colon. We can use a colon if you think it looks better though. My reasoning was that because the input is without and other text, it looked cleaner.
		cin >> menu;

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

		cout << "> ";
		cin >> menu;

	} while (menu <= 0 || menu > 6);

}

void menuParent() {

	int menu = 0;

	do
	{

		cout << endl;
		cout << "1 - school news/notices" << endl;
		cout << "2 - view student record" << endl;

		cout << "> ";
		cin >> menu;

	} while (menu <= 0 || menu > 2);

}


//function for making the student record and calling the structure
void createSR(vector <newSR>& records) {
	// new variable for holding the data for student record
	
	
	//user inputs.
	stars();
	cout << "Create The student record." << endl;
	stars();
	cout << "Enter the students Password: ";
	cin >> newrecord.password;
	cout << "Enter the Students First name: ";
	cin >> newrecord.firstname;
	cout << "Enter the Students Middle name: ";
	cin >> newrecord.middlename;
	cout << "Enter the Students Last name: ";
	cin >> newrecord.lastname;
	cout << "Enter the Students Gender M/F/X: ";
	cin >> newrecord.gender;
	
	cout << "Enter the First Parents Full name: ";
	cin.ignore();
	getline(cin, newrecord.parentname1);
	cout << "Enter theSecond Parents Full name: ";
	cin.ignore();
	getline(cin, newrecord.parentname2);
	// adding newrecord to vector
	records.push_back(newrecord);

	
	//creating a string to make file names of the first + last names of the student and makign it a record of the .txt
	string childrecord = newrecord.firstname + "-"+ newrecord.middlename+"-" + newrecord.lastname + "-record.txt";

	ofstream filecreate;

	filecreate.open("Students/"+childrecord, ios::app);

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
void menuRecord()
{
}
void menuRecordAdmin() {
	
	int menu = 0;
	//vector for holding the information from the function
	vector<newSR> records;
	do
	{

		cout << endl;
		cout << "1 - Create student record" << endl;
		cout << "2 - View student record" << endl;
		cout << "3 - Delete student record" << endl;

		cout << "> ";
		cin >> menu;
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
void stars() {
	for (int i = 0; i < 92; i++) {
		cout << "*";
	}
	cout << endl;
}
/*void menuRecordTeacher() {

	int menu = 0;
	//vector for holding the information from the function
	vector<newSR> records;
	do
	{

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;

		cout << "> ";
		cin >> menu;
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
*/
//void parentCreate() {
//
//	int firstName, lastName, Gender, DOB, PH, email, username, password;
//
//	do
//	{
//		cout << "Create New Account" << endl;
//		
//		cout << "First Name:\n";
//		cin >> firstName;
//
//		cout << "Last Name:\n";
//		cin >> lastName;
//
//		cout << "Gender:\n";
//		cin >> Gender;
//
//		cout << "Date Of Birth:\n";
//		cin >> DOB;
//
//		cout << "Phone Number:\n";
//		cin >> PH;
//
//		cout << "email:\n";
//		cin >> email;
//
//		cout << "username\n";
//		cin >> username;
//
//		cout << "password\n";
//		cin >> password;
//
//	} while ()
//
//}