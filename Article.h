#include "pch.h"

namespace NS_Composants {
	ref class Article
	{
	private:

		int id_article, stock, reappro;
		String^ nature;
		String^ nom_article;
		String^ couleur_article;
		float promo, prix_ht, taux_tva;

	public:
		//setter
		void setNature(String^);
		void setNom(String^);
		void setStock(int);
		void setRemise(float);
		void setPrixHT(float);
		void setReappro(int);
		void setTauxTVA(float);
		void setCouleur(String^);
		void setIdArticle(int ref_article);

		//getter
		String^ getNom();
		int getStock();
		float getRemise();
		float getPrixHT();
		int getQuantiteReapprovisionnement();
		float getTauxTVA();
		String^ getCouleur();
		int getIdArticle();

		//Les requêtes
		String^ Creer();
		String^ Modifier();
		String^ Supprimer();
		String^ Afficher();
	};
};
