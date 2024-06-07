#include <iostream>
using namespace std;

// Function decleration //

// -------- Menu Functions -------- //

void menuTeacher();
void menuAdmin();
void menuParent();
void menuRecord();

int main()
{

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

void menuRecord() {

	int menu = 0;

	do
	{

		cout << endl;
		cout << "1 - create student record" << endl;
		cout << "2 - view student record" << endl;
		cout << "3 - delete student record" << endl;

		cout << "> ";
		cin >> menu;

	} while (menu <= 0 || menu > 3);

}