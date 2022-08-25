//
// Created by XaveF on 8/25/2022.
//

#include "Dog.h"
#include "sstream"

using std::stringstream;

Dog::Dog()                       // default value of data members
{
    _type = "No type";
    _origin = "No origin country";
    _color = "No specified color";
    _age = -1;
}

Dog::Dog(const string &type, const string &origin)
{
    _type = type;
    _origin = origin;
}

void Dog::SetColor(const string &color)
{
    _color = color;
}

void Dog::SetAge(const int &age)
{
    _age = age;
}

string Dog::GetColor() const
{
    return _color;
}

int Dog::GetAge() const
{
    return _age;
}

string Dog::ToString() const
{
    stringstream toString;
    toString << "Type: " << _type << ", Origin Country: " << _origin << ", Color: " << _color << ", Age: " << _age;
    return toString.str();
}

string Dog::ToJson() const
{
    stringstream toJson;
    toJson << "{\"Type\":\"" << _type << "\", \"Origin Country\":\"" << _origin << "\", \"Color\":\"" << _color << "\", \"Age\":" << _age << "}";
    return toJson.str();
}
