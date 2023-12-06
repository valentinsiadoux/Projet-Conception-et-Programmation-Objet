#pragma once
#include "pch.h"
#include "Personne.h"
#include "Adresse.h" 

namespace NS_Composants {
	ref class Personnel_ : public Personne {
	private:
		int id_personnel;
		String^ adresse_personnel;  
		String^ date_embauche;
		Personnel_^ sup_hier;
		int id_sup_hierarchique; 

	public:
		void setIdSupHierarchique(int);
		void setIdPersonnel(int);
		int getIdPersonnel();
		void setDateEmbauche(String^);
		String^ getDateEmbauche();
		void setAdresse(String^ adresse);
		String^ getAdresse();
		int getIdSupHierarchique();

		virtual String^ Creer() override;
		virtual String^ Modifier() override;
		virtual String^ Supprimer() override;
		virtual String^ Afficher() override;
	};
};
