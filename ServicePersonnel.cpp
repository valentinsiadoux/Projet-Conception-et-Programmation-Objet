/*#include "pch.h"

namespace NVC
{
	ServicePersonnel::ServicePersonnel(void)
	{
		this->cad = gcnew NS_Composants::CLCAD();
		this->Personnel = gcnew NS_Composants::Personnel_();
		this->adresse = gcnew NS_Composants::Adresse();
	}

	DataSet^ ServicePersonnel::listePersonnel(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->Personnel->Afficher(), dataTableName);
		return this->ds;
	}

	DataSet^ ServicePersonnel::adressesPersonnel(int id_Personnel, String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->adresse->setIdPersonne(id_Personnel);
		this->ds = this->cad->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
		return this->ds;
	}

	void ServicePersonnel::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses, String^ dateEmbauche, int idSupHierarchique)
	{
		int id;
		int i;
		this->Personnel->setNom(nom);
		this->Personnel->setPrenom(prenom);
		this->Personnel->setDateEmbauche(dateEmbauche);
		this->Personnel->setIdSupHierarchique(idSupHierarchique);
		id = this->cad->actionRowsID(this->Personnel->Creer());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setAdresse(lesAdresses[i]);
			i++;
			this->adresse->setVille(lesAdresses[i]);
			i++;
			this->adresse->setCp(lesAdresses[i]);
			this->adresse->setIdPersonne(id);
			this->cad->actionRows(this->adresse->INSERT());
		}
	}

	void ServicePersonnel::modifier(int id_Personnel, String^ nom, String^ prenom, array<String^>^ lesAdresses, String^ dateEmbauche, int idSupHierarchique)
	{
		int i;
		this->Personnel->setIdPersonnel(id_Personnel);
		this->Personnel->setNom(nom);
		this->Personnel->setPrenom(prenom);
		this->Personnel->setDateEmbauche(dateEmbauche);
		this->Personnel->setIdSupHierarchique(idSupHierarchique);
		this->cad->actionRows(this->Personnel->Modifier());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i]));
			i++;
			this->adresse->setAdresse(lesAdresses[i]);
			i++;
			this->adresse->setVille(lesAdresses[i]);
			i++;
			this->adresse->setCp(lesAdresses[i]);
			this->cad->actionRows(this->adresse->UPDATE());
		}
	}

	void ServicePersonnel::supprimer(int idPersonnel)
	{
		this->Personnel->setIdPersonnel(idPersonnel);
		this->cad->actionRows(this->Personnel->Supprimer());
	}
}*/
