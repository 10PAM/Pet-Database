#pragma once
#include "Pet.h"

namespace PetDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Pet_Navigator
	/// </summary>
	public ref class Pet_Navigator : public System::Windows::Forms::Form
	{
	public:
		Pet_Navigator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Pet_Navigator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Button_Previous;
	private: System::Windows::Forms::Button^ Button_Next;


	private: System::Windows::Forms::Label^ Label_Data_Pet_Name;
	private: System::Windows::Forms::Label^ Label_Data_Pet_Age;

	private: System::Windows::Forms::Label^ Label_Data_Owner_Name;
	private: System::Windows::Forms::Label^ Label_Data_Owner_Phone;
	private: System::Windows::Forms::Label^ Label_Data_Pet_Type;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ Label_Data_Pet_Breed;

	private: System::Windows::Forms::Label^ label10;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Button_Previous = (gcnew System::Windows::Forms::Button());
			this->Button_Next = (gcnew System::Windows::Forms::Button());
			this->Label_Data_Pet_Name = (gcnew System::Windows::Forms::Label());
			this->Label_Data_Pet_Age = (gcnew System::Windows::Forms::Label());
			this->Label_Data_Owner_Name = (gcnew System::Windows::Forms::Label());
			this->Label_Data_Owner_Phone = (gcnew System::Windows::Forms::Label());
			this->Label_Data_Pet_Type = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Label_Data_Pet_Breed = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(778, 101);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pet Navigator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(366, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"// Pet (Details)";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Click += gcnew System::EventHandler(this, &Pet_Navigator::label2_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(40, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 45);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Name:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Click += gcnew System::EventHandler(this, &Pet_Navigator::label4_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 378);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(618, 41);
			this->label5->TabIndex = 3;
			this->label5->Text = L"// Owner (Details)";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &Pet_Navigator::label5_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(40, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 45);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Name:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(40, 228);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 45);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Age: ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(40, 464);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(278, 45);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Phone Number:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Button_Previous
			// 
			this->Button_Previous->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->Button_Previous->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Previous->ForeColor = System::Drawing::Color::White;
			this->Button_Previous->Location = System::Drawing::Point(205, 531);
			this->Button_Previous->Name = L"Button_Previous";
			this->Button_Previous->Size = System::Drawing::Size(192, 39);
			this->Button_Previous->TabIndex = 8;
			this->Button_Previous->Text = L"< (Previous)";
			this->Button_Previous->UseVisualStyleBackColor = false;
			this->Button_Previous->Click += gcnew System::EventHandler(this, &Pet_Navigator::button1_Click);
			// 
			// Button_Next
			// 
			this->Button_Next->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->Button_Next->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Next->ForeColor = System::Drawing::Color::White;
			this->Button_Next->Location = System::Drawing::Point(403, 531);
			this->Button_Next->Name = L"Button_Next";
			this->Button_Next->Size = System::Drawing::Size(192, 39);
			this->Button_Next->TabIndex = 9;
			this->Button_Next->Text = L"(Next) >";
			this->Button_Next->UseVisualStyleBackColor = false;
			this->Button_Next->Click += gcnew System::EventHandler(this, &Pet_Navigator::button2_Click);
			// 
			// Label_Data_Pet_Name
			// 
			this->Label_Data_Pet_Name->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Pet_Name->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Pet_Name->Location = System::Drawing::Point(164, 182);
			this->Label_Data_Pet_Name->Name = L"Label_Data_Pet_Name";
			this->Label_Data_Pet_Name->Size = System::Drawing::Size(233, 45);
			this->Label_Data_Pet_Name->TabIndex = 10;
			this->Label_Data_Pet_Name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Pet_Name->Click += gcnew System::EventHandler(this, &Pet_Navigator::Label_Data_Pet_Name_Click);
			// 
			// Label_Data_Pet_Age
			// 
			this->Label_Data_Pet_Age->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Pet_Age->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Pet_Age->Location = System::Drawing::Point(164, 228);
			this->Label_Data_Pet_Age->Name = L"Label_Data_Pet_Age";
			this->Label_Data_Pet_Age->Size = System::Drawing::Size(118, 45);
			this->Label_Data_Pet_Age->TabIndex = 11;
			this->Label_Data_Pet_Age->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Pet_Age->Click += gcnew System::EventHandler(this, &Pet_Navigator::Label_Data_Pet_Age_Click);
			// 
			// Label_Data_Owner_Name
			// 
			this->Label_Data_Owner_Name->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Owner_Name->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Owner_Name->Location = System::Drawing::Point(164, 419);
			this->Label_Data_Owner_Name->Name = L"Label_Data_Owner_Name";
			this->Label_Data_Owner_Name->Size = System::Drawing::Size(233, 45);
			this->Label_Data_Owner_Name->TabIndex = 12;
			this->Label_Data_Owner_Name->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Owner_Name->Click += gcnew System::EventHandler(this, &Pet_Navigator::Label_Data_Owner_Name_Click);
			// 
			// Label_Data_Owner_Phone
			// 
			this->Label_Data_Owner_Phone->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Owner_Phone->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Owner_Phone->Location = System::Drawing::Point(324, 464);
			this->Label_Data_Owner_Phone->Name = L"Label_Data_Owner_Phone";
			this->Label_Data_Owner_Phone->Size = System::Drawing::Size(348, 45);
			this->Label_Data_Owner_Phone->TabIndex = 13;
			this->Label_Data_Owner_Phone->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Owner_Phone->Click += gcnew System::EventHandler(this, &Pet_Navigator::Label_Data_Owner_Phone_Click);
			// 
			// Label_Data_Pet_Type
			// 
			this->Label_Data_Pet_Type->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Pet_Type->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Pet_Type->Location = System::Drawing::Point(164, 273);
			this->Label_Data_Pet_Type->Name = L"Label_Data_Pet_Type";
			this->Label_Data_Pet_Type->Size = System::Drawing::Size(551, 45);
			this->Label_Data_Pet_Type->TabIndex = 15;
			this->Label_Data_Pet_Type->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Pet_Type->Click += gcnew System::EventHandler(this, &Pet_Navigator::Label_Data_Pet_Type_Click);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(40, 273);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 45);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Type: ";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Label_Data_Pet_Breed
			// 
			this->Label_Data_Pet_Breed->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Data_Pet_Breed->ForeColor = System::Drawing::Color::White;
			this->Label_Data_Pet_Breed->Location = System::Drawing::Point(210, 318);
			this->Label_Data_Pet_Breed->Name = L"Label_Data_Pet_Breed";
			this->Label_Data_Pet_Breed->Size = System::Drawing::Size(505, 45);
			this->Label_Data_Pet_Breed->TabIndex = 17;
			this->Label_Data_Pet_Breed->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Label_Data_Pet_Breed->Click += gcnew System::EventHandler(this, &Pet_Navigator::label8_Click);
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(40, 318);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 45);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Breed:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Pet_Navigator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(802, 582);
			this->Controls->Add(this->Label_Data_Pet_Breed);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Label_Data_Pet_Type);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Label_Data_Owner_Phone);
			this->Controls->Add(this->Label_Data_Owner_Name);
			this->Controls->Add(this->Label_Data_Pet_Age);
			this->Controls->Add(this->Label_Data_Pet_Name);
			this->Controls->Add(this->Button_Next);
			this->Controls->Add(this->Button_Previous);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Pet_Navigator";
			this->Text = L"Pet_Navigator";
			this->Load += gcnew System::EventHandler(this, &Pet_Navigator::Pet_Navigator_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: Pet^ pet = nullptr;

	int currentPet = 0;

	String^ string_Connection = "Data Source=localhost\\sqlexpress;Initial Catalog=MainDB;Integrated Security=True;Encrypt=False";
	String^ sql_Query = "SELECT * FROM Pets WHERE PetId=@petid";

	private: System::Void Pet_Navigator_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Next Button

		try {
			if (currentPet + 1 < 4)
			{
				currentPet += 1;
			}
			SqlConnection sql_Connection(string_Connection);
			sql_Connection.Open();

			SqlCommand Command(sql_Query, % sql_Connection);
			Command.Parameters->AddWithValue("@petid", currentPet);

			SqlDataReader^ Reader = Command.ExecuteReader();
			if (Reader->Read()) {
				pet = gcnew Pet;
				pet->id = Reader->GetInt32(0);
				pet->PetName = Reader->GetString(1);
				pet->PetAge = Reader->GetString(2);
				pet->PetType = Reader->GetString(3);
				pet->PetBreed = Reader->GetString(4);
				pet->OwnerName = Reader->GetString(5);
				pet->OwnerPhone = Reader->GetString(6);

				Label_Data_Pet_Name->Text = pet->PetName;
				Label_Data_Pet_Age->Text = pet->PetAge;
				Label_Data_Pet_Type->Text = pet->PetType;
				Label_Data_Pet_Breed->Text = pet->PetBreed;
				Label_Data_Owner_Name->Text = pet->OwnerName;
				Label_Data_Owner_Phone->Text = pet->OwnerPhone;
				
				return;
				//this->Close();
			}
			else {
				MessageBox::Show("No more pets found in database!", "Max pets found", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ errr) {
			MessageBox::Show("Database failed to connect!", "Database connection error", MessageBoxButtons::OK);
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Previous button

		try {
			if (currentPet - 1 > 0)
			{
				currentPet -= 1;
			}

			SqlConnection sql_Connection(string_Connection);
			sql_Connection.Open();

			SqlCommand Command(sql_Query, % sql_Connection);
			Command.Parameters->AddWithValue("@petid", currentPet);

			SqlDataReader^ Reader = Command.ExecuteReader();
			if (Reader->Read()) {
				pet = gcnew Pet;
				pet->id = Reader->GetInt32(0);
				pet->PetName = Reader->GetString(1);
				pet->PetAge = Reader->GetString(2);
				pet->PetType = Reader->GetString(3);
				pet->PetBreed = Reader->GetString(4);
				pet->OwnerName = Reader->GetString(5);
				pet->OwnerPhone = Reader->GetString(6);

				Label_Data_Pet_Name->Text = pet->PetName;
				Label_Data_Pet_Age->Text = pet->PetAge;
				Label_Data_Pet_Type->Text = pet->PetType;
				Label_Data_Pet_Breed->Text = pet->PetBreed;
				Label_Data_Owner_Name->Text = pet->OwnerName;
				Label_Data_Owner_Phone->Text = pet->OwnerPhone;

				return;
				//this->Close();
			}
			else {
				MessageBox::Show("No more pets found in database!", "Max pets found", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ errr) {
			MessageBox::Show("Database failed to connect!", "Database connection error", MessageBoxButtons::OK);
		}
	}

	private: System::Void Label_Data_Pet_Name_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Label_Data_Pet_Age_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Label_Data_Owner_Name_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Label_Data_Owner_Phone_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void Label_Data_Pet_Type_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	
};
}
