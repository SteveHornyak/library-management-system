#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char* argv[])
{
	cout << "Welcome to the Hornyak Library!\n" << endl;

	string input = "";
	int iput = -1;

	while(1)
	{
		cout << "Please choose one of the following numbers. Are you a:\n\t(1) Patron\n\t(2) Librarian" << endl;

		
		cout << ">> ";
		cin >> input;

		if(atoi(input.c_str()) == 1 || atoi(input.c_str()) == 2)
		{
			iput = atoi(input.c_str());
			break;
		}
		else
		{
			cout << "Invalid option. Please try again.\n" << endl;
		}
	}

	cout << iput << endl;


	cout << "Thanks for visiting your local library! Have a great day!" << endl;	

	return 0;
}