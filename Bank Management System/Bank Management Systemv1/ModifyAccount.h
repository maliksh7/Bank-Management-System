#pragma once
#include <string>
#ifndef BC
#define BC
#include "BankClass.h"
#endif // !BC
#include <msclr/marshal_cppstd.h>

namespace BankManagementSystemv1 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModifyAccount
	/// </summary>
	public ref class ModifyAccount : public System::Windows::Forms::Form
	{
	public:
		ModifyAccount(void)
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
		~ModifyAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;



	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyAccount::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Helvetica", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(127, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(447, 38);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Enter User Account Number";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Helvetica", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(653, 216);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(402, 46);
			this->textBox2->TabIndex = 17;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &ModifyAccount::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Helvetica", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(486, 304);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(402, 46);
			this->textBox1->TabIndex = 22;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ModifyAccount::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Helvetica", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(486, 380);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(402, 46);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &ModifyAccount::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Helvetica", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(581, 529);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(288, 49);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Modify";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ModifyAccount::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Helvetica", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(297, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 32);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Username";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Helvetica", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(297, 394);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(144, 32);
			this->label6->TabIndex = 30;
			this->label6->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Helvetica", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(128, 679);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(561, 32);
			this->label4->TabIndex = 32;
			this->label4->Text = L"Note : Ignore Fields you dont  want to Modify";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Helvetica", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(928, 332);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(139, 26);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"Modify User";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ModifyAccount::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Helvetica", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(928, 394);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(188, 26);
			this->checkBox2->TabIndex = 34;
			this->checkBox2->Text = L"Modify Password";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &ModifyAccount::checkBox2_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Helvetica", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(427, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 45);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Modify User Details";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Helvetica", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1306, 843);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(288, 49);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ModifyAccount::button1_Click);
			// 
			// ModifyAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1854, 1061);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Name = L"ModifyAccount";
			this->Text = L"ModifyAccount";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
//check box user

	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ accnum = this->textBox2->Text;
	String ^Uname = this->textBox1->Text;
	String ^Upass = this->textBox3->Text;
	int accno = System::Convert::ToInt32(accnum); //converting to sys str
	string nm = msclr::interop::marshal_as<string>(Uname);
	string np = msclr::interop::marshal_as<string>(Upass);

	if (newAdmin.modifyAccount(accno, nm, np, this->checkBox1->Checked, this->checkBox2->Checked))
	{
		MessageBox::Show("Modified Successfully !");
	}
	else {
		MessageBox::Show("Sorry invalid Choice!");

	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	//check box pass
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	//acount num text box
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//uname box
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	//pass box
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
