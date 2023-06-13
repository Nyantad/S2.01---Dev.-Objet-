#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <iostream>
#include "image.h"
#include <vector>
using namespace std;

class Diaporama
{
public:  // Déclare les méthodes et les variables publiques de la classe Diaporama
    // Déclaration du constructeur de la classe Diaporama avec des valeurs par défaut pour ses paramètres
    Diaporama(unsigned int pidDiaporama = 0, string ptitreDiaporama = "", unsigned int pvitesseDefilement = 0);

    // Déclaration des getters
    unsigned int getIdDiaporama();         // Récupère l'identifiant du diaporama
    string getTitreDiaporama();            // Récupère le titre du diaporama
    unsigned int getVitesseDefilement();   // Récupère la vitesse de défilement du diaporama

    // Déclaration des méthodes
    void chargerDiapo(Image* image);       // Charge une image dans le diaporama
    void trier();                          // Trie les images du diaporama
    void enleverImage();                   // Enlève une image du diaporama
    unsigned int nbImages();               // Retourne le nombre d'images dans le diaporama
    Image* imageCourante(unsigned int posImageCourante); // Récupère l'image courante du diaporama
    void afficher();                       // Affiche le diaporama

    vector<Image*> _diaporama;   // Déclare un vecteur qui contient des pointeurs vers des objets Image

private:   // Déclare les variables privées de la classe Diaporama
    unsigned int _idDiaporama;          // Stocke l'identifiant du diaporama
    string _titreDiaporama;             // Stocke le titre du diaporama
    unsigned int _vitesseDefilement;    // Stocke la vitesse de défilement du diaporama
};

#endif // DIAPORAMA_H
