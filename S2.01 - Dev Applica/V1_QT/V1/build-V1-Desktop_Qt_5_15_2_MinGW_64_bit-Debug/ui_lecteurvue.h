/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *action_A_propos_de;
    QAction *actionQuitter;
    QAction *action_Charger_diaporama;
    QAction *action_Vitesse_de_d_filement;
    QAction *action_Enlever_diaporama;
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menutets;
    QMenu *menu_Param_tre;
    QMenu *menuAide;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(800, 550);
        action_A_propos_de = new QAction(LecteurVue);
        action_A_propos_de->setObjectName(QString::fromUtf8("action_A_propos_de"));
        actionQuitter = new QAction(LecteurVue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        action_Charger_diaporama = new QAction(LecteurVue);
        action_Charger_diaporama->setObjectName(QString::fromUtf8("action_Charger_diaporama"));
        action_Vitesse_de_d_filement = new QAction(LecteurVue);
        action_Vitesse_de_d_filement->setObjectName(QString::fromUtf8("action_Vitesse_de_d_filement"));
        action_Enlever_diaporama = new QAction(LecteurVue);
        action_Enlever_diaporama->setObjectName(QString::fromUtf8("action_Enlever_diaporama"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LecteurVue->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        LecteurVue->setStatusBar(statusbar);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menutets = new QMenu(menubar);
        menutets->setObjectName(QString::fromUtf8("menutets"));
        menu_Param_tre = new QMenu(menutets);
        menu_Param_tre->setObjectName(QString::fromUtf8("menu_Param_tre"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);

        menubar->addAction(menutets->menuAction());
        menubar->addAction(menuAide->menuAction());
        menutets->addAction(actionQuitter);
        menutets->addAction(menu_Param_tre->menuAction());
        menu_Param_tre->addAction(action_Charger_diaporama);
        menu_Param_tre->addAction(action_Vitesse_de_d_filement);
        menu_Param_tre->addAction(action_Enlever_diaporama);
        menuAide->addAction(action_A_propos_de);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        action_A_propos_de->setText(QCoreApplication::translate("LecteurVue", " A &propos de\342\200\246", nullptr));
        actionQuitter->setText(QCoreApplication::translate("LecteurVue", "&Quitter", nullptr));
        action_Charger_diaporama->setText(QCoreApplication::translate("LecteurVue", "&Charger diaporama", nullptr));
        action_Vitesse_de_d_filement->setText(QCoreApplication::translate("LecteurVue", "&Vitesse de d\303\251filement", nullptr));
        action_Enlever_diaporama->setText(QCoreApplication::translate("LecteurVue", "&Enlever diaporama", nullptr));
        menutets->setTitle(QCoreApplication::translate("LecteurVue", "&Fichier", nullptr));
        menu_Param_tre->setTitle(QCoreApplication::translate("LecteurVue", "&Param\303\250tre", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "&Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
