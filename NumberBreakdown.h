//
// Created on 8/12/2022.
//

#ifndef FINDSUBSTRING_NUMBERBREAKDOWN_H
#define FINDSUBSTRING_NUMBERBREAKDOWN_H

#include <iostream>
#include "DatabaseNumberRegionState.h"
#include "string"
using std::string;
using std::cout;
using std::endl;

void breakdownNumber(const string& userNumber)
{
    int oneDash = userNumber.find('-');                         // get first dash -
    int twoDash = userNumber.find('-', oneDash + 1);            // find 2nd dash - from 1st dash -
    cout << "\n== Phone Number Breakdown ==" << endl;
    // area code
    string codeArea = userNumber.substr(0, 3);
    // exchange code
    string codeExch = userNumber.substr(oneDash + 1, 3);       // plus one means start from next digit
    // line code
    string codeLine = userNumber.substr(twoDash+1, userNumber.size()-1);

    // put regions first then information
    if(regionState(codeArea))                                  // if only the number user input is really valid/exist
    {
        cout << "The code area: ";
        cout << codeArea << endl;
        cout << "The code exchange: ";
        cout << codeExch << endl;
        cout << "The line number: ";
        cout << codeLine << endl;
    }
}

#endif //FINDSUBSTRING_NUMBERBREAKDOWN_H
