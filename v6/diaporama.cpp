#include "diaporama.h"  // Inclut le fichier d'en-tête pour la classe Diaporama

// Le constructeur de la classe Diaporama initialise les attributs _idDiaporama, _titreDiaporama et _vitesseDefilement
Diaporama::Diaporama(unsigned int pidDiaporama, string ptitreDiaporama, unsigned int pvitesseDefilement)
{
    _idDiaporama = pidDiaporama;
    _titreDiaporama = ptitreDiaporama;
    _vitesseDefilement = pvitesseDefilement;
}

// Retourne l'identifiant du diaporama
unsigned int Diaporama::getIdDiaporama()
{
    return _idDiaporama;
}

// Retourne le titre du diaporama
string Diaporama::getTitreDiaporama()
{
    return _titreDiaporama;
}

// Retourne la vitesse de défilement du diaporama
unsigned int Diaporama::getVitesseDefilement()
{
    return _vitesseDefilement;
}

// Ajoute une image à la fin du diaporama
void Diaporama::chargerDiapo(Image* image)
{
    _diaporama.push_back(image);
}

// Trie les images dans l'ordre croissant du rang
void Diaporama::trier()
{
    int n = _diaporama.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang()) {
                Image* temp = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = temp;
            }
        }
    }
}

// Enlève la dernière image du diaporama
void Diaporama::enleverImage()
{
    _diaporama.pop_back();
}

// Retourne le nombre d'images dans le diaporama
unsigned int Diaporama::nbImages()
{
    return _diaporama.size();
}

// Retourne un pointeur vers l'image à la position spécifiée
Image* Diaporama::imageCourante(unsigned int posImageCourante)
{
    return _diaporama[posImageCourante];
}

// Affiche les informations sur le diaporama
void Diaporama::afficher()
{
    cout << "diaporama( idDiaporama:" << getIdDiaporama() << ", titreDiaporama:" << getTitreDiaporama() << ", vitesseDefilement:"
         << getVitesseDefilement() << endl;
}
