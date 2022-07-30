#include "hostelrepository.h"
#include "models/hostel.h"
#include "dao/dbconnection.h"
#include "qsqlquery.h"
#include <QStandardPaths>
//constructor
HostelRepository::HostelRepository(){
//default cosntructor

    //creating the database connection
    DbConnection d("C:/Users/hp/OneDrive/Documents/Learn/learn-cpp/qt-projects/HostelFinder/database/db.sqlite3");
}


Hostel HostelRepository::getHostelById(int id){
    Hostel h;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE id = ?");
    query.addBindValue(id);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h(name.toStdString(),"",BOYS,0,0.0,false);
            return h;
            //TODO: create the hostel object form the data queried from the database
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return h;
}

// some member functions for adding the data

/*
* Adding new hostel info to the database
* Status code represent if the operation is successful or failed
*/
Status HostelRepository::addHostel( Hostel hostel){
    //code to add the hostel info the file
    // this may be the sql code or the file input
    //TODO: check data validity in servce class
    QSqlQuery query;
    query.prepare("INSERT INTO hostel(name) values(:name)");
    query.bindValue(":name",QString::fromStdString(hostel.getName()));
    // Access the date to store from the @param hostel object
    if(!query.exec()){
        return FAILED;
    }
    else{
        return SUCCESSFUL;
    }
}



//some member functions to get data

/*
* Returns info of all the Hostels as vector of Hostel
*/
vector<Hostel> HostelRepository::getAllHostels(){
    vector<Hostel> allHostels;

    QSqlQuery query;
    query.prepare("SELECT * FROM hostel");
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            allHostels.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return allHostels;
}



/*
* Returns the boys hostels only
*/
vector<Hostel> HostelRepository::getBoysHostel(){
    // write qurey here
    vector<Hostel> allBoysHostels;

    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE type=?");
    query.addBindValue(BOYS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            allBoysHostels.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return allBoysHostels;
}



/*
* Returns the girls hostels only
*/
vector<Hostel> HostelRepository::getGirlsHostel(){
    //write query here
    vector<Hostel> allGirlsHostels;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE type=?");
    query.addBindValue(GIRLS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            allGirlsHostels.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return allGirlsHostels;
}



/*
* Returns the boys hostel for the location
* parameter is the location of the boys hostel
*/
vector<Hostel> HostelRepository::getBoysHostelByLocation(string location){
    //write the qurey here
    vector<Hostel> boysHostelsByLocation;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE location LIKE '%?%' AND type=?");
    query.addBindValue(QString::fromStdString(location));
    query.addBindValue(BOYS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            boysHostelsByLocation.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return boysHostelsByLocation;
}


/*
* Returns the boys hostel by the name
* parameter is the substring of the name
*/
vector<Hostel> HostelRepository::getBoysHostelByName(string name){
    //write the qurey here
    vector<Hostel> boysHostelsByName;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE name LIKE '%?%' AND type = ?");
    query.addBindValue(QString::fromStdString(name));
    query.addBindValue(BOYS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            boysHostelsByName.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return boysHostelsByName;
}

/*
* Returns the girls hostel by the location
* parameter is the substring for the location
*/
vector<Hostel> HostelRepository::getGirlsHostelByLocation(string location){
    // write the query here
    vector<Hostel> girlsHostelsByName;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE location LIKE '%?%' AND type = ?");
    query.addBindValue(QString::fromStdString(location));
    query.addBindValue(GIRLS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            girlsHostelsByName.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return girlsHostelsByName;
}

/*
* Returns the girls hostel by the name
* paramter is the substring of the name of the hostel
*/
vector<Hostel> HostelRepository::getGirlsHostelByName(string name){
    // write your query here
    vector<Hostel> girlsHostelsByName;
    QSqlQuery query;
    query.prepare("SELECT * FROM hostel WHERE name LIKE '%?%' AND type = ?");
    query.addBindValue(QString::fromStdString(name));
    query.addBindValue(GIRLS);
    if(query.exec()){
        while(query.next()){
            int id=query.value(0).toInt();
            QString name=query.value(1).toString();
            Hostel h1;
            //TODO: create the hostel object form the data queried from the database
            girlsHostelsByName.push_back(h1);
        }
    }
    else{
        //TODO: handle fail
    }
    //return the list of all the hostels to the service class
    return girlsHostelsByName;
}
