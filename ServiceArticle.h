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
        array<int>^ GetAvailableIDs();
        DataSet^ selectAllArticle(System::String^);
        void insertArticle(NS_Composants::Article^);
        void updateArticle(NS_Composants::Article^);
        void deleteArticle(int);
    };
}


    /*array<int>^ GestionMembre::GetAvailableIDs()
    {
        System::Collections::ArrayList^ availableIDs = gcnew System::Collections::ArrayList();

        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->personnel->Afficher(), "LesPersonnels");

        for each (DataRow ^ row in this->ds->Tables["LesPersonnels"]->Rows)
        {
            int id = Convert::ToInt32(row["id_personnel"]);
            availableIDs->Add(id);
        }

        return (array<int>^)availableIDs->ToArray(Type::GetType("System.Int32"));
    }*/

	/*void gestionArticle::modifier(array<String^>^ infoArticle)
    {
        this->article->setRef(infoArticle[0]);
        this->article->setCouleur(infoArticle[1]);
        this->article->setNature(infoArticle[2]);
        this->article->setNom(infoArticle[3]);

        int quantiteStock = 0, tauxTVA = 0, prixHT = 0;

        if (!String::IsNullOrEmpty(infoArticle[4]))
            quantiteStock = Convert::ToInt32(infoArticle[4]);

        if (!String::IsNullOrEmpty(infoArticle[5]))
            tauxTVA = Convert::ToInt32(infoArticle[5]);

        if (!String::IsNullOrEmpty(infoArticle[6]))
            prixHT = Convert::ToInt32(infoArticle[6]);

        this->article->setQuantite_Stock(quantiteStock);
        this->article->setTauxTVA(tauxTVA);
        this->article->setPrixHT(prixHT);

        this->cad->actionRows(this->article->UPDATE());

    }*/
}