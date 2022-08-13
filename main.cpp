
#include <iostream>
#include "validatenumber.h"
#include "NumberBreakdown.h"
#include "string"
#include "cctype"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::isdigit;

int main()
{
    cout << "\n== US PHone Number ==" << endl;
    cout << "1. Input an us phone number" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    string userChoice;
    cin >> userChoice;
    int haveCheckANumber = 0;                                         // if user has check a number at least one time

    while(userChoice != "e" and userChoice != "E")
    {
        if(userChoice == "1")
        {
            string userNumber;
            cout << "\n= Input US Number =\n" << endl;
            cout << "Input an us number (xxx-xxx-xxxx): ";
            cin >> userNumber;
            if (validNumber(userNumber))
            {
                breakdownNumber(userNumber);
                haveCheckANumber += 1;                                // user has check an us phone number at least one
            } else
            {
                cout << "\n[ Invalid input ]" << endl;
            }
        }
        else
        {
            cout << "\n[ Invalid choice ]" << endl;
        }

        cout << "\n== US PHone Number ==" << endl;
        cout << "1. Input an us phone number" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> userChoice;
    }

    if(userChoice == "e" or userChoice == "E")
    {
        if(haveCheckANumber == 0)
        {
        cout << "\n== Exit Program ==" << endl;
        }
        else                                           // if user has checked an us number then give a credit for the source
        {
            cout << "\nSource: " << "https://www.freshworks.com/freshcaller-cloud-pbx/phone-numbers/us-area-codes/" << endl;
            cout << "\n== Exit Program ==" << endl;
        }
    }

    return 0;
}
