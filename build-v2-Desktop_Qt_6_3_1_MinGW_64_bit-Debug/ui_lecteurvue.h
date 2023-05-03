/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lecteurvue
{
public:
    QAction *actionVitesse_de_defilement;
    QAction *actionEnlever_diaporama;
    QAction *actionCharger_diaporama;
    QAction *actionA_propos_de;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbImage;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *bLancer;
    QPushButton *bArreter;
    QSpacerItem *horizontalSpacer;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bManuel;
    QPushButton *bAuto;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QMenu *menu_Param_tre;
    QMenu *menu_Aide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lecteurvue)
    {
        if (lecteurvue->objectName().isEmpty())
            lecteurvue->setObjectName(QString::fromUtf8("lecteurvue"));
        lecteurvue->resize(800, 600);
        actionVitesse_de_defilement = new QAction(lecteurvue);
        actionVitesse_de_defilement->setObjectName(QString::fromUtf8("actionVitesse_de_defilement"));
        actionEnlever_diaporama = new QAction(lecteurvue);
        actionEnlever_diaporama->setObjectName(QString::fromUtf8("actionEnlever_diaporama"));
        actionCharger_diaporama = new QAction(lecteurvue);
        actionCharger_diaporama->setObjectName(QString::fromUtf8("actionCharger_diaporama"));
        actionA_propos_de = new QAction(lecteurvue);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        actionQuitter = new QAction(lecteurvue);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(lecteurvue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lbImage = new QLabel(centralwidget);
        lbImage->setObjectName(QString::fromUtf8("lbImage"));

        horizontalLayout_3->addWidget(lbImage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bLancer = new QPushButton(centralwidget);
        bLancer->setObjectName(QString::fromUtf8("bLancer"));

        horizontalLayout->addWidget(bLancer);

        bArreter = new QPushButton(centralwidget);
        bArreter->setObjectName(QString::fromUtf8("bArreter"));

        horizontalLayout->addWidget(bArreter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));

        horizontalLayout->addWidget(bPrecedent);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));

        horizontalLayout->addWidget(bSuivant);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bManuel = new QPushButton(centralwidget);
        bManuel->setObjectName(QString::fromUtf8("bManuel"));

        horizontalLayout->addWidget(bManuel);

        bAuto = new QPushButton(centralwidget);
        bAuto->setObjectName(QString::fromUtf8("bAuto"));

        horizontalLayout->addWidget(bAuto);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        lecteurvue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lecteurvue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menu_Param_tre = new QMenu(menubar);
        menu_Param_tre->setObjectName(QString::fromUtf8("menu_Param_tre"));
        menu_Aide = new QMenu(menubar);
        menu_Aide->setObjectName(QString::fromUtf8("menu_Aide"));
        lecteurvue->setMenuBar(menubar);
        statusbar = new QStatusBar(lecteurvue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lecteurvue->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menubar->addAction(menu_Param_tre->menuAction());
        menubar->addAction(menu_Aide->menuAction());
        menu_Fichier->addAction(actionQuitter);
        menu_Param_tre->addAction(actionCharger_diaporama);
        menu_Param_tre->addAction(actionEnlever_diaporama);
        menu_Param_tre->addAction(actionVitesse_de_defilement);
        menu_Aide->addAction(actionA_propos_de);

        retranslateUi(lecteurvue);

        QMetaObject::connectSlotsByName(lecteurvue);
    } // setupUi

    void retranslateUi(QMainWindow *lecteurvue)
    {
        lecteurvue->setWindowTitle(QCoreApplication::translate("lecteurvue", "lecteurvue", nullptr));
        actionVitesse_de_defilement->setText(QCoreApplication::translate("lecteurvue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_diaporama->setText(QCoreApplication::translate("lecteurvue", "Enlever diaporama", nullptr));
        actionCharger_diaporama->setText(QCoreApplication::translate("lecteurvue", "Charger diaporama", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("lecteurvue", "A propos de...", nullptr));
        actionQuitter->setText(QCoreApplication::translate("lecteurvue", "Quitter", nullptr));
        lbImage->setText(QCoreApplication::translate("lecteurvue", "TextLabel", nullptr));
        bLancer->setText(QCoreApplication::translate("lecteurvue", "Lancer", nullptr));
        bArreter->setText(QCoreApplication::translate("lecteurvue", "Arreter", nullptr));
        bPrecedent->setText(QCoreApplication::translate("lecteurvue", "<<", nullptr));
        bSuivant->setText(QCoreApplication::translate("lecteurvue", ">>", nullptr));
        bManuel->setText(QCoreApplication::translate("lecteurvue", "Manuel", nullptr));
        bAuto->setText(QCoreApplication::translate("lecteurvue", "Auto", nullptr));
        menu_Fichier->setTitle(QCoreApplication::translate("lecteurvue", "&Fichier", nullptr));
        menu_Param_tre->setTitle(QCoreApplication::translate("lecteurvue", "&Param\303\250tre", nullptr));
        menu_Aide->setTitle(QCoreApplication::translate("lecteurvue", "&Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lecteurvue: public Ui_lecteurvue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
