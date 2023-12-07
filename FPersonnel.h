#pragma once
#include "pch.h"
#include <list> // Assurez-vous d'inclure la bibliothèque pour List

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;



namespace ProjetPOO {

	/// <summary>
	/// Description résumée de Personnel
	/// </summary>
	public ref class FPersonnel : public System::Windows::Forms::UserControl
	{
	public:
		FPersonnel(void)
		{
			InitializeComponent();
			PopulateComboBox(); // Call the method to populate ComboBox with IDs


			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dgv_adresses;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: int id;
	private:NS_SVC::GestionMembre^ lesPersonnels;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgv_adresses = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(460, 348);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 42);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Supprimer un Personnel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FPersonnel::button4_Click);

			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(231, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(190, 44);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Créer un Personnel";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FPersonnel::button3_Click);

			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(3, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(190, 44);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Afficher un Personnel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FPersonnel::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(691, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(190, 42);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Modifier un Personnel ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FPersonnel::button1_Click);
			// 
			// dgv_adresses
			// 
			this->dgv_adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_adresses->Location = System::Drawing::Point(3, 37);
			this->dgv_adresses->Name = L"dgv_adresses";
			this->dgv_adresses->Size = System::Drawing::Size(647, 304);
			this->dgv_adresses->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 34);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Personnel";
			this->label2->Click += gcnew System::EventHandler(this, &FPersonnel::label2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(691, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->Text = L"Choisir un ID ";
			this->comboBox1->Click += gcnew System::EventHandler(this, &FPersonnel::comboBox1_Click);
			// 
			// FPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgv_adresses);
			this->Controls->Add(this->label2);
			this->MinimumSize = System::Drawing::Size(884, 427);
			this->Name = L"FPersonnel";
			this->Size = System::Drawing::Size(884, 427);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void FPersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e) {
			try
			{
				// Get the selected ID from the ComboBox

				// Create an instance of the GestionMembre class
				NS_SVC::GestionMembre^ GestionMembre = gcnew NS_SVC::GestionMembre();

				// Assuming you have a DataGridView (dgv_adresses) for entering addresses
				array<String^>^ lesPersonnels = gcnew array<String^>(dgv_adresses->ColumnCount);


				// Populate lesPersonnels array from the DataGridView
				for (int i = 0; i < dgv_adresses->ColumnCount; i++)
				{
					//System::Windows::Forms::MessageBox::Show(Convert::ToString(dgv_adresses[i, dgv_adresses->RowCount-2]->Value));
					
					lesPersonnels[i] = Convert::ToString(dgv_adresses[i, dgv_adresses->RowCount-2]->Value);
				}

				// Call the ajouter method to add a new record
				GestionMembre->ajouter(lesPersonnels);

				// Refresh the DataGridView to reflect the changes
				button2_Click(sender, e);
			}
			catch (System::Exception^ ex)
			{
				// Handle exceptions, e.g., display an error message
				MessageBox::Show("Error adding record: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


		System::Void FPersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			NS_SVC::GestionMembre^ GestionMembre = gcnew NS_SVC::GestionMembre();
			DataSet^ resultDataSet = GestionMembre->listemembre("LesPersonnels");
			dgv_adresses->DataSource = resultDataSet;
			dgv_adresses->DataMember = "LesPersonnels";

		}

		System::Void FPersonnel::comboBox1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			ComboBox^ comboBox = dynamic_cast<ComboBox^>(sender);

			if (comboBox != nullptr)
			{
				// Récupérer la valeur sélectionnée
				String^ selectedValue = safe_cast<String^>(comboBox->SelectedItem);

				// Afficher la valeur sélectionnée dans la console (vous pouvez la traiter comme vous le souhaitez)
				Console::WriteLine("Selected: " + selectedValue);
			}
		}

		void PopulateComboBox()
		{
			NS_SVC::GestionMembre^ GestionMembre = gcnew NS_SVC::GestionMembre();

			// Assume that GetAvailableIDs returns an array of integers containing available IDs
			array<int>^ availableIDs = GestionMembre->GetAvailableIDs();

			// Add available IDs to the ComboBox
			for each (int id in availableIDs)
			{
				comboBox1->Items->Add(id.ToString());
			}
		}



	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   System::Void FPersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e) {
			   try
			   {
				   NS_SVC::GestionMembre^ GestionMembre = gcnew NS_SVC::GestionMembre();
				   dgv_adresses->DataMember = "LesPersonnels";
				   array<String^>^ lesPersonnels = gcnew array<String^>(dgv_adresses->ColumnCount);
				   for each (DataGridViewRow ^ row in dgv_adresses->Rows)
				   {
					   this->lesPersonnels = gcnew NS_SVC::GestionMembre();
					   for (int i = 0; i < dgv_adresses->ColumnCount; i++)
					   {
						   lesPersonnels[i] = Convert::ToString(dgv_adresses[i, row->Index]->Value);
					   }
					   GestionMembre->modifier(lesPersonnels);
				   }
			   }
			   catch (System::Exception^ ex)
			   {
				   // Handle exceptions, e.g., display an error message
				   MessageBox::Show("Error deleting record: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
			



	System::Void FPersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// Get the selected ID from the ComboBox
			int id = Convert::ToInt32(this->comboBox1->SelectedItem);

			// Create an instance of the GestionMembre class
			NS_SVC::GestionMembre^ GestionMembre = gcnew NS_SVC::GestionMembre();

			// Call the supprimer method to delete the record
			GestionMembre->supprimer(id);

			// Refresh the DataGridView to reflect the changes
			button2_Click(sender, e);
		}
		catch (System::Exception^ ex)
		{
			// Handle exceptions, e.g., display an error message
			MessageBox::Show("Error deleting record: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}



};
}









