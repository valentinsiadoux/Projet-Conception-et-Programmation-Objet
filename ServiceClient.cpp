#include "pch.h"
namespace NS_SVC
{
	ServiceClient::ServiceClient(void)
	{
		this->cad = gcnew NS_Composants::CLCAD();
		this->client = gcnew NS_Composants::Client();
	}

	array<int>^ ServiceClient::GetAvailableIDs()
	{
		System::Collections::ArrayList^ availableIDs = gcnew System::Collections::ArrayList();

		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->Afficher(), "LesClients");

		for each (DataRow ^ row in this->ds->Tables["LesClients"]->Rows)
		{
			int id = Convert::ToInt32(row["IdClient"]);
			availableIDs->Add(id);
		}

		return (array<int>^)availableIDs->ToArray(Type::GetType("System.Int32"));
	}

	DataSet^ ServiceClient::listeClients(String^ dataTableName)
	{
		this->ds = gcnew DataSet();
		this->ds = this->cad->getRows(this->client->Afficher(), dataTableName);
		return this->ds;
	}

	void ServiceClient::ajouter(array<String^>^
		lesClients)
	{
		
		this->client->setNom(lesClients[1]);
		this->client->setPrenom(lesClients[2]);
		this->client->setDateNaissance(lesClients[3]);
		this->client->setPremierAchat(lesClients[4]);
		this->client->setAdresseLivraison(lesClients[5]);
		this->client->setAdresseFacturation(lesClients[6]);
		int id = this->cad->actionRowsID(this->client->Creer());
	}
	void ServiceClient::ServiceClient::modifier(int id_client, String^ nom,
		String^ prenom, array<String^>^ lesClients)
	{
		int i;
		this->client->setIdClient(id_client);
		this->client->setNom(nom);
		this->client->setPrenom(prenom);
		this->cad->actionRows(this->client->Modifier());
		/*for (i = 0; i < lesClients->Length - 1; i++)
		{
			this->adresse->setIdAdresse(Convert::ToInt32(lesClients[i]));
			i++;
			this->adresse->setAdresse(lesClients[i]); i++;
			this->adresse->setVille(lesClients[i]); i++;
			this->adresse->setCp(lesClients[i]);
			this->cad->actionRows(this->adresse->UPDATE());
		}*/
	}
	void ServiceClient::supprimer(int idclient)
	{
		this->client->setIdClient(idclient);
		this->cad->actionRows(this->client->Supprimer());
	}
}