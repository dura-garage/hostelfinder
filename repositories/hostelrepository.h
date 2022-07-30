#ifndef HOSTELREPOSITORY_H
#define HOSTELREPOSITORY_H

#include<string>
#include<vector>
#include "models/hostel.h"

using namespace std;

/*
* Using vector as dynamic array
*/

enum Status{SUCCESSFUL,FAILED};

class HostelRepository{

public:
//Default constructor
HostelRepository();

//some memeber function to set the data
Status addHostel(Hostel hostel);



//some member functions to get data
Hostel getHostelById(int id);
vector<Hostel> getAllHostels();
vector<Hostel> getBoysHostel();
vector<Hostel> getGirlsHostel();
vector<Hostel> getBoysHostelByLocation(string location);
vector<Hostel> getBoysHostelByName(string name);
vector<Hostel> getGirlsHostelByLocation(string location);
vector<Hostel> getGirlsHostelByName(string location);
};
#endif // HOSTELREPOSITORY_H
