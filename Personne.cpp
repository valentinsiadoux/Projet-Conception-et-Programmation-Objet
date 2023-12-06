#include "pch.h"
#include "Personne.h"

// Impl�mentation du constructeur par d�faut
Personne::Personne()
{
    // Initialisez les membres par d�faut si n�cessaire
    id = 0;
    nom = "Placeholder";
    prenom = "Placeholder";
}

// Impl�mentation du constructeur avec param�tres
Personne::Personne(int id, String^ nom, String^ prenom)
{
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
}

// Impl�mentation des m�thodes getteur et setteur
void Personne::setNom(String^ Nom)
{
    this->nom = Nom;
}

void Personne::setPrenom(String^ Prenom)
{
    this->prenom = Prenom;
}

int Personne::getId()
{
    return id;
}

String^ Personne::getNom()
{
    return nom;
}

String^ Personne::getPrenom()
{
    return prenom;
}
