#pragma once
#include "pch.h"

public ref class Personne abstract
{
protected:
    int id;
    String^ nom;
    String^ prenom;

public:
    Personne();
    Personne(int id, String^ nom, String^ prenom);

    virtual String^ Creer() abstract;
    virtual String^ Modifier() abstract;
    virtual String^ Supprimer() abstract;
    virtual String^ Afficher() abstract;

    virtual void setNom(String^);
    virtual void setPrenom(String^);
    virtual int getId();
    virtual String^ getNom();
    virtual String^ getPrenom();
};
