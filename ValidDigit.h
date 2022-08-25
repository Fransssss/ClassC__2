//
// Created by Fransiskus Agapa on 8/25/2022.
//

#ifndef CLASSC__2_VALIDDIGIT_H
#define CLASSC__2_VALIDDIGIT_H

#include "cctype"
#include "string"

using std::isdigit;
using std::string;

bool Validate(string& strDigit)
{
    int amountValidDigit = strDigit.size();        // all have to be digit
    int keepTrackValidDigit = 0;                   // to keep track how many input is valid digit

    for(size_t i= 0; i < strDigit.size(); ++i)
    {
        if(isdigit(strDigit[i]))
        {
            keepTrackValidDigit += 1;
        }
    }

    if(keepTrackValidDigit != amountValidDigit)   // if some input is not digit
    {
        return false;
    }

    return true;
}

#endif //CLASSC__2_VALIDDIGIT_H
