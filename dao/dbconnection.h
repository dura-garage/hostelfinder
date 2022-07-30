#ifndef DBCONNECTION_H
#define DBCONNECTION_H


#include<QSqlDatabase>
class DbConnection{
public:
    DbConnection(const QString & path);

   private:
    QSqlDatabase m_db;
};


#endif // DBCONNECTION_H
