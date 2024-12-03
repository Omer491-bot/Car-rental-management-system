#pragma once

namespace CppCLR_WinFormsProject1qwer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DriverID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Licence;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column1 = gcnew System::Windows::Forms::DataGridViewTextBoxColumn();

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DriverID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Licence = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Yes", L"No" });
			this->comboBox1->Location = System::Drawing::Point(195, 295);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 28);
			this->comboBox1->TabIndex = 45;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->DriverID,
					this->Name, this->Age, this->Licence, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(422, 153);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(503, 150);
			this->dataGridView1->TabIndex = 44;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm6::dataGridView1_CellContentClick);
			// 
			// DriverID
			// 
			this->DriverID->HeaderText = L"DriverID";
			this->DriverID->MinimumWidth = 10;
			this->DriverID->Name = L"DriverID";
			this->DriverID->Width = 150;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->MinimumWidth = 8;
			this->Name->Name = L"Name";
			this->Name->Width = 150;
			// 
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->MinimumWidth = 8;
			this->Age->Name = L"Age";
			this->Age->Width = 150;
			// 
			// Licence
			// 
			this->Licence->HeaderText = L"licence";
			this->Licence->MinimumWidth = 10;
			this->Licence->Name = L"Licence";
			this->Licence->Width = 150;
			// 
			// Adress
			// 
			this->Adress->HeaderText = L"Adress";
			this->Adress->MinimumWidth = 10;
			this->Adress->Name = L"Adress";
			this->Adress->Width = 150;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(195, 343);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(196, 59);
			this->textBox5->TabIndex = 43;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 249);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 26);
			this->textBox3->TabIndex = 42;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 26);
			this->textBox2->TabIndex = 41;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 26);
			this->textBox1->TabIndex = 40;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(97, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 30);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(119, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 30);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Age";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(88, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 30);
			this->label4->TabIndex = 37;
			this->label4->Text = L"licence";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 30);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Home Adress";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(67, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 30);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Driver ID";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(932, 117);
			this->panel1->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(347, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(212, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Customer Mangment";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(252, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Car Rental Mangment System";
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(935, 453);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			



			this->Text = L"MyForm6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
