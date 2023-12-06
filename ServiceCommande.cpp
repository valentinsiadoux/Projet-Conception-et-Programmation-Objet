#include "pch.h"

NS_SVCo::ServiceCommande::ServiceCommande(void)
{
    this->cad = gcnew NS_Composants::CLCAD();
    this->Commande = gcnew NS_Composants::Commande();
}

System::Data::DataSet^ NS_SVCo::ServiceCommande::selectAllCommande(System::String^ dataTableName)
{
    System::String^ sql;
    sql = this->Commande->Afficher();
    return this->cad->getRows(sql, dataTableName);
}

void NS_SVCo::ServiceCommande::insertCommande(NS_Composants::Commande^ commande)
{
    System::String^ sql;
    this->Commande = commande;
    sql = this->Commande->Creer();
    this->cad->actionRows(sql);
}

void NS_SVCo::ServiceCommande::updateCommande(NS_Composants::Commande^ commande)
{
    System::String^ sql;
    this->Commande = commande;
    sql = this->Commande->Modifier();
    this->cad->actionRows(sql);
}

void NS_SVCo::ServiceCommande::deleteCommande(NS_Composants::Commande^ commande)
{
    System::String^ sql;
    this->Commande = commande;
    sql = this->Commande->Supprimer();
    this->cad->actionRows(sql);
}
