#include "pch.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de UcHome
	/// </summary>
	public ref class UcHome : public System::Windows::Forms::UserControl
	{
	public:
		UcHome(void)
		{
			InitializeComponent();
			PopulateComboBox();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~UcHome()
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

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->button4->Location = System::Drawing::Point(611, 430);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(253, 52);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Supprimer un Client";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UcHome::button4_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(300, 428);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(253, 54);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Créer un Client";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UcHome::button3_Click);

			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(4, 428);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 54);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Afficher un Client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UcHome::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(921, 431);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Modifier un Client";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dgv_adresses
			// 
			this->dgv_adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_adresses->Location = System::Drawing::Point(4, 47);
			this->dgv_adresses->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgv_adresses->Name = L"dgv_adresses";
			this->dgv_adresses->RowHeadersWidth = 51;
			this->dgv_adresses->Size = System::Drawing::Size(860, 374);
			this->dgv_adresses->TabIndex = 22;
			this->dgv_adresses->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UcHome::dgv_adresses_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-4, 1);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 44);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Client";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(921, 68);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 27;
			this->comboBox1->Text = L"Choisir un ID ";
			this->comboBox1->Click += gcnew System::EventHandler(this, &UcHome::comboBox1_Click);

			// 
			// UcHome
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dgv_adresses);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinimumSize = System::Drawing::Size(1179, 526);
			this->Name = L"UcHome";
			this->Size = System::Drawing::Size(1179, 526);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dgv_adresses_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}

		   System::Void UcHome::button3_Click(System::Object^ sender, System::EventArgs^ e) {
			   try
			   {
				   // Get the selected ID from the ComboBox

				   // Create an instance of the ServiceClient class
				   NS_SVC::ServiceClient^ ServiceClient = gcnew NS_SVC::ServiceClient();

				   // Assuming you have a DataGridView (dgv_adresses) for entering addresses
				   array<String^>^ lesClients = gcnew array<String^>(dgv_adresses->ColumnCount);

				   // Populate lesClients array from the DataGridView
				   for (int i = 0; i < dgv_adresses->ColumnCount; i++)
				   {
					   lesClients[i] = Convert::ToString(dgv_adresses[i, dgv_adresses->RowCount - 2]->Value);
					   // Utilisez dgv_adresses->RowCount - 1 plutôt que dgv_adresses->RowCount - 2
					   // pour obtenir la dernière ligne (RowCount commence à 1, pas à 0).
				   }

				   // Call the modifier method to modify the record
				   ServiceClient->ajouter(lesClients);

				   // Refresh the DataGridView to reflect the changes
				   button2_Click(sender, e);
			   }
			   catch (System::Exception^ ex)
			   {
				   // Handle exceptions, e.g., display an error message
				   MessageBox::Show("Error modifying record: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::ServiceClient^ ServiceClient = gcnew NS_SVC::ServiceClient();
	DataSet^ resultDataSet = ServiceClient->listeClients("LesClients");
	dgv_adresses->DataSource = resultDataSet;
	dgv_adresses->DataMember = "LesClients";
}
	   System::Void UcHome::button4_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   try
		   {
			   // Get the selected ID from the ComboBox
			   int id = Convert::ToInt32(this->comboBox1->SelectedItem);

			   // Create an instance of the ServiceClient class
			   NS_SVC::ServiceClient^ ServiceClient = gcnew NS_SVC::ServiceClient();

			   // Call the supprimer method to delete the record
			   ServiceClient->supprimer(id);

			   // Refresh the DataGridView to reflect the changes
			   button2_Click(sender, e);
		   }
		   catch (System::Exception^ ex)
		   {
			   // Handle exceptions, e.g., display an error message
			   MessageBox::Show("Error deleting record: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }

	   System::Void UcHome::comboBox1_Click(System::Object^ sender, System::EventArgs^ e)
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
		   NS_SVC::ServiceClient^ ServiceClient = gcnew NS_SVC::ServiceClient();

		   // Assume that GetAvailableIDs returns an array of integers containing available IDs
		   array<int>^ availableIDs = ServiceClient->GetAvailableIDs();

		   // Add available IDs to the ComboBox
		   for each (int id in availableIDs)
		   {
			   comboBox1->Items->Add(id.ToString());
		   }
	   }



};
}
