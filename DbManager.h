#ifndef DBMANAGER_H
#define DBMANAGER_H
#include<QSqlDatabase>
class DbManager{
public:
    DbManager(const QString & path);
    bool addPerson(const QString& name);

   private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
