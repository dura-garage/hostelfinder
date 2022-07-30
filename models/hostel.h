#ifndef HOSTEL_H
#define HOSTEL_H

#include <string>
using namespace std;
enum Category
{
    BOYS,
    GIRLS
};

class Hostel
{
    string name;
    string location;
    Category category;
    int totalBeds;
    float monthlyFee;
    bool vegFoodAvailable;

public:

/*
* Define constructors
* No need of default constructor if there is no setters
* Parameterized constructor
* Implement copy constructor if needed.
*/

Hostel();
Hostel(string name,string location,Category category, int totalBeds, float monthlyFee, bool vegFoodAvailable);
//Hostel(Hostel & h);

/*
*  Getters for the variables
*/
string getName();
string getLocation();
Category getCategory();
int getTotalBeds();
float getMonthlyFee();
bool getVegFoodAvailable();
};

#endif // HOSTEL_H
