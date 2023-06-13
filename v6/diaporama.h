#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <iostream>
#include "image.h"
#include <vector>
using namespace std;

class Diaporama
{
public:
    Diaporama(unsigned int pidDiaporama = 0, string ptitreDiaporama = "", unsigned int pvitesseDefilement = 0);
    unsigned int getIdDiaporama();
    string getTitreDiaporama();
    unsigned int getVitesseDefilement();
    void chargerDiapo(Image* image);
    void trier();
    void enleverImage();
    unsigned int nbImages();
    Image* imageCourante(unsigned int posImageCourante);
    void afficher();
    vector<Image*> _diaporama;

private:
    unsigned int _idDiaporama;
    string _titreDiaporama;
    unsigned int _vitesseDefilement;
};

#endif // DIAPORAMA_H
