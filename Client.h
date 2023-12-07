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
		String^ PremierAchat;
		String^ adresse;
		String^ complement;
		String^ cp;
		String^ ville;
	public:
		void setDateNaissance(String^ date_anniversaire);
		String^ getDateNaissance();
		String^ getPremierAchat();
		void setPremierAchat(String^ PremierAchat);
		void setAdresseLivraison(String^ adresse_livraison);
		void setAdresseFacturation(String^ adresse_facturation);

		String^ getAdresseLivraison();
		String^ getAdresseFacturation();
		int getIdClient();
		void setIdClient(int id_client);

		void setAdresse(String^);
		void setcomplement(String^);
		void setCp(String^);
		void setVille(String^);
		String^ getVille(void);


		String^ getAdresse(void);
		String^ getcomplement(void);
		String^ getCp(void);

		//Pour les requêtes :
		virtual String^ Creer() override;
		virtual String^ Modifier() override;
		virtual String^ Supprimer() override;
		virtual String^ Afficher() override;


	};
};