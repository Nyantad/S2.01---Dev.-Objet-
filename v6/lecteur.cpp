#include "lecteur.h"
#include "database.h"

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
        chargerDiaporama(pNumDiaporama); // charge le diaporama courant
    }
}

// Charge les images du diaporama courant
void Lecteur::chargerDiaporama(unsigned int pNumDiaporama)
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    DataBase *db;
    db = new DataBase;
    db->openDataBase();

    QSqlQuery query;
    Image* imageACharger;

    QString insertions="SELECT DD.rang, F.nomFamille, D.titrePhoto, D.uriPhoto FROM Diapos D JOIN DiaposDansDiaporama DD ON D.idphoto = DD.idDiapo JOIN Diaporamas Dia ON Dia.idDiaporama = DD.idDiaporama JOIN Familles F ON F.idFamille = D.idFam WHERE Dia.idDiaporama = ?";
    query.prepare(insertions);
    query.addBindValue(pNumDiaporama);

    if (query.exec()) {
               while (query.next()) {
                   //ui->tableWidget->setItem(row,0, new QTableWidgetItem(query.value(1).toString()));
                   imageACharger = new Image(query.value(0).toInt(),
                                             query.value(1).toString().toStdString(),
                                             query.value(2).toString().toStdString(),
                                             ".." + query.value(3).toString().toStdString());
                   _diaporama._diaporama.push_back(imageACharger);
               }
       } else {
               qDebug() << "Lecteur.cpp" << query.lastError().text();
       }
    db->closeDataBase();
    _diaporama.trier();
	 
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
            _diaporama.enleverImage(); /* Removes the last element in the vector,
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
            //_diaporama[_posImageCourante]->afficher();
        } else {
            cout << "Diaporama vide";
        }
    }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.nbImages();
}

// Retourne l'image courante du diaporama
Image *Lecteur::imageCourante()
{
    if (numDiaporamaCourant() == 0 || nbImages() == 0) {
        return nullptr;
    } else {
        return _diaporama.imageCourante(_posImageCourante);
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
