#include "pch.h"
#include "Personne.h"

// Implémentation du constructeur par défaut
Personne::Personne()
{
    // Initialisez les membres par défaut si nécessaire
    id = 0;
    nom = "Placeholder";
    prenom = "Placeholder";
}

// Implémentation du constructeur avec paramètres
Personne::Personne(int id, String^ nom, String^ prenom)
{
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
}

// Implémentation des méthodes getteur et setteur
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
