#include "pch.h"

using namespace NS_Composants;

void Client::setDateNaissance(String^ date_anniversaire)
{
    this->anniversaire = date_anniversaire;
}

String^ Client::getDateNaissance()
{
    return this->anniversaire;
}

void Client::setPremierAchat(String^ PremierAchat)
{
    this->PremierAchat = PremierAchat;
}

String^ Client::getPremierAchat()
{
    return this->PremierAchat;
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

void Client::setAdresse(String^ Adresse)
{
    if (Adresse != "")
        this->adresse = Adresse;
}

void Client::setcomplement(String^ Complement)
{
    // Vous pouvez ajouter des v�rifications suppl�mentaires si n�cessaire
    this->complement = Complement;
}

void Client::setCp(String^ Cp)
{
    if (Cp != "")
        this->cp = Cp;
}

String^ Client::getAdresse(void)
{
    return this->adresse;
}

String^ Client::getcomplement(void)
{
    return this->complement;
}

String^ Client::getCp(void)
{
    return this->cp;
}

void Client::setVille(String^ Ville)
{
    if (Ville != "")
        this->ville = Ville;
}

String^ Client::getVille(void)
{
    return this->ville;
}

String^ Client::Creer()
{
    // Mettez à jour votre requête d'insertion pour inclure les nouvelles colonnes
    String^ query = "INSERT INTO Client (Nom, Prenom, DateNaissance, PremierAchat, AdresseLivraison, AdresseFacturation) "
        "VALUES ('" + this->nom + "', '" + this->prenom + "', '" + this->anniversaire + "', '" + this->PremierAchat + "', '" + this->adresse_livraison + "', '" + this->adresse_facturation + "');";

    return query;
}

String^ Client::Modifier()
{
    // Mettez à jour votre requête de modification pour inclure les nouvelles colonnes
    String^ query = "UPDATE Client SET "
        "Nom = '" + this->nom + "', "
        "Prenom = '" + this->prenom + "', "
        "DateNaissance = '" + this->anniversaire + "', "
        "PremierAchat = '" + this->PremierAchat + "', "
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
