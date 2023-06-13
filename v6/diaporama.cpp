#include "diaporama.h"

Diaporama::Diaporama(unsigned int pidDiaporama, string ptitreDiaporama, unsigned int pvitesseDefilement)
{
    _idDiaporama = pidDiaporama;
    _titreDiaporama = ptitreDiaporama;
    _vitesseDefilement = pvitesseDefilement;
}

unsigned int Diaporama::getIdDiaporama()
{
    return _idDiaporama;
}

string Diaporama::getTitreDiaporama()
{
    return _titreDiaporama;
}

unsigned int Diaporama::getVitesseDefilement()
{
    return _vitesseDefilement;
}

void Diaporama::chargerDiapo(Image* image)
{
   _diaporama.push_back(image);
}

void Diaporama::trier()
{
    // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    // A FAIRE

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

void Diaporama::enleverImage()
{
    _diaporama.pop_back();
}

unsigned int Diaporama::nbImages()
{
    return _diaporama.size();
}

Image *Diaporama::imageCourante(unsigned int posImageCourante)
{
    return _diaporama[posImageCourante];
}

void Diaporama::afficher()
{
    cout << "diaporama( idDiaporama:" << getIdDiaporama() << ", titreDiaporama:" << getTitreDiaporama() << ", vitesseDefilement:"
         << getVitesseDefilement() << endl;
}
