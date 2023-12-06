#include "Adresse.h"

namespace NS_Composants
{
	Adresse::Adresse(void)
	{
		this->id_adresse = -1;
		this->adresse = "RIEN";
		this->complement = "RIEN"; // Ajout du compl�ment
		this->cp = "RIEN";
		this->ville = "RIEN";
		this->id_personne = -1;
	}

	String^ Adresse::SELECTByIdPersonne(void)
	{
		return "SELECT id_adresse, adresse, complement, ville, cp, id_personne " +
			"FROM TB_ADRESSE " +
			"WHERE(id_personne = " + this->id_personne + ");";
	}

	String^ Adresse::INSERT(void)
	{
		return "INSERT INTO TB_ADRESSE(adresse, complement, ville, cp, id_personne) " +	"VALUES('" + this->adresse + "', '" + this->complement + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";

	}

	String^ Adresse::UPDATE(void)
	{
		return "UPDATE TB_ADRESSE" +
			"SET adresse ='" + this->adresse + "', complement ='" + this->complement + "', ville ='" + this->ville + "', cp ='" + this->cp +
			"' " +
			"WHERE(id_adresse = " + this->id_adresse + "); ";
	}

	String^ Adresse::DELETE(void)
	{
		return "DELETE FROM TB_ADRESSE " +
			"WHERE(id_adresse = " + this->id_adresse + ");";
	}

	void Adresse::setIdAdresse(int IdAdresse)
	{
		if (IdAdresse > 0)
			this->id_adresse = IdAdresse;
	}

	void Adresse::setAdresse(String^ Adresse)
	{
		if (Adresse != "")
			this->adresse = Adresse;
	}

	void Adresse::setcomplement(String^ Complement)
	{
		// Vous pouvez ajouter des v�rifications suppl�mentaires si n�cessaire
		this->complement = Complement;
	}

	void Adresse::setCp(String^ Cp)
	{
		if (Cp != "")
			this->cp = Cp;
	}

	void Adresse::setVille(String^ Ville)
	{
		if (Ville != "")
			this->ville = Ville;
	}

	void Adresse::setIdPersonne(int IdPersonne)
	{
		if (IdPersonne > 0)
			this->id_personne = IdPersonne;
	}

	int Adresse::getIdAdresse(void)
	{
		return this->id_adresse;
	}

	String^ Adresse::getAdresse(void)
	{
		return this->adresse;
	}

	String^ Adresse::getcomplement(void)
	{
		return this->complement;
	}

	String^ Adresse::getCp(void)
	{
		return this->cp;
	}

	String^ Adresse::getVille(void)
	{
		return this->ville;
	}

	int Adresse::getIdPersonne(void)
	{
		return this->id_personne;
	}
}
