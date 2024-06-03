#include <iostream>
using namespace std;

// Function decleration

// -------- Menu Functions --------

void menuTeacher();
void menuAdmin();
void menuParent();
void menuRecord();

int main()
{

    cout << "NZ School Information System" << endl;

}

// Functions. If creating a new function, make sure you add it to the top of the code as well.

// -------- Menu Functions --------

void menuTeacher() {

	int menu;

	do
	{

		cout << endl;
		cout << "list students" << endl;
		cout << "create student record" << endl;
		cout << "view student record" << endl;
		cout << "delete student record" << endl;

		cout << ": ";
		cin >> menu;

	} while (menu > 0 && menu <= 4);

}

void menuAdmin() {

	int menu;

	do
	{

		cout << endl;
		cout << "list students" << endl;
		cout << "create parent record" << endl;
		cout << "view parent record" << endl;
		cout << "delete parent record" << endl;
		cout << "view 'help needed' students" << endl; //Can be renamed. Couldn't think of anything else at the time of writing
		cout << "view 'progressing' students" << endl;

		cout << ": ";
		cin >> menu;

	} while (menu > 0 && menu <= 7);

}

void menuParent() {

	int menu;

	do
	{

		cout << endl;
		cout << "school news/notices" << endl;
		cout << "view student record" << endl;

		cout << ": ";
		cin >> menu;

	} while (menu > 0 && menu <= 2);

}

void menuRecord() {

	int menu;

	do
	{

		cout << endl;
		cout << "create student record" << endl;
		cout << "view student record" << endl;
		cout << "delete student record" << endl;

		cout << ": ";
		cin >> menu;

	} while (menu > 0 && menu <= 3);

}