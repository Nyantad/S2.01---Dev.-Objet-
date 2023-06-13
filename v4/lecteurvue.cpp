#include "lecteurvue.h"
#include "apropos.h"
#include "ui_lecteurvue.h"

#include <QPixmap>
#include <QDebug>
#include <QInputDialog>

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    timer = new QTimer(this);
    monLecteur.changerDiaporama(0);
    ui->setupUi(this);

    // connexion des boutons avec les slots appropriés
    connect(ui->bLancer, SIGNAL(clicked()), this, SLOT(lancer()));
    connect(ui->bArreter, SIGNAL(clicked()), this, SLOT(arreter()));
    connect(ui->bPrecedent, SIGNAL(clicked()), this, SLOT(precedent()));
    connect(ui->bSuivant, SIGNAL(clicked()), this, SLOT(suivant()));
    connect(ui->bManuel, SIGNAL(clicked()), this, SLOT(modeManuel()));
    connect(ui->bAuto, SIGNAL(clicked()), this, SLOT(modeAuto()));

    // connexion des items avec les slots appropriés
    connect(ui->actionQuitter, SIGNAL(triggered()), QCoreApplication::instance(), SLOT(quit()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(charger()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(enlever()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(vitesse()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(aProposDe()));

    connect(timer, SIGNAL(timeout()), this, SLOT(suivant()));
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
    monLecteur.reculer();
    setImage();
}

// définition du slot pour passer à la diapositive suivante
void lecteurvue::suivant() {
    qDebug() << "suivant";
    monLecteur.avancer();
    setImage();
}

// définition du slot pour activer le mode manuel
void lecteurvue::modeManuel() {
    qDebug() << "mode manuel";
    ui->bSuivant->setDisabled(false);
    ui->bPrecedent->setDisabled(false);
    ui->bAuto->setDisabled(false);
    ui->bManuel->setDisabled(true);
    timer->stop();
}

// définition du slot pour activer le mode automatique
void lecteurvue::modeAuto() {
    qDebug() << "mode automatique";
    ui->bSuivant->setDisabled(true);
    ui->bPrecedent->setDisabled(true);
    ui->bAuto->setDisabled(true);
    ui->bManuel->setDisabled(false);
    monLecteur.setImageCourante(0);
    setImage();
    timer->start(s*1000);
}

// définition du slot pour démarrer la diapositive
void lecteurvue::quitter() {
    qDebug() << "quitter";
}

// définition du slot pour charger la diapositive
void lecteurvue::charger() {
    qDebug() << "charger";
    monLecteur.changerDiaporama(1);
    activerBouton(true);
    setImage();
}

// définition du slot pour enlever la diapositive
void lecteurvue::enlever() {
    qDebug() << "enlever";
    monLecteur.changerDiaporama(0);
    activerBouton(false);
    ui->lbImage->setText("Aucun diaporama chargé");
}

// définition du slot pour changer la vitesse
void lecteurvue::vitesse() {
    qDebug() << "vitesse";
    s = QInputDialog::getInt(this, "Vitesse de défilement", "Temps entre chaque images (en secondes)", s, 1, 60, 1);
    qDebug() << s;
}

// définition du slot pour afficher le dialog a propos de...
void lecteurvue::aProposDe() {
    qDebug() << "a propos de";
    aPropos aProposDlg(this);
    aProposDlg.exec();
}

// définition de la fonction pour mettre à jour l'image
void lecteurvue::setImage()
{
    QString lien = QString::fromStdString(monLecteur.imageCourante()->getChemin()); // transformation d'un string en QString
    QPixmap image(lien); // création d'une QPixmap à partir du lien de l'image
    ui->lbImage->setPixmap(image); // ajout de l'image au label
    status.setText(lien);
    //ui->statusbar->showMessage(lien);
    statusBar()->addWidget(&status);
}

// définition de la méthode pour activer ou désactiver les boutons de l'interface utilisateur
void lecteurvue::activerBouton(bool estActive)
{
    ui->bSuivant->setEnabled(estActive);
    ui->bPrecedent->setEnabled(estActive);
    ui->bAuto->setEnabled(estActive);
    ui->bManuel->setEnabled(estActive);
    ui->bLancer->setEnabled(estActive);
    ui->bArreter->setEnabled(estActive);
}
