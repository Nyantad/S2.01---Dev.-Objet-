#ifndef TABLE_H
#define TABLE_H

#include <QDialog>
#include <database.h>

namespace Ui {
class Table;
}

class Table : public QDialog
{
    Q_OBJECT

public:
    explicit Table(QWidget *parent = nullptr);
    ~Table();

private:
    Ui::Table *ui;
    DataBase *db;
};

#endif // TABLE_H
