#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class lecteurvue; }
QT_END_NAMESPACE

class lecteurvue : public QMainWindow
{
    Q_OBJECT

public:
    lecteurvue(QWidget *parent = nullptr); // Constructeur pour la classe lecteurvue. Il accepte un QWidget parent optionnel
    ~lecteurvue(); // Destructeur pour la classe lecteurvue

// déclaration des slots public
public slots:
    void lancer(); // Slot pour démarrer une certaine fonctionnalité
    void arreter(); // Slot pour arrêter une certaine fonctionnalité
    void precedent(); // Slot pour passer à la fonctionnalité précédente
    void suivant(); // Slot pour passer à la fonctionnalité suivante
    void modeManuel(); // Slot pour changer en mode manuel
    void modeAuto(); // Slot pour changer en mode automatique
    void quitter(); // Slot pour quitter l'application
    void charger(); // Slot pour charger une nouvelle fonctionnalité ou un nouvel élément
    void enlever(); // Slot pour enlever une fonctionnalité ou un élément
    void vitesse(); // Slot pour changer la vitesse d'une certaine fonctionnalité
    void aPropos(); // Slot pour afficher des informations sur l'application

private:
    Ui::lecteurvue *ui; // Déclare un pointeur vers une instance de l'interface utilisateur pour la classe lecteurvue
};
#endif // LECTEURVUE_H
