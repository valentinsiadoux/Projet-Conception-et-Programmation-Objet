#include "pch.h"

NS_SVC::ServiceArticle::ServiceArticle(void)
{
    this->cad = gcnew NS_Composants::CLCAD();
    this->Article = gcnew NS_Composants::Article();
}



System::Data::DataSet^ NS_SVC::ServiceArticle::selectAllArticle(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->Article->Afficher();
    return this->cad->getRows(sql, dataTableName);
}

void NS_SVC::ServiceArticle::insertArticle(NS_Composants::Article^ Article)
{
    System::String^ sql;
    this->Article = Article;
    sql = this->Article->Creer();
    this->cad->actionRows(sql);
}



void NS_SVC::ServiceArticle::updateArticle(NS_Composants::Article^ Article)
{
    System::String^ sql;
    this->Article = Article;
    sql = this->Article->Modifier();
    this->cad->actionRows(sql);
}

void NS_SVC::ServiceArticle::deleteArticle(int idarticle)
{

    this->Article->setIdArticle(idarticle);
    this->cad->actionRows(this->Article->Supprimer());

}
