#include "idatabase.h"

void IDatabase::ininDatabase()
{
    database=QSqlDatabase::addDatabase("QSQLITE");
    QString aFile="../../../Lab4.ab";
    database.setDatabaseName(aFile);

    if(!database.open()){
        qDebug() <<"failed to open database";
    }else
        qDebug() <<"open database is ok";
}

IDatabase::IDatabase(QObject *parent) : QObject{parent}
{
    ininDatabase();
}
