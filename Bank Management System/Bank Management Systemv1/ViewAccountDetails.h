#pragma once
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
	/// Summary for ViewAccountDetails
	/// </summary>
	public ref class ViewAccountDetails : public System::Windows::Forms::Form
	{
	public:
		ViewAccountDetails(void)
		{
			InitializeComponent();
			this->table = gcnew DataTable;
			
			
			this->Controls->Add(this->dataGridView1);
			this->bs = gcnew BindingSource;
			this->bs->DataSource = this->table;
			this->initDataGrid();

			
			initDataRow();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewAccountDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	/*
	 * Defining source for dataGridView
	 	*/
	public: DataTable ^table;

	public: BindingSource ^bs;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tb;

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewAccountDetails::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Helvetica", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1068, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Show Details";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewAccountDetails::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(577, 527);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewAccountDetails::dataGridView1_CellContentClick);
			// 
			// ViewAccountDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Name = L"ViewAccountDetails";
			this->Text = L"ViewAccountDetails";
			this->Load += gcnew System::EventHandler(this, &ViewAccountDetails::ViewAccountDetails_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
public: void initDataGrid()
{



	table->Columns->Add(" Username");
	table->Columns->Add(" Password");
	table->Columns->Add(" Account Number ");
	table->Columns->Add(" Account Balance ");



	this->dataGridView1->DataSource = this->bs;

}

	public: void initDataRow()
	{

	}
	

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {


	}
			 
		// coment down laters
			void addDataToGrid()
		{
				/*
				 *	This Function is used to go through the items.txt file
				 *	And find the respective item through the item id, then the required
				 *  corespondng values are sent to the DataTable
				 *
				
				*/
			
				int count = 0;
				ifstream in;
				bool flag = true;
				count = file_counter();
				user_data *n = NULL;
				n = new user_data[count];
				in.open("accounts.txt", ios::in);
				int i = 0;
				string nam, pass, pinn, bal;
				while (in)
				{
					if (in)
					{
						in >> nam;
						in >> pass;
						in >> pinn;
						in >> bal;

						String^ ID = msclr::interop::marshal_as<String^>(nam);
						String^ Pass = msclr::interop::marshal_as<String^>(pass);
						String^ pin1 = msclr::interop::marshal_as<String^>(pinn);
						String^ balance1 = msclr::interop::marshal_as<String^>(bal);
						table->Rows->Add(ID, Pass, pin1, balance1);
	
						i++;
					}

				}
				in.close();
		
				
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		addDataToGrid();




	}

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	//username --password--acount num--balance|| colunm

	//table->Rows->Add("mubeen", "malang", 121, 22.0);

}
private: System::Void ViewAccountDetails_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}