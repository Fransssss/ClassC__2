// Author: Fransiskus Agapa
// Practices make improvement - Have Fun !
// :)

#include <iostream>
#include "string"
#include "Dog.h"
#include "ValidDigit.h"
#include "CapitalizedWord.h"

// =====================
// very simple database to put type, origin place , color, and aga of a dog
// =====================

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::stoi;
using std::getline;

int main()
{
    string choice;                                      // user choice
    string dogType;
    string dogOrigin;
    string dogColor;
    string dogAge;                                      // validate as string and turn it into int
    bool validAge;
    Dog initialDog;

    cout << endl << "== Simple Dog Database ==" << endl;
    cout << endl << "Loading initial data..." << endl;
    cout << "=======================" << endl;
    cout << "= Initial Data =" << endl;
    cout << initialDog.ToJson() << endl;                       // use class methods
    cout << "  " << initialDog.ToString() << endl;
    cout << "=======================" << endl;

    cout << endl << "Input type of a dog: ";
    while(dogType.size() == 0)                              // keep asking while no input is being put
    {
        getline(cin, dogType);
    }
    Capitalize(dogType);
    cout << endl;

    cout << "Input the country where the type of dog originally from: ";
    while(dogOrigin.size() == 0)
    {
        cin >> dogOrigin;
    }
    Capitalize(dogOrigin);
    cout << endl;

    cout << "Input the color of the dog: ";
    while(dogColor.size() == 0)
    {
        cin >> dogColor;
    }
    Capitalize(dogColor);
    cout << endl;

    cout << "Input the age of the dog: ";
    while(dogAge.size() == 0)
    {
        cin >> dogAge;
    }
    validAge = Validate(dogAge);
    if(!validAge)
    {
        cout << "\n[ Invalid age ]" << endl;
    }
    cout << endl;

    Dog updatedDog(dogType,dogOrigin);
    updatedDog.SetColor(dogColor);
    if(validAge)                                        // only put value if input is valid
    {
        updatedDog.SetAge(stoi(dogAge));            // send as parameter as int use stoi()
    }

    cout << "Loading updated data..." << endl;
    cout << "=======================" << endl;
    cout << "= Updated Data =" << endl;
    cout << updatedDog.ToJson() << endl;
    cout << "  " << updatedDog.ToString() << endl;
    cout << "=======================" << endl;


    return 0;
}
