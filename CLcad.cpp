#include "pch.h"

namespace NS_Composants
{
	//Si tout �a n'est pas clair, on en reparle � mon retour. Bon courage � vous.
	CLCAD::CLCAD(void)
	{
		this->rq_sql = "RIEN"; //ou ""
		this->cnx = "Data Source=LAPTOP-ACHRAF;Initial Catalog=testPOO;Integrated Security=True;Encrypt=False";
		this->CNX = gcnew SqlConnection(this->cnx);
		this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);
		this->CMD->CommandType = CommandType::Text;
	}


	// M�thode pour ex�cuter une requ�te SQL et retourner une valeur (typiquement un ID)
	int CLCAD::actionRowsID(String^ rq_sql)
	{
		// D�claration d'une variable pour stocker l'ID
		int id;

		// Appel de la m�thode setSQL pour d�finir la requ�te SQL � ex�cuter
		this->setSQL(rq_sql);

		// Attribution de la requ�te SQL � la propri�t� CommandText de l'objet SqlCommand
		this->CMD->CommandText = this->rq_sql;

		// Ouverture de la connexion � la base de donn�es
		this->CNX->Open();

		// Ex�cution de la requ�te SQL et r�cup�ration du r�sultat sous forme scalaire (une valeur unique)
		// Cette valeur est g�n�ralement utilis�e pour r�cup�rer un identifiant (ID) apr�s une insertion
		id = Convert::ToInt32(this->CMD->ExecuteScalar());

		// Fermeture de la connexion � la base de donn�es
		this->CNX->Close();

		// Retour de l'ID obtenu apr�s l'ex�cution de la requ�te SQL
		return id;
	}


	// M�thode pour ex�cuter une requ�te SQL qui ne retourne pas de r�sultat (INSERT, UPDATE, DELETE, etc.)
	void CLCAD::actionRows(String^ rq_sql)
	{
		// Appel de la m�thode setSQL pour d�finir la requ�te SQL � ex�cuter
		this->setSQL(rq_sql);

		// Attribution de la requ�te SQL � la propri�t� CommandText de l'objet SqlCommand
		this->CMD->CommandText = this->rq_sql;

		// Ouverture de la connexion � la base de donn�es
		this->CNX->Open();

		// Ex�cution de la requ�te SQL sans r�cup�ration de r�sultat (INSERT, UPDATE, DELETE, etc.)
		this->CMD->ExecuteNonQuery();

		// Fermeture de la connexion � la base de donn�es
		this->CNX->Close();
	}

	// M�thode pour r�cup�rer des donn�es � partir de la base de donn�es dans un DataSet
	DataSet^ CLCAD::getRows(String^ rq_sql, String^ dataTableName)
	{
		// Appel de la m�thode setSQL pour d�finir la requ�te SQL � ex�cuter
		this->setSQL(rq_sql);

		// Cr�ation d'un nouvel adaptateur de donn�es SqlDataAdapter associ� � l'objet SqlCommand (CMD)
		this->DA = gcnew SqlDataAdapter(this->CMD);

		// Attribution de la requ�te SQL � la propri�t� CommandText de l'objet SqlCommand
		this->CMD->CommandText = this->rq_sql;

		// Cr�ation d'un nouvel objet DataSet pour stocker les donn�es r�cup�r�es
		this->DS = gcnew DataSet();

		// Remplissage du DataSet avec les donn�es de la base de donn�es en utilisant l'adaptateur de donn�es (DataAdapter)
		// La table dans le DataSet sera nomm�e d'apr�s la valeur de dataTableName
		this->DA->Fill(this->DS, dataTableName);

		// Retour du DataSet contenant les donn�es r�cup�r�es
		return this->DS;
	}

	void CLCAD::setSQL(String^ rq_sql)
	{
		if (rq_sql == "" || rq_sql == "RIEN")
		{
			this->rq_sql = "RIEN";
		}
		else
		{
			this->rq_sql = rq_sql;
		}
	}
}