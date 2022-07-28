#include "hostelowner.h"

//Constructors
HostelOwner::HostelOwner(){
    //default constructor here
}
HostelOwner::HostelOwner(string name, string email, string password){
    this->name=name;
    this->email=email;
    this->password=password;
}

/*
* getters
*/
string HostelOwner::getName(){
    return this->name;
}
string HostelOwner::getEmail(){
    return this->email;
}
string HostelOwner::getPassword(){
    return this->password;
}
