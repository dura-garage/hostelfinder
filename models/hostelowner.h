#ifndef HOSTELOWNER_H
#define HOSTELOWNER_H

#include <string>
#include <iostream>

using namespace std;// for the string

class HostelOwner{
    string name;
    string email;
    string password;// only hash of the password will be stored

public:
//Constructors
HostelOwner();
HostelOwner(string name, string email, string password);

/*
* getters
*/
string getName();
string getEmail();
string getPassword();
};

#endif // HOSTELOWNER_H
