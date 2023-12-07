#include "pch.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;



namespace ProjetPOO {

	/// <summary>
	/// Description résumée de FStock
	/// </summary>
	public ref class FStock : public System::Windows::Forms::UserControl
	{
	public:
		FStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FStock()
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
			this->button4->Location = System::Drawing::Point(613, 428);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(253, 52);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Supprimer un Article";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FStock::button4_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(308, 427);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(253, 54);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Créer un Article";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(4, 427);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 54);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Afficher un Article";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FStock::button2_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(921, 430);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 52);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Modifier un Article";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dgv_adresses
			// 
			this->dgv_adresses->BackgroundColor = System::Drawing::Color::White;
			this->dgv_adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_adresses->Location = System::Drawing::Point(4, 46);
			this->dgv_adresses->Margin = System::Windows::Forms::Padding(4);
			this->dgv_adresses->Name = L"dgv_adresses";
			this->dgv_adresses->RowHeadersWidth = 51;
			this->dgv_adresses->Size = System::Drawing::Size(863, 374);
			this->dgv_adresses->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-8, 0);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 44);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Stock";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(921, 96);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(199, 24);
			this->comboBox1->TabIndex = 27;
			this->comboBox1->Text = L"Choisir un ID";
			// 
			// FStock
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
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(1179, 526);
			this->Name = L"FStock";
			this->Size = System::Drawing::Size(1179, 526);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_SVC::ServiceArticle^ ServiceArticle = gcnew NS_SVC::ServiceArticle();
	DataSet^ resultDataSet = ServiceArticle->selectAllArticle("LesArticles");
	dgv_adresses->DataSource = resultDataSet;
	dgv_adresses->DataMember = "LesArticles";
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// Get the selected ID from the ComboBox
		int id = Convert::ToInt32(this->comboBox1->SelectedItem);

		// Create an instance of the ServiceArticle class
		NS_SVC::ServiceArticle^ ServiceArticle = gcnew NS_SVC::ServiceArticle();

		// Call the supprimer method to delete the record
		ServiceArticle->deleteArticle(id);

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
