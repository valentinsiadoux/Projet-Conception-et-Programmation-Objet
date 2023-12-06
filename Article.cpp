#include "pch.h"

void NS_Composants::Article::setNature(System::String^ nature)
{
    this->nature = nature;
}

void NS_Composants::Article::setNom(System::String^ name)
{
    this->nom_article = name;
}

void NS_Composants::Article::setStock(int stock_article)
{
    this->stock = stock_article;
}

void NS_Composants::Article::setRemise(float remise_article)
{
    this->promo = remise_article;
}

void NS_Composants::Article::setPrixHT(float prix_article_ht)
{
    this->prix_ht = prix_article_ht;
}

void NS_Composants::Article::setReappro(int quantite_reapprovisionnement)
{
    this->reappro = quantite_reapprovisionnement;
}

void NS_Composants::Article::setTauxTVA(float taux_tva)
{
    this->taux_tva = taux_tva;
}

void NS_Composants::Article::setCouleur(System::String^ couleur_article)
{
    this->couleur_article = couleur_article;
}

void NS_Composants::Article::setIdArticle(int ref_article)
{
    this->id_article = ref_article;
}

System::String^ NS_Composants::Article::getNom()
{
    return nom_article;
}

int NS_Composants::Article::getStock()
{
    return stock;
}

float NS_Composants::Article::getRemise()
{
    return promo;
}

float NS_Composants::Article::getPrixHT()
{
    return prix_ht;
}

int NS_Composants::Article::getQuantiteReapprovisionnement()
{
    return reappro;
}

float NS_Composants::Article::getTauxTVA()
{
    return taux_tva;
}

System::String^ NS_Composants::Article::getCouleur()
{
    return couleur_article;
}

int NS_Composants::Article::getIdArticle()
{
    return id_article;
}

System::String^ NS_Composants::Article::Creer()
{
    return "A";
}

System::String^ NS_Composants::Article::Modifier()
{
    return "A";
}

System::String^ NS_Composants::Article::Supprimer()
{
    return "A";
}

System::String^ NS_Composants::Article::Afficher()
{
    return "A";
}
