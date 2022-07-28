#ifndef DBCONNECTION_H
#define DBCONNECTION_H


#include<QSqlDatabase>
class DbConnection{
public:
    DbConnection(const QString & path);
    bool addPerson(const QString& name);

   private:
    QSqlDatabase m_db;
};


#endif // DBCONNECTION_H
