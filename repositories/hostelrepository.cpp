#include "hostelrepository.h"
#include "models/hostel.h"
#include "models/hostelowner.h"
//constructor
HostelRepository::HostelRepository(){
//default cosntructor
}


// some member functions for adding the data

/*
* Adding new hostel info to the database
* Status code represent if the operation is successful or failed
*/
Status HostelRepository::addHostel(Hostel hostel){
    //code to add the hostel info the file
    // this may be the sql code or the file input
}



//some member functions to get data

/*
* Returns info of all the Hostels as vector of Hostel
*/
vector<Hostel> HostelRepository::getAllHostels(){
    // write query here
}



/*
* Returns the boys hostels only
*/
vector<Hostel> HostelRepository::getBoysHostel(){
    // write qurey here
}



/*
* Returns the girls hostels only
*/
vector<Hostel> HostelRepository::getGirlsHostel(){
    //write query here
}



/*
* Returns the boys hostel for the location
* parameter is the location of the boys hostel
*/
vector<Hostel> HostelRepository::getBoysHostelByLocation(string location){
    //write the qurey here
}


/*
* Returns the boys hostel by the name
* parameter is the substring of the name
*/
vector<Hostel> HostelRepository::getBoysHostelByName(string name){
    //write the qurey here
}

/*
* Returns the girls hostel by the location
* parameter is the substring for the location
*/
vector<Hostel> HostelRepository::getGirlsHostelByLocation(string location){
    // write the query here
}

/*
* Returns the girls hostel by the name
* paramter is the substring of the name of the hostel
*/
vector<Hostel> HostelRepository::getGirlsHostelByName(string name){
    // write your query here
}
