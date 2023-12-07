#pragma once
#include "pch.h"
#include <list> // Include this line for List

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
		DataSet^ ds;
	public:
		GestionMembre(void);
		DataSet^ listemembre(String^);
		array<int>^ GetAvailableIDs();
		void ajouter(array<String^>^);
		void modifier(array<String^>^);
		void supprimer(int);
	};
}