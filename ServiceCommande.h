#pragma once
#include "pch.h"

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVCo
{
	ref class ServiceCommande
	{
	private:
		NS_Composants::CLCAD^ cad;
		NS_Composants::Commande^ Commande;
		DataSet^ ds;
	public :
		ServiceCommande(void);
		DataSet^ selectAllCommande(System::String^);
		void insertCommande(NS_Composants::Commande^);
		void updateCommande(NS_Composants::Commande^);
		void deleteCommande(NS_Composants::Commande^);
		
	};
}