#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

#include "lecteur.h"
#include "apropos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class lecteurvue; }
QT_END_NAMESPACE

class lecteurvue : public QMainWindow
{
    Q_OBJECT

public:
    lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

// déclaration des slots public
public slots:
    void lancer();
    void arreter();
    void precedent();
    void suivant();
    void modeManuel();
    void modeAuto();
    void quitter();
    void charger();
    void enlever();
    void vitesse();
    void aProposDe();

private:
    Ui::lecteurvue *ui;
    aPropos *aProposDlg;
    Lecteur monLecteur;
};
#endif // LECTEURVUE_H
