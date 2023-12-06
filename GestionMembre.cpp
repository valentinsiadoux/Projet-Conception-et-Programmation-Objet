#include "pch.h"
#include "GestionMembre.h" // Assurez-vous d'inclure le bon fichier d'en-tête ici

namespace NS_SVC
{
    GestionMembre::GestionMembre(void)
    {
        this->cad = gcnew NS_Composants::CLCAD();
        this->personnel = gcnew NS_Composants::membre();
        this->adresse = gcnew NS_Composants::Adresse();
    }

    DataSet^ GestionMembre::listemembre(String^ dataTableName)
    {
        this->ds = gcnew DataSet();
        // Assurez-vous que la méthode getRows existe dans la classe CLCAD
        this->ds = this->cad->getRows(this->personnel->Afficher(), dataTableName);
        return this->ds;
    }

    void GestionMembre::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
    {
        int id;
        int i;
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        id = this->cad->actionRowsID(this->personnel->Creer());
        for (i = 0; i < lesAdresses->Length - 2; i++) // Modification de la condition ici
        {
            this->adresse->setAdresse(lesAdresses[i]); i++;
            this->adresse->setVille(lesAdresses[i]); i++;
            this->adresse->setCp(lesAdresses[i]);
            this->adresse->setIdPersonne(id);
            this->cad->actionRows(this->adresse->INSERT());
        }
    }

    void GestionMembre::modifier(int id, String^ nom, String^ prenom, array<String^>^ lesAdresses)
    {
        int i;
        this->personnel->setIdPersonnel(id);
        this->personnel->setNom(nom);
        this->personnel->setPrenom(prenom);
        this->cad->actionRows(this->personnel->Modifier());
        for (i = 0; i < lesAdresses->Length - 2; i++) // Modification de la condition ici
        {
            this->adresse->setIdAdresse(Convert::ToInt32(lesAdresses[i])); i++;
            this->adresse->setAdresse(lesAdresses[i]); i++;
            this->adresse->setVille(lesAdresses[i]); i++;
            this->adresse->setCp(lesAdresses[i]);
            this->cad->actionRows(this->adresse->UPDATE());
        }
    }

    void GestionMembre::supprimer(int id)
    {
        this->personnel->setIdPersonnel(id);
        this->cad->actionRows(this->personnel->Supprimer());
    }
}
