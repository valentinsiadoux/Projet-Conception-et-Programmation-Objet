#pragma once
#include "Personne.h"
#include "Adresse.h"
#include "pch.h"

namespace NS_Composants {
	ref class Client : public Personne {
	private:
		int id_client;
		String^ adresse_livraison;
		String^ adresse_facturation;
		String^ anniversaire;
	public:
		void setDateNaissance(String^ date_anniversaire);
		String^ getDateNaissance();
		void setAdresseLivraison(String^ adresse_livraison);
		void setAdresseFacturation(String^ adresse_facturation);

		String^ getAdresseLivraison();
		String^ getAdresseFacturation();
		int getIdClient();
		void setIdClient(int id_client);

		//Pour les requêtes :
		virtual String^ Creer() override;
		virtual String^ Modifier() override;
		virtual String^ Supprimer() override;
		virtual String^ Afficher() override;


	};
};