#pragma once
#include "pch.h"

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
	ref class ServiceClient
	{
	private:
		NS_Composants::CLCAD^ cad;
		NS_Composants::Client^ client;
		NS_Composants::Adresse^ adresse;
		DataSet^ ds;
	public:
		ServiceClient(void);
		DataSet^ listeClients(String^);
		void ajouter(String^, String^, array<String^>^);
		void modifier(int, String^, String^, array<String^>^);
		void supprimer(int);
	};
}