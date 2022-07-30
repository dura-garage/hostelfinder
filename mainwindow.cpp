#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include "dao/dbconnection.h"
#include "testmodel.cpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  DbConnection db("C:/Users/hp/OneDrive/Documents/Learn/learn-cpp/qt-projects/HostelFinder/database/db.sqlite3");

  QSqlQuery query;
  query.prepare(("INSERT INTO hostel(id,name) VALUES(6,'LastHostel')"));
   query.exec();
   query.prepare("SELECT id,name from hostel where id = 6");
   query.exec();

//   for(int i=0;i<5;i++){
//       query.next();
//       qWarning()<<"Got data"<<query.value(1).toString();
//   }

   query.first();
   qDebug()<<"Got: "<<query.value(1).toString();
}

