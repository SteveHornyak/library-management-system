#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void patron()
{
	cout << "Please select an option:\n\t(1) Check out item\n\t(2) Renew an item\n\t(3) See due date of items\n>>";

	string s = "";
	int opt = -1;

	cin >> s;
}

void librarian()
{

}

int main(int argc, char* argv[])
{
	cout << "Welcome to the Hornyak Library!\n" << endl;

	string input = "";
	int iput = -1;

	cout << "Please choose one of the following numbers. Are you a:\n\t(1) Patron\n\t(2) Librarian" << endl;

	while(1)
	{
		
		cout << ">> ";
		cin >> input;

		if(atoi(input.c_str()) == 1 || atoi(input.c_str()) == 2)
		{
			iput = atoi(input.c_str());

			if(iput == 1)
			{
				//Go to the patron functions
				patron();
			}
			else if(iput == 2)
			{
				//GO to the librarian functions
				librarian();
			}

			break;
		}
		else
		{
			cout << "Invalid option. Please try again.\n";
		}
	}


	cout << "Thanks for visiting your local library! Have a great day!" << endl;	

	return 0;
}