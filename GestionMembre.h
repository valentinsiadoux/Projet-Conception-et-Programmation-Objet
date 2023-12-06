#pragma once
#include "pch.h"

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
	ref class GestionMembre
	{
	private:
		NS_Composants::CLCAD^ cad;
		NS_Composants::membre^ personnel;
		NS_Composants::Adresse^ adresse;
		DataSet^ ds;
	public:
		GestionMembre(void);
		DataSet^ listemembre(String^);
		void ajouter(String^, String^, array<String^>^);
		void modifier(int, String^, String^, array<String^>^);
		void supprimer(int);
	};
}