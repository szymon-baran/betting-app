#ifndef DBCONNECTOR_H
#define DBCONNECTOR_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTextStream>
#include <QFile>
#include <QSettings>

class DbConnector : public QMainWindow
{
public:
    DbConnector();
    static void SetUpConnection();
    static QSqlQuery SelectQuery(QString query);
    static bool InsertQuery(QString query);
};

#endif // DBCONNECTOR_H