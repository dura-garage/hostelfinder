#include "dao/dbconnection.h"
#include<QDebug>
#include<QSqlDatabase>
#include<QSqlQuery>

    DbConnection::DbConnection(const QString& path)
    {
       m_db = QSqlDatabase::addDatabase("QSQLITE");
       m_db.setDatabaseName(path);

       if (!m_db.open())
       {
          qDebug() << "Error: connection with database failed";
       }
       else
       {
          qDebug() << "Database: connection ok";
       }
}

    bool DbConnection::addPerson(const QString& name)
    {
       bool success = false;
       // you should check if args are ok first...
       QSqlQuery query;
       query.prepare("INSERT INTO people (name) VALUES (:name)");
       query.bindValue(":name", name);
       if(query.exec())
       {
           success = true;
       }
       else
       {
            qDebug() << "addPerson error:";
       }

       return success;
}
