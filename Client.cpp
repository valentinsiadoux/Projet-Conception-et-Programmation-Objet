#include "pch.h"
#include "Adresse.h"  

using namespace NS_Composants;

void Client::setDateNaissance(String^ date_anniversaire)
{
    this->anniversaire = date_anniversaire;
}

String^ Client::getDateNaissance()
{
    return this->anniversaire;
}

void Client::setAdresseLivraison(String^ adresse_livraison)
{
    this->adresse_livraison = adresse_livraison;
}

String^ Client::getAdresseLivraison()
{
    return this->adresse_livraison;
}

void Client::setAdresseFacturation(String^ adresse_facturation)
{
    this->adresse_facturation = adresse_facturation;
}

String^ Client::getAdresseFacturation()
{
    return this->adresse_facturation;
}

int Client::getIdClient()
{
    return this->id_client;
}

void Client::setIdClient(int id_client)
{
    this->id_client = id_client;
}

String^ Client::Creer()
{
    // La requête d'insertion générique
    String^ query = "INSERT INTO Client (Nom, Prenom, Anniversaire, AdresseLivraison, AdresseFacturation) "
        "VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->anniversaire + "', '" + this->adresse_livraison + "', '" + this->adresse_facturation + "');";

    return query;
}

String^ Client::Modifier()
{
    // La requête de modification générique
    String^ query = "UPDATE Client SET "
        "Nom = '" + this->nom + "', "
        "Prenom = '" + this->prenom + "', "
        "Anniversaire = '" + this->anniversaire + "', "
        "AdresseLivraison = '" + this->adresse_livraison + "', "
        "AdresseFacturation = '" + this->adresse_facturation + "' "
        "WHERE IDClient = " + this->id_client + ";";

    return query;
}

String^ Client::Supprimer()
{
    // La requête de suppression générique
    return "DELETE FROM Client WHERE IDClient = " + this->id_client + ";";

   
}

String^ Client::Afficher()
{
    return  "SELECT * FROM Client;";
}
