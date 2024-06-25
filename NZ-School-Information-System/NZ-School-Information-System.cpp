#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

// ----- structure definition ----- //

struct Records {

	string
		firstname,
		middlename,
		lastname,
		maths,
		science,
		reading,
		writing,
		learning,
		other,
		notes;
	char gender;
	int classnum;
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
		classnum;
	long int PH;

}newteacher;

struct ActiveUser
{

	string firstname,
		lastname,
		username,
		usertype;
	int classnum;

}activeuser;

// ----- Function decleration ----- //

void viewSR();
void deleteSR();
void deleteStudentFromClass(string);
void viewProgress(int x);
void createSR(vector <Records>& records);
void editSR();
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
void menuRecordTeacher();
void menuRecordParent();
void menuRecordTeacher();
void menuEvents();

// ----- Class Records ----- //

void viewClass();

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
		cout << "5 - Back" << endl;
		cout << "6 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 6);


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

	case 5:
		if (activeuser.usertype == "Admin") {
			return menuAdmin();
		}
		else if (activeuser.usertype == "Teacher") {
			return menuTeacher();
		}
		else if (activeuser.usertype == "Parent") {
			return menuParent();
		}
		else {
			return menuMain();
		}
	case 6:
		exit(0);

	}

	if (activeuser.usertype == "Admin") {
		return menuAdmin();
	}
	else if (activeuser.usertype == "Teacher") {
		return menuTeacher();
	}
	else if (activeuser.usertype == "Parent") {
		return menuParent();
	}
	else {
		return menuMain();
	}
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
	cin >> newteacher.classnum;

	cout << "Year Level Teaching:\n> ";
	cin >> newteacher.yearTeach;

	//Saves the new created account

	newTeacher.open("Users/" + newteacher.username + ".txt");
	newTeacher << newteacher.password << endl << newteacher.firstname << endl << newteacher.lastname << endl << "Teacher" << endl << newteacher.PH << endl << newteacher.email << endl << newteacher.gender << endl << newteacher.DOB << endl << newteacher.classnum << endl << newteacher.yearTeach << endl;
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
		cout << "2 - View Term Dates" << endl;
		cout << "3 - View events / Notices" << endl;
		cout << "4 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 4);

	switch (menu)
	{
	case 1:
		login();
		break;
	case 2:
		menuTerms();
		break;
	case 3:
		menuEvents();
		break;
	case 4:
		exit(0);
		break;
	default:
		break;
	}

}

void menuTeacher() {

	// Create student records
	vector<Records> records;
	int menu = 0;

	do
	{

		stars();

		cout << endl;
		cout << "1 - List Class" << endl;
		cout << "2 - Student Records" << endl;
		cout << "3 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

	} while (menu <= 0 || menu > 3);


	switch (menu)
	{
	case 1:
		viewClass();
		break;
	case 2:
		menuRecordTeacher();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	}

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
		cout << "6 - New Teacher registration" << endl;
		cout << "7 - Exit Program" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		// The report should include, classroom number, student full name, learning progress of each subject, teacher name and their parents contact number.

		

	} while (menu <= 0 || menu > 7);
	
	switch (menu)
		{
		case 1:
			viewClass();
		case 2:
			menuRecordParent();
			break;
		case 3:
			menuRecordAdmin();
			break;
		case 4:
			viewProgress(2);
			break;
		case 5:
			viewProgress(1);
			break;
		case 6:
			createTeacher();
			break;
		case 7:
			exit(0);
			break;
		default:
			break;
		}
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

	} while (menu <= 0 || menu > 5);

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

}*/

void menuRecordTeacher() {

	int menu = 0;
	vector<Records> records;
	do
	{

		stars();

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - edit student record" << endl;
		cout << "4 - delete student record" << endl;
		cout << "5 - Back" << endl;
		cout << "6 - Exit" << endl;
		cout << endl;
		cout << "> ";
		cin >> menu;
		cout << endl;

		switch (menu)
		{
    case 1:
			createSR(records);
			return menuRecordTeacher();
		case 2:
			viewSR();
			return menuRecordTeacher();
		case 3:
			editSR();
			return menuRecordTeacher();
		case 4:
			deleteSR();
			return menuRecordTeacher();
		case 5:
			return menuTeacher();
    case 6:
      exit(0);
      break;
		}

	} while (menu <= 0 || menu > 5);

}

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
void createSR(vector <Records>& records) {



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
	cout << "Other activities?\n>";
	getline(cin, newrecord.other);
	cout << "Notes on student:\n>";
	getline(cin, newrecord.other);


	// adding newrecord to vector
	records.push_back(newrecord);


	//creating a string to make file names of the first + last names of the student and makign it a record of the .txt
	string childrecord = newrecord.firstname + "-" + newrecord.middlename + "-" + newrecord.lastname + "-record.txt";
	
	if (activeuser.usertype == "Teacher")
	{
		newrecord.classnum = activeuser.classnum;
	}
	else
	{
		cout << "Enter the class number:\n> ";
		cin >> newrecord.classnum;
	}

	ofstream filecreate;

	filecreate.open("Students/" + childrecord, ios::app); // change to check if any other files exist with same name rather than append

	if (filecreate.is_open()) {
		filecreate << newrecord.firstname << endl << newrecord.middlename << endl << newrecord.lastname << endl << newrecord.gender << endl << newrecord.learning << endl;
		filecreate << "Subjects\n";
		filecreate << "Maths: " << newrecord.maths << endl << "Science: " << newrecord.science << endl << "Writing: " << newrecord.writing << endl << "Reading: " << newrecord.maths << endl;
		filecreate << "Other: " << newrecord.other << endl << "Notes: " << newrecord.notes << endl;

		filecreate.close(); // function is complete close the file
		filecreate.open("Classes/class" + to_string(newrecord.classnum) + "Students.txt", ios::app);
		filecreate << newrecord.firstname << " " << newrecord.middlename << " " << newrecord.lastname << endl;
		filecreate.close();

		cout << "You have created the record sucessfully" << endl;//feed back to user
	}
	else {
		cout << "cannot open the file" << endl;
	}

}

void viewSR() {
	string fullname;
	string filename;

	stars();
	cout << "Viewing student record" << endl;
	stars();
	cin.ignore();
	cout << "Enter the student's full name (if no middle name, type N/A): ";
	getline(cin, fullname);

	// Replace spaces  with dashes to find the file name based on our file struct
	replace(fullname.begin(), fullname.end(), ' ', '-');
	//file pathing 
	filename = "Students/" + fullname + "-record.txt";

	ifstream recordFile(filename);

	if (recordFile.is_open()) {
		stars();
		cout << "This is the student record for " << fullname << endl;
		stars();
		// loop for pulling information from file
		string information;
		while (getline(recordFile, information)) {
			cout << information << endl;
		}

		recordFile.close();
	}
	// error handling for file not found
	else {
		cout << "\nSorry, we couldn't find that file." << endl;
	}

	stars();
}
void editSR() {

	string oldfile, tempfile = "Students/temprec.txt"; // Student record file and temporary file being created
	string oldinfo, newinfo; // line user wishes to replace and what they wish to replace it with
	string newFileName;
	char changeFileName;

	// User input to find the file they wish to edit
	cin.ignore();
	cout << "Enter the child's full name you wish to edit (if no middle name type N/A):\n";
	string fullname;
	getline(cin, fullname);

	// Replace spaces with dashes in full name for file handling
	replace(fullname.begin(), fullname.end(), ' ', '-');

	oldfile = "Students/" + fullname + "-record.txt";

	ifstream readfile(oldfile); // reading file based on user input

	if (!readfile.is_open()) {
		cout << "The file: " << oldfile << " has not opened properly. Please try again." << endl;
		stars();
		return;
	}

	ofstream writefile(tempfile); // creating a new file to hold the updated information

	if (!writefile.is_open()) {
		cout << "The file: " << tempfile << " has not been created properly. Please try again." << endl;
		stars();
		return;
	}

	stars();
	cout << "Enter the information you wish to replace:\n>";
	getline(cin, oldinfo);

	cout << "Enter the updated information:\n>";
	getline(cin, newinfo);
	stars();

	string line;

	// Read each line from the old file, replace information if found, and write to the temporary file
	while (getline(readfile, line)) {
		size_t pos = line.find(oldinfo);
		if (pos != string::npos) {
			line.replace(pos, oldinfo.length(), newinfo);
		}
		writefile << line << endl;
	}

	readfile.close();
	writefile.close();

	// Changing the file name to a new file name based on user choice
	stars();
	cout << "Do you want to change the filename (if Full name has changed)? (Y/N):\n> ";
	cin >> changeFileName;

	cin.ignore();

	if (toupper(changeFileName) == 'Y') {
		cout << "Enter the new file name (without extension and spaces will be replaced by -):\n> ";
		getline(cin, newFileName);

		// Replace spaces with dashes in new file name
		replace(newFileName.begin(), newFileName.end(), ' ', '-');

		newFileName = "Students/" + newFileName + "-record.txt";
	}
	else {
		newFileName = oldfile; // Keep the original filename
	}

	// Remove old file and rename temporary file to new file name
	if (remove(oldfile.c_str()) != 0) {
		cout << "Unable to delete the file: " << oldfile << endl;
	}
	else {
		if (rename(tempfile.c_str(), newFileName.c_str()) != 0) {
			cout << "Unable to rename file: " << tempfile << endl;
		}
		else {
			cout << oldfile << " was updated successfully and ";

			if (newFileName != oldfile) {
				cout << "renamed to " << newFileName << endl;
			}
			else {
				cout << "kept the same filename." << endl;
			}
		}
	}
}
void deleteSR() {
	int deletefile;
	string childsName;
	string filename;

	cin.ignore();
	cout << "Enter the child's full name you wish to delete (if no middle name, type N/A):\n> ";
	getline(cin, childsName);

	replace(childsName.begin(), childsName.end(), ' ', '-');
	
	filename = "Students/" + childsName + "-record.txt";

	deletefile = remove(filename.c_str());

	deleteStudentFromClass(filename);

	if (deletefile == 0) {
		stars();
		cout << "File '" << filename << "' successfully deleted.\n";
	}
	else {
		cout << "Error deleting file '" << filename << "'.\n";
	}
	return menuTeacher();
}

void deleteStudentFromClass(string name) {
	int classIndex = 0;
	while (true) {
		// Open each class file
		ifstream findStudent;
		string classFileName = "Classes/class" + to_string(classIndex) + "Students.txt";
		findStudent.open(classFileName);

		if (!findStudent) {
			// If class file does not exist, break the loop
			break;
		}

		bool found = false;
		string studentName;
		while (getline(findStudent, studentName)) {
			if (studentName == name) {
				found = true;
				break;
			}
		}
		findStudent.close();

		if (found) {
			cout << "Found Student" << endl;

			// Open the original file and a temporary file
			ifstream oldFile("Classes/class" + to_string(classIndex) + "Students.txt");
			ofstream newFile("temp.txt");

			string line;
			while (getline(oldFile, line)) {
				if (line != name) {
					newFile << line << endl;
				}
			}

			newFile.close();
			oldFile.close();

			// Replace the original file with the temporary file
			ifstream tempFile("temp.txt");
			ofstream classFile("Classes/class" + to_string(classIndex) + "Students.txt");

			while (getline(tempFile, line)) {
				classFile << line << endl;
			}

			tempFile.close();
			classFile.close();

			// Remove the temporary file
			remove("temp.txt");

			// Since the student is found and deleted, we can exit the function
			return;
		}

		classIndex++;
	}
}

void viewProgress(int x) {
	char progressType;

	if (x == 1) {
		cout << "Progressing Students" << endl;
		progressType = '*';
	}
	else if (x == 2) {
		cout << "Need Help Students" << endl;
		progressType = '!';
	}
	else {
		cout << "Invalid progress type." << endl;
		return; // Exit function if progress type is invalid
	}

	cout << endl << endl;

	int classIndex = 0;
	while (true) {
		// Open each class file
		ifstream findProgress;
		string classFileName = "Classes/class" + to_string(classIndex) + "Students.txt";
		findProgress.open(classFileName);

		if (!findProgress) {
			// If class file does not exist, break the loop
			break;
		}

		cout << "Class " << classIndex << endl;

		string studentName;
		while (getline(findProgress, studentName)) {
			// Read each student file
			string studentFileName = studentName;
			for (char& ch : studentFileName) {
				if (ch == ' ') {
					ch = '-';
				}
			}
			studentFileName += "-record.txt";

			ifstream student;
			student.open("Students/" + studentFileName);

			if (student.is_open()) {
				// Read up to line 5
				string line;
				for (int i = 1; i <= 5; ++i) {
					getline(student, line);
				}

				// Check if line 5 contains the progressType character
				if (line.find(progressType) != string::npos) {
					cout << studentName << endl; // Output the line (or process it as needed)
				}

				student.close();
			}
			else {
				cout << "Unable to open student file: " << studentFileName << endl;
			}
		}

		findProgress.close();
		classIndex++;
	}

	cout << endl;
	return menuAdmin();

}

void menuRecordAdmin() {

	// Add edit record

	// Update records (different to edit) - Teacher

	vector<Records> records;
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
									while (getline(userFile, line))
									{

										currentLine++;

										if (currentLine == 9)
										{

											activeuser.classnum = stoi(line);
											break;

										}

									}

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

					int menu;

					if (getline(userFile, line)) {
						if (!line.empty()) {

							do
							{

								cout << endl;
								cout << "A child is already linked to your account. Would you like to add a new child?" << endl;
								cout << "1 - Yes" << endl;
								cout << "2 - No" << endl;
								cout << endl;
								cout << "> ";
								cin >> menu;
								cout << endl;

								switch (menu)
								{
								case 1:
									createChild();
									break;
								case 2:
									menuParent();
									break;
								default:
									break;
								}

							} while (menu <= 0 || menu > 2);

						}
						else {

							cout << "You have no child" << endl;
							createChild();

						}
					}
					else {

						userFile.close();

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
		userFile.close();

		return menuParent();

	}
	else
	{

		file.close();
		errorType = "StudentNotExist";
		errorDesc = "When creating a new child, the user has entered the name of a student that does not exist.";
		string childNameForError = firstName + middleName + lastName;
		errorFileCreate(errorType, errorDesc, childNameForError);

		return menuParent();

	}

}

void viewClass() {
	auto classFileExists = [](int classnum) {
		ifstream classFile("Classes/class" + to_string(classnum) + "Students.txt");
		return classFile.good();
	};

	int classnum;

	if (activeuser.usertype == "Teacher") {
		classnum = activeuser.classnum;
	}
	else if (activeuser.usertype == "Admin") {
		classnum = 0; // Change to 1 later
	}

	while (classFileExists(classnum)) {
		cout << "Class " << classnum << ":" << endl;

		ifstream classFile("Classes/class" + to_string(classnum) + "Students.txt");
		string line;

		if (classFile) {
			while (getline(classFile, line)) {
				cout << line;  // Print student's name

				string fileName = line;
				// Replace spaces with dashes in fileName
				replace(fileName.begin(), fileName.end(), ' ', '-');
				fileName += "-record.txt";

				ifstream studentFile("Students/" + fileName);

				if (studentFile) {
					bool hasNotes = false;     // Flag to track if notes indicator is found

					for (int i = 0; i < 12; ++i) {  // Read up to line 12
						getline(studentFile, line);

						if (i == 4) {  // Check line 5 for progress indicator
							cout << "\t" << line;  // Output line 5 after printing the student's name
						}

						if (i == 11 && !line.empty()) {  // Check line 12 for notes indicator
							hasNotes = true;
						}
					}

					cout << "\t";

					if (hasNotes) {
						cout << "[Notes]";
					}

					cout << endl;

					studentFile.close();
				}
				else {
					cout << "\tError: Unable to open file for student: " << line << endl;
				}
			}

			classFile.close();
			cout << endl;
		}
		else {
			cout << "Error: Unable to open class file." << endl;
		}

		if (activeuser.usertype == "Teacher") {
			break;
		}

		++classnum;
	}

	if (activeuser.usertype == "Teacher") {
		menuTeacher();
	}
	else {
		menuAdmin();
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


	cout << "1 - Go back" << endl;
	cout << "2 - Exit program" << endl;
	cout << "> ";

	cin >> menu;

	switch (menu)
	{
	case 1:
		if (activeuser.usertype == "Admin") {
			return menuAdmin();
		}
		else if (activeuser.usertype == "Teacher") {
			return menuTeacher();
		}
		else if (activeuser.usertype == "Parent") {
			return menuParent();
		}
		else {
			return menuMain();
		}
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