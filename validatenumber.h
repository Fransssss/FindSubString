//
// Created on 8/12/2022.
//

#ifndef FINDSUBSTRING_VALIDATENUMBER_H
#define FINDSUBSTRING_VALIDATENUMBER_H

#include "string"
using std::string;

bool validNumber(const string& userPhoneNumber)
{
    string defaultFormat = "xxx-xxx-xxxx";

    if(userPhoneNumber.size() != defaultFormat.size())
    {
        return false;
    }

    for(size_t i = 0; i , i < defaultFormat.size(); ++i)
    {
        if(defaultFormat.at(i) == 'x')
        {
            if(!isdigit(userPhoneNumber.at(i)))               // if not digit then false
            {
                return false;
            }
        }
        else
        {
            if(userPhoneNumber.at(i) != '-')                         // false if its no digit nor dash
            {
                return false;
            }
        }

    }
    return true;
}

#endif //FINDSUBSTRING_VALIDATENUMBER_H
