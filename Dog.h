//
// Created by Fransiskus Agapa on 8/25/2022.
//

#ifndef CLASSC__2_DOG_H
#define CLASSC__2_DOG_H

#include "string"

using std::string;

class Dog
{
private:
    string _type;
    string _origin;
    string _color;
    int _age;
public:
    Dog();                                                // default constructor
    Dog(const string& type, const string& origin);        // constructor
    void SetColor(const string& color);
    void SetAge(const int& age);
    string GetColor() const;
    int GetAge() const;
    string ToString() const;
    string ToJson() const;
};


#endif //CLASSC__2_DOG_H
