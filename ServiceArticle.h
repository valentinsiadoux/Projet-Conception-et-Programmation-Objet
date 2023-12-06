#pragma once
#include "pch.h"

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC
{
	ref class ServiceArticle
	{
	private:
		NS_Composants::CLCAD^ cad;
		NS_Composants::Article^ Article;
		DataSet^ ds;
	public:
		ServiceArticle(void);
		DataSet^ selectAllArticle(System::String^);
		void insertArticle(NS_Composants::Article^);
		void updateArticle(NS_Composants::Article^);
		void deleteArticle(NS_Composants::Article^);
	};
}