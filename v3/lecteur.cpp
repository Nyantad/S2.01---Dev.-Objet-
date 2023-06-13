#include "lecteur.h"

// Constructeur de la classe Lecteur, initialise le numéro du diaporama courant à 0 (vide)
Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

// Incrémente la position de l'image courante, modulo le nombre d'images
void Lecteur::avancer()
{
    _posImageCourante = (_posImageCourante + 1) % nbImages();
}

// Décrémente la position de l'image courante, modulo le nombre d'images
void Lecteur::reculer()
{
    _posImageCourante = (_posImageCourante - 1) % nbImages();
}

// Change le diaporama courant en fonction du numéro de diaporama passé en paramètre
void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }
}

// Charge les images du diaporama courant dans le vecteur _diaporama
void Lecteur::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "F:/Documents/S2.01/S2.01-Dev.Objet/cartesDisney/Disney_2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "F:/Documents/S2.01/S2.01-Dev.Objet/cartesDisney/Disney_4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "F:/Documents/S2.01/S2.01-Dev.Objet/cartesDisney/Disney_1.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", "F:/Documents/S2.01/S2.01-Dev.Objet/cartesDisney/Disney_3.gif");
    _diaporama.push_back(imageACharger);

    // tri à bulles pour trier les images
    int n = _diaporama.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (_diaporama[j]->getRang() > _diaporama[j+1]->getRang()) {
                    // Échange de deux pointeurs d'images
                    Image* temp = _diaporama[j];
                    _diaporama[j] = _diaporama[j+1];
                    _diaporama[j+1] = temp;
                }
            }
        }
	 
     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama" << endl;

}

// Vide le vecteur _diaporama et supprime les objets Image
void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;
}

// Affiche les informations sur le diaporama courant
void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() == 0 ) {
        cout << "Diaporama vide" << endl;
    } else {
        if (nbImages() > 0) {
            _diaporama[_posImageCourante]->afficher();
        } else {
            cout << "Diaporama vide";
        }
    }
}

// Retourne le nombre d'images dans le diaporama courant
unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

// Retourne l'image courante du diaporama
Image *Lecteur::imageCourante()
{
    if (numDiaporamaCourant() == 0 || nbImages() == 0) {
        return nullptr;
    } else {
        return _diaporama[_posImageCourante];
    }
}

// Retourne le numéro du diaporama courant
unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}

// Définit l'image courante en fonction de l'indice passé en paramètre
void Lecteur::setImageCourante(int image)
{
    _posImageCourante = image % nbImages();
}
