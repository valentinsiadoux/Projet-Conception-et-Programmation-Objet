// Commande.h

#pragma once

#include "pch.h"

namespace NS_Composants {
    public ref class Commande {
    private:
        int id_commande, id_client, id_personnel, id_adresse_livraison, id_adresse_facturation;
        String^ ref_commande;
        DateTime^ date_livraison;
        DateTime^ date_emission;
        DateTime^ date_paiement;
        String^ moyen_paiement;
        float total_ttc;

    public:
        // Constructeurs
        Commande();
        Commande(String^ ref_commande, float total_ttc, DateTime^ date_livraison,
            DateTime^ date_emission, DateTime^ date_paiement, String^ moyen_paiement);

        // Setters pour les ID
        void setIdClient(int);
        void setIdPersonnel(int);
        void setIdAdresseLivraison(int);
        void setIdAdresseFacturation(int);
        void setIdCommande(int);

        // Getters pour les ID
        int getIdClient();
        int getIdPersonnel();
        int getIdAdresseLivraison();
        int getIdAdresseFacturation();
        int getIdCommande();

        // Paiement
        void setMoyenPaiement(String^);
        float getTotalTTC();

        // Suivi de commande
        void setRefCommande(String^);
        void setDateLivraison(DateTime^);
        void setDateEmission(DateTime^);
        void setTotalTTC(float);
        String^ getReference();
        DateTime^ getDateLivraison();
        DateTime^ getDateEmission();
        DateTime^ getDatePaiement();
        String^ getMoyenPaiement();

        // Pour les requêtes
        String^ Creer();
        String^ Modifier();
        String^ Supprimer();
        String^ Afficher();
    };
}
