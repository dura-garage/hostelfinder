#include"DbManager.h"
#include<QDebug>
#include<QSqlDatabase>
    DbManager::DbManager(const QString& path)
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

    bool DbManager::addPerson(const QString& name)
    {
       bool success = false;
       // you should check if args are ok first...
       QSqlQuery query();
       query.prepare("INSERT INTO people (name) VALUES (:name)");
       query.bindValue(":name", name);
       if(query.exec())
       {
           success = true;
       }
       else
       {
            qDebug() << "addPerson error:"
                     << query.lastError();
       }

       return success;
