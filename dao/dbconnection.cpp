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

