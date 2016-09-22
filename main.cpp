
/*************************************************
                00 Name generator
     - This simple program generates random names.
	 - Author : Ibrahim Mohamed Abdul-Meged.
	          : facebook.com/Ibrahiim.Pasha
			  : github.com/Ibrahiim-Pasha
	 - Date : 22/9/2016 - 5:01 AM

*************************************************/

#include <iostream>
#include <cstdlib>   // for use rand() and srand()
#include <ctime>     // for use time()
#include <Windows.h> // for use sleep() -optional-
using namespace std;

int main()
{
	// This array contains the letters of the alphabet.
	char alphabet[26] = { 'a', 'b', 'c', 'd',
						  'e', 'f', 'g', 'h',
					      'i', 'j', 'k', 'l',
					      'm', 'n', 'o', 'p',
					      'q', 'r', 's', 't',
					      'u', 'v', 'w', 'x',
					      'y', 'z' };

	int number; // number is : Number of letters random name.
	char again;

	srand(time(NULL)); // seed random -> seed is a valid number assigned value of time (seconds) through the function time().

start:

	cout << "Please enter the number of letters the name : ";
	cin >> number;

	if (number >= 1)
	{
		for (int i = 0; i < number; i++)
		{
			cout << alphabet[rand() % 26]; // rand() % 26 -> A random value between zero and 26(alphabet).
		}

		cout << endl;
		cout << "Again[Y/N]? ";
		cin >> again;
		if (again == 'Y' || again == 'y')
		{
			goto start;
		}
		else
		{
			cout << "Goodbye!" << endl;
			Sleep(2000);
			exit(0);
		}
	}
	else
	{
		cout << "The number of letters the name should not be less than 1" << endl << endl;
		goto start;
	}

	return 0;
}