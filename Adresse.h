#pragma once
using namespace System;
namespace NS_Composants
{
	ref class Adresse
	{
	private:
		int id_adresse;
		String^ adresse;
		String^ complement;
		String^ cp;
		String^ ville;
		int id_personne;

	public:
		Adresse(void);
		String^ SELECTByIdPersonne(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setcomplement(String^);
		void setCp(String^);
		void setVille(String^);
		void setIdPersonne(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		String^ getcomplement(void);
		String^ getCp(void);
		String^ getVille(void);
		int getIdPersonne(void);
	};
}