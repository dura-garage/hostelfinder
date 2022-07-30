#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include "dao/dbconnection.h"
#include "testmodel.cpp"
#include "repositories/hostelrepository.h"
#include "models/hostel.h"

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
//  DbConnection db("C:/Users/hp/OneDrive/Documents/Learn/learn-cpp/qt-projects/HostelFinder/database/db.sqlite3");

//  QSqlQuery query;
//  query.prepare(("INSERT INTO hostel(id,name) VALUES(6,'LastHostel')"));
//   query.exec();
//   query.prepare("SELECT id,name from hostel where id = 6");
//   query.exec();

////   for(int i=0;i<5;i++){
////       query.next();
////       qWarning()<<"Got data"<<query.value(1).toString();
////   }

//   query.first();
//   qDebug()<<"Got: "<<query.value(0).toString();
    HostelRepository hr1;
    Hostel h1("Dura Hostel","",BOYS,0,0.0,false);
    Hostel h2;
    hr1.addHostel(h1);
    Hostel h=hr1.getHostelById(1);
    qDebug()<<"Name: "<<QString::fromStdString(h.getName());
}

