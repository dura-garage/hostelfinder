#include "hostel.h"
#include <string.h>

Hostel::Hostel(){
//Default constructor
}
Hostel::Hostel(string name,string location,Category category, int totalBeds, float monthlyFee, bool vegFoodAvailable){
    this->name=name;
    this->location=location;
    this->category=category;
    this->totalBeds=totalBeds;
    this->monthlyFee=monthlyFee;
    this->vegFoodAvailable=vegFoodAvailable;
}
//Hostel::Hostel(Hostel & h){
//    // If a copy constructor is needed
//    // Implement this as per the need
//}
string Hostel::getName(){
    return this->name;
}
string Hostel::getLocation(){
    return this->location;
}
Category Hostel::getCategory(){
    return this->category;
}
int Hostel::getTotalBeds(){
    return this->category;
}
float Hostel::getMonthlyFee(){
    return this->monthlyFee;
}
bool Hostel::getVegFoodAvailable(){
    return this->vegFoodAvailable;
}
