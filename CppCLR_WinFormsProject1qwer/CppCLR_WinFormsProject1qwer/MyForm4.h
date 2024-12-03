#pragma once

namespace CppCLR_WinFormsProject1qwer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Milage;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Modal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Milage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(230, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 26);
			this->textBox2->TabIndex = 40;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(89, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 30);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Car ID";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"SUV", L"Sedan", L"Pajero" });
			this->comboBox1->Location = System::Drawing::Point(230, 378);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(138, 28);
			this->comboBox1->TabIndex = 38;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(62, 376);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 30);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Type";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Modal,
					this->Brand, this->Color, this->Milage
			});
			this->dataGridView1->Location = System::Drawing::Point(413, 155);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(603, 171);
			this->dataGridView1->TabIndex = 36;
			// 
			// Modal
			// 
			this->Modal->HeaderText = L"Modal of car";
			this->Modal->MinimumWidth = 8;
			this->Modal->Name = L"Modal";
			this->Modal->Width = 150;
			// 
			// Brand
			// 
			this->Brand->HeaderText = L"Brand";
			this->Brand->MinimumWidth = 8;
			this->Brand->Name = L"Brand";
			this->Brand->Width = 150;
			// 
			// Color
			// 
			this->Color->HeaderText = L"Color";
			this->Color->MinimumWidth = 8;
			this->Color->Name = L"Color";
			this->Color->Width = 150;
			// 
			// Milage
			// 
			this->Milage->HeaderText = L"Milaeage";
			this->Milage->MinimumWidth = 8;
			this->Milage->Name = L"Milage";
			this->Milage->Width = 150;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::Highlight;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(618, 370);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 36);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(760, 370);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 36);
			this->button3->TabIndex = 34;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(911, 370);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 36);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(456, 370);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 36);
			this->button1->TabIndex = 32;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(230, 240);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(138, 26);
			this->textBox5->TabIndex = 31;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(230, 284);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(138, 26);
			this->textBox4->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(230, 333);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(138, 26);
			this->textBox3->TabIndex = 29;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 189);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 26);
			this->textBox1->TabIndex = 28;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(67, 240);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 30);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Color";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 284);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 30);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Mileage";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(62, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 30);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Brand";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 30);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Model of Car";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1026, 118);
			this->panel1->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(424, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Car Managment";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(318, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Car Rental Mangment System";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 415);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
