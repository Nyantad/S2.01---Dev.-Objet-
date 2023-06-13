#include "image.h"
// Constructeur de la classe Image initialisant tous les attributs
Image::Image(unsigned int pRang, string pCategorie, string pTitre, string pChemin)
{
    _rang = pRang;  // Initialise le rang de l'image
    _categorie = pCategorie;  // Initialise la catégorie de l'image
    _titre = pTitre;  // Initialise le titre de l'image
    _chemin = pChemin;  // Initialise le chemin de l'image
}
// Accesseur pour obtenir le rang de l'image
unsigned int Image::getRang()
{
    return _rang;
}
// Accesseur pour obtenir la catégorie de l'image
string Image::getCategorie()
{
    return _categorie;
}
// Accesseur pour obtenir le titre de l'image
string Image::getTitre()
{
    return _titre;
}
// Accesseur pour obtenir le chemin de l'image
string Image::getChemin()
{
    return _chemin;
}
// Méthode pour afficher les détails de l'image
void Image::afficher()
{
     // Affiche les informations de l'image, y compris le rang, le titre, la catégorie et le chemin
    cout << "image( rang:" << getRang() << ", titre:" << getTitre() << ", categorie:"
         << getCategorie() << ", chemin:"<< getChemin() << ")" << endl;
}
