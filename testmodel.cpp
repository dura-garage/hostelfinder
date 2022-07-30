#include<QString>
#include<QSqlDatabase>
#include<QSqlQuery>
#include <QSqlError>

class testdatabase{

public:
    testdatabase(){
       const QString DRIVER("QSQLITE");
       if(!QSqlDatabase::isDriverAvailable(DRIVER)){
           qDebug("Driver not available");
       }
       QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);
       db.setDatabaseName("C:\\Users\\hp\\OneDrive\\Documents\\Learn\\learn-cpp\\qt-projects\\HostelFinder\\database\\db.sqlite3");
       if(!db.open())
         qWarning() << "ERROR: " <<"database"<< db.lastError();
      else{ qDebug("Database is connected");}
       QSqlQuery query;
           query.prepare("CREATE TABLE IF NOT EXISTS student (id INTEGER PRIMARY KEY, name TEXT)");
           if(!query.isActive())
               qWarning() << "ERROR: " <<"create table"<< query.lastError().text();


       if(!query.exec("INSERT INTO student(name) VALUES('Eddie Guerrero')"))
         qWarning() << "ERROR: " << "insert"<<query.lastError().text();

       query.prepare("SELECT name FROM student WHERE id = ?");
       query.addBindValue(1);
       if(!query.exec())
         qWarning() << "ERROR: " <<"select"<<query.lastError().text();
    }

    bool addPerson(const QString& firstname,const QString& lastname,const int age)
    {
       bool success = false;
       // you should check if args are ok first...
       QSqlQuery query;
       query.prepare("INSERT INTO student (firstname,lastname,age) VALUES (:firstname,:lastname,:age)");

       if(query.exec())
       {
           success = true;
            qDebug() << "Data Addded.";
       }
       else
       {
            qDebug() << "addPerson error:";
       }

       return success;
    }

    QString getPerson(){
        QSqlQuery query;
        query.prepare("SELECT * FROM hostel");

        if (query.exec())
        {
           if (query.next())
           {
              qDebug("There is some data here.");
           }

           else{
                qDebug("nodata");
           }
        }
        else{
             qDebug("error to execute");
            // qDebug(query.lastError().text());
        }
    }

};
