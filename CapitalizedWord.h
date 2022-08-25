//
// Created by Franssiskus Agapa on 8/25/2022.
//

#ifndef CLASSC__2_CAPITALIZEDWORD_H
#define CLASSC__2_CAPITALIZEDWORD_H

#include "string"
#include "cctype"

using std::isspace;
using std::isalpha;
using std::islower;
using std::toupper;
using std::string;

string Capitalize(string& word)
{
    int spacePos;                           // check space/ more than one word
    spacePos = word.find(' ');

    if(islower(word[0]))                 // look for the first character in word
    {
        word[0] = toupper(word[0]);
    }

    if(spacePos != string::npos)            // if there is space then check if there is something after and it its an alphabet, it is then make the first char in word upper case
    {
        if(isalpha(word[spacePos + 1]))
        {
            word[spacePos + 1] = toupper(word[spacePos + 1]);
        }
    }

    return word;
}
#endif //CLASSC__2_CAPITALIZEDWORD_H
