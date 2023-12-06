#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ProjetPOO {

	/// <summary>
	/// Description résumée de FStat
	/// </summary>
	public ref class FStat : public System::Windows::Forms::UserControl
	{
	public:
		FStat(void)
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
		~FStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 34);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Stat";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(11, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Panier Moyen ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(11, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Chiffre d\'affaire ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(115, 82);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(93, 21);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->Text = L"Choisir un mois";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(11, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"ReStock nécessaire";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(11, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 22);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Achat total d\'un Client";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(138, 140);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(104, 21);
			this->comboBox3->TabIndex = 16;
			this->comboBox3->Text = L"Choisir un Client";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(11, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 22);
			this->button5->TabIndex = 17;
			this->button5->Text = L"10 Articles les + vendus";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(11, 196);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(133, 22);
			this->button6->TabIndex = 18;
			this->button6->Text = L"10 Articles les - vendus";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Location = System::Drawing::Point(11, 255);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(161, 25);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Valeur commerciale du Stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(11, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 25);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Valeur d\'achat du Stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 298);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(502, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Simulation des variations de valeurs commerciales pour en déduire la valeur du St"
				L"ock ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 14);
			this->label3->TabIndex = 22;
			this->label3->Text = L"TVA (%)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 347);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 20);
			this->textBox1->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 347);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(114, 20);
			this->textBox2->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(135, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 14);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Marge Commerciale (%)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(293, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 14);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Remise Commerciale (%)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(296, 347);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(119, 20);
			this->textBox3->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(465, 347);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(119, 20);
			this->textBox4->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(462, 331);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 14);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Démarque Inconnue (%)";
			// 
			// textBox5
			// 
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox5->Location = System::Drawing::Point(642, 347);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(118, 20);
			this->textBox5->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(639, 331);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 14);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Valeur du Stock (€)";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(296, 53);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(530, 227);
			this->dataGridView1->TabIndex = 32;
			// 
			// FStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(884, 427);
			this->Name = L"FStat";
			this->Size = System::Drawing::Size(884, 427);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
