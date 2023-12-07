#include "pch.h"
#include "GestionMembre.h" // Assurez-vous d'inclure le bon fichier d'en-tête ici

namespace NS_SVC
{
    GestionMembre::GestionMembre(void)
    {
        this->cad = gcnew NS_Composants::CLCAD();
        this->personnel = gcnew NS_Composants::membre();
    }

    DataSet^ GestionMembre::listemembre(String^ dataTableName)
    {
        this->ds = gcnew DataSet();
        // Assurez-vous que la méthode getRows existe dans la classe CLCAD
        this->ds = this->cad->getRows(this->personnel->Afficher(), dataTableName);
        return this->ds;
    }


    void GestionMembre::ajouter(array<String^>^ lesPersonnels)
    {
        this->personnel->setNom(lesPersonnels[2]);
        this->personnel->setPrenom(lesPersonnels[1]);
        this->personnel->setDateEmbauche(lesPersonnels[3]);
        this->personnel->setIdSupHierarchique(Convert::ToInt32(lesPersonnels[4]));
        int id = this->cad->actionRowsID(this->personnel->Creer());
    }


    array<int>^ GestionMembre::GetAvailableIDs()
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
    }


    void GestionMembre::modifier(array<String^>^ lesPersonnels)
    {
        this->personnel->setNom(lesPersonnels[1]);
        this->personnel->setPrenom(lesPersonnels[2]);
        this->personnel->setDateEmbauche(lesPersonnels[3]);
        this->personnel->setIdSupHierarchique(Convert::ToInt32(lesPersonnels[4]));
        this->cad->actionRows(this->personnel->Modifier());
    }

    void GestionMembre::supprimer(int id)
    {
        this->personnel->setIdPersonnel(id);
        this->cad->actionRows(this->personnel->Supprimer());
    }
}
