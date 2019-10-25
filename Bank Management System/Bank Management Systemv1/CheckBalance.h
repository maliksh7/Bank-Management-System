#pragma once
#ifndef BC
#define BC
#include "BankClass.h"
#endif // !BC
namespace BankManagementSystemv1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckBalance
	/// </summary>
	public ref class CheckBalance : public System::Windows::Forms::Form
	{
	public:
		CheckBalance(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//checkBal();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckBalance()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckBalance::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MintCream;
			this->label3->Location = System::Drawing::Point(165, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(436, 36);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Your Cuurent Balance is Rs";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(635, 153);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(402, 46);
			this->textBox2->TabIndex = 15;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &CheckBalance::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(635, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 41);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Check Current Balance";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CheckBalance::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(625, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(423, 56);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Balance Section !";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->button2->Location = System::Drawing::Point(1398, 854);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(193, 41);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CheckBalance::button2_Click);
			// 
			// CheckBalance
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1699, 1013);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Name = L"CheckBalance";
			this->Text = L"CheckBalance";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		String^  checkBal() {
			String ^ strbal = textBox2->Text;
			string passU = newUser.getPass();

			double balance = newUser.check_balance(passU);

			String ^bal2 = System::Convert::ToString(balance);
			return bal2;
		}

	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

		//Userclass *newUser = new Userclass;

		

		//if () {
	//		//this->Hide();
		///	BankingMenu ^form = gcnew BankingMenu;
		///	//form->Show();
			
		//}/
	//	else {
	//		MessageBox::Show("Try Again");
	//	}



	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^bal = checkBal();
		this->textBox2->Text = bal;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
