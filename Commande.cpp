// Commande.cpp

#include "pch.h"
#include "Commande.h"

namespace NS_Composants {
    Commande::Commande() {
        // Initialisez vos membres ici si nécessaire
    }

    Commande::Commande(String^ ref_commande, float total_ttc, DateTime^ date_livraison,
        DateTime^ date_emission, DateTime^ date_paiement, String^ moyen_paiement) {
        this->ref_commande = ref_commande;
        this->total_ttc = total_ttc;
        this->date_livraison = date_livraison;
        this->date_emission = date_emission;
        this->date_paiement = date_paiement;
        this->moyen_paiement = moyen_paiement;
    }

    void Commande::setDateLivraison(DateTime^ date_livraison) {
        this->date_livraison = date_livraison;
    }

    void Commande::setDateEmission(DateTime^ date_emission) {
        this->date_emission = date_emission;
    }

    void Commande::setRefCommande(String^ ref_commande) {
        this->ref_commande = ref_commande;
    }

    void Commande::setTotalTTC(float total_ttc) {
        this->total_ttc = total_ttc;
    }

    void Commande::setIdClient(int id_client) {
        this->id_client = id_client;
    }

    void Commande::setIdPersonnel(int id_personnel) {
        this->id_personnel = id_personnel;
    }

    void Commande::setIdAdresseLivraison(int id_adresse_livraison) {
        this->id_adresse_livraison = id_adresse_livraison;
    }

    void Commande::setIdAdresseFacturation(int id_adresse_facturation) {
        this->id_adresse_facturation = id_adresse_facturation;
    }

    void Commande::setIdCommande(int id_commande) {
        this->id_commande = id_commande;
    }

    int Commande::getIdCommande() {
        return id_commande;
    }

    void Commande::setMoyenPaiement(String^ moyen_paiement) {
        this->moyen_paiement = moyen_paiement;
    }

    String^ Commande::getReference() {
        return ref_commande;
    }

    DateTime^ Commande::getDateLivraison() {
        return date_livraison;
    }

    DateTime^ Commande::getDateEmission() {
        return date_emission;
    }

    DateTime^ Commande::getDatePaiement() {
        return date_paiement;
    }

    String^ Commande::getMoyenPaiement() {
        return moyen_paiement;
    }

    float Commande::getTotalTTC() {
        return total_ttc;
    }

    int Commande::getIdClient() {
        return id_client;
    }

    int Commande::getIdPersonnel() {
        return id_personnel;
    }

    int Commande::getIdAdresseLivraison() {
        return id_adresse_livraison;
    }

    int Commande::getIdAdresseFacturation() {
        return id_adresse_facturation;
    }

    String^ Commande::Creer() {
        // Ajoutez votre logique pour créer une commande dans la base de données ici
        return "A";
    }

    String^ Commande::Modifier() {
        // Ajoutez votre logique pour modifier une commande dans la base de données ici
        return "A";
    }

    String^ Commande::Supprimer() {
        // Ajoutez votre logique pour supprimer une commande de la base de données ici
        return "A";
    }

    String^ Commande::Afficher() {
        // Ajoutez votre logique pour afficher une commande ici
        return "A";
    }
}
