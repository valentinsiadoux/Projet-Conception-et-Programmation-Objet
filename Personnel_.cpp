#include "pch.h"
#include "Personnel_.h"

using namespace NS_Composants;

void Personnel_::setDateEmbauche(String^ date_embauche) {
    this->date_embauche = date_embauche;
}

String^ Personnel_::getDateEmbauche() {
    return date_embauche;
}

void Personnel_::setAdresse(String^ adresse) {
    this->adresse_personnel = adresse;
}

String^ Personnel_::getAdresse() {
    return adresse_personnel;
}

void Personnel_::setIdSupHierarchique(int id_sup_hierarchique) {
    this->id_sup_hierarchique = id_sup_hierarchique;
}

void Personnel_::setIdPersonnel(int id_Personnel) {
    this->id_personnel = id_Personnel;
}

int Personnel_::getIdPersonnel() {
    return this->id_personnel;
}

int Personnel_::getIdSupHierarchique() {
    return this->id_sup_hierarchique;
}



//A completer
String^ Personnel_::Creer() {
    // Supposons que les valeurs nécessaires sont déjà définies dans les membres de la classe.
    // Cette requête insère un nouveau personnel dans la table TB_PERSONNEL.

    return "INSERT INTO TB_PERSONNEL (nom, prenom, date_embauche, id_sup_hierarchique) VALUES ('" +
        this->getNom() + "', '" + this->getPrenom() + "', '" +
        this->getDateEmbauche() + "', " + this->getIdSupHierarchique() + ");";
}

String^ Personnel_::Modifier() {
    // Supposons que les valeurs nécessaires sont déjà définies dans les membres de la classe.
    // Cette requête met à jour les informations d'un personnel dans la table TB_PERSONNEL.

    return "UPDATE TB_PERSONNEL SET nom = '" + this->getNom() +
        "', prenom = '" + this->getPrenom() +
        "', date_embauche = '" + this->getDateEmbauche() +
        "', id_sup_hierarchique = " + this->getIdSupHierarchique() +
        " WHERE id_personnel = " + this->getIdPersonnel() + ";";
}

String^ Personnel_::Supprimer() {
    // Supposons que seul l'ID du personnel est nécessaire pour la suppression.
    // Cette requête supprime un personnel de la table TB_PERSONNEL.

    return "DELETE FROM TB_PERSONNEL WHERE id_personnel = " + this->getIdPersonnel() + ";";
}

String^ Personnel_::Afficher() {
    // Supposons que vous souhaitez simplement récupérer toutes les informations d'un personnel.
    // Cette requête sélectionne toutes les colonnes de la table TB_PERSONNEL pour un personnel donné.

    return "SELECT * FROM TB_PERSONNEL WHERE id_personnel = " + this->getIdPersonnel() + ";";
}

