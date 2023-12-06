#include "pch.h"
namespace NS_SVC
{
	ServiceClient::ServiceClient(void)
	{
		this->cad = gcnew NS_Composants::CLCAD();
		this->client = gcnew NS_Composants::Client();
		this->adresse = gcnew NS_Composants::Adresse();
	}
	DataSet^ ServiceClient::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->Afficher(), dataTableName);
		return this->ds;
	}

	void ServiceClient::ajouter(String^ nom, String^ prenom, array<String^>^
		lesAdresses)
	{
		int id;
		int i;
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		id = this->cad->actionRowsID(this->client->Creer());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->adresse->setIdPersonne(id);
			this->cad->actionRows(this->adresse->INSERT());
		}
	}
	void ServiceClient::ServiceClient::modifier(int id_client, String^ nom,
		String^ prenom, array<String^>^ lesAdresses)
	{
		int i;
		this->client->setIdClient(id_client);
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->cad->actionRows(this->client->Modifier());
		for (i = 0; i < lesAdresses->Length - 1; i++)
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i]));
			i++;
			this->adresse->setAdresse(lesAdresses[i]); i++;
			this->adresse->setVille(lesAdresses[i]); i++;
			this->adresse->setCp(lesAdresses[i]);
			this->cad->actionRows(this->adresse->UPDATE());
		}
	}
	void ServiceClient::supprimer(int idclient)
	{
		this->client->setIdClient(idclient);
		this->cad->actionRows(this->client->Supprimer());
	}
}