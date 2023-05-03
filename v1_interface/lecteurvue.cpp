#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QPixmap>
#include <QDebug>
lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    QString lien = "F:/Documents/S2.01/v1/cartesDisney/Disney_0.gif"; // chemin absolu de l'image
    QPixmap carte(lien); // ouverture de l'image en QPixmap
    ui->setupUi(this);
    ui->lbImage->setPixmap(carte); // ajout de l'image au label
    ui->statusbar->showMessage(lien); // affichage du chemin dans la statusbar

    // connexion des boutons avec les slots appropriés
    connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->bManuel, SIGNAL(clicked()), this, SLOT(modeManuel()));
    connect(ui->bAuto, SIGNAL(clicked()), this, SLOT(modeAuto()));

    // connexion des items avec les slots appropriés
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(charger()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(enlever()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(vitesse()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(aPropos()));
}

lecteurvue::~lecteurvue()
{
    delete ui;
}

// définition du slot pour démarrer la diapositive
void lecteurvue::lancer() {
    qDebug() << "lancer";
}

// définition du slot pour arrêter la diapositive
void lecteurvue::arreter() {
    qDebug() << "arreter";
}

// définition du slot pour revenir à la diapositive précédente
void lecteurvue::precedent() {
    qDebug() << "precedent";
}

// définition du slot pour passer à la diapositive suivante
void lecteurvue::suivant() {
    qDebug() << "suivant";
}

// définition du slot pour activer le mode manuel
void lecteurvue::modeManuel() {
    qDebug() << "mode manuel";
}

// définition du slot pour activer le mode automatique
void lecteurvue::modeAuto() {
    qDebug() << "mode automatique";
}

// définition du slot pour démarrer la diapositive
void lecteurvue::quitter() {
    qDebug() << "quitter";
}

// définition du slot pour charger la diapositive
void lecteurvue::charger() {
    qDebug() << "charger";
}

// définition du slot pour enlever la diapositive
void lecteurvue::enlever() {
    qDebug() << "enlever";
}

// définition du slot pour changer la vitesse
void lecteurvue::vitesse() {
    qDebug() << "vitesse";
}

// définition du slot pour afficher le dialog a propos de...
void lecteurvue::aPropos() {
    qDebug() << "a propos de";
}

