
#include "lecteurvue.h"
#include "ui_lecteurvue.h"

#include <QtCore>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ui::LecteurVue ui;
    LecteurVue w;

    w.show();
    return a.exec();
}
