#include "table.h"
#include "ui_table.h"

#include <QSqlQuery>

Table::Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
    //Pour stretch le header pour prendre toute la largeur
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    db = new DataBase;
    db->openDataBase();

    QSqlQuery query;
    if (query.exec("SELECT * FROM `Diaporamas` ORDER BY `Diaporamas`.`titre Diaporama` ASC")) {
               int row = 0;
               while (query.next()) {
                   ui->tableWidget->insertRow(row);
                   ui->tableWidget->setItem(row,0, new QTableWidgetItem(query.value(1).toString()));
                   ui->tableWidget->setItem(row,1, new QTableWidgetItem(query.value(2).toString()));
                   row++;
               }
       } else {
               qDebug() << "Erreur lors de l'exécution de la requête SQL.";
       }
}

Table::~Table()
{
    delete ui;
}
