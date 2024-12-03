#pragma once

namespace CppCLR_WinFormsProject1qwer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phonenumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Adress;









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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phonenumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(495, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 48);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(495, 194);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 48);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(495, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 48);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Highlight;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(495, 140);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(195, 48);
			this->button5->TabIndex = 33;
			this->button5->Text = L"Add ";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(269, 285);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 65);
			this->textBox4->TabIndex = 32;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(269, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 26);
			this->textBox3->TabIndex = 31;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(269, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 26);
			this->textBox2->TabIndex = 30;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(269, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 26);
			this->textBox1->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(171, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 27);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(77, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 27);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Phone Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(158, 283);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 27);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Adress";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(67, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 27);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Customer Name";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-6, -12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(824, 118);
			this->panel1->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(293, 69);
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
			this->label1->Location = System::Drawing::Point(195, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(391, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Car Rental Mangment System";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Name, this->Email,
					this->Phonenumber, this->Adress
			});
			this->dataGridView1->Location = System::Drawing::Point(46, 373);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(666, 80);
			this->dataGridView1->TabIndex = 38;
			// 
			// Name
			// 
			this->Name->HeaderText = L"CustomerName";
			this->Name->MinimumWidth = 15;
			this->Name->Name = L"Name";
			this->Name->Width = 150;
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->MinimumWidth = 8;
			this->Email->Name = L"Email";
			this->Email->Width = 150;
			// 
			// Phonenumber
			// 
			this->Phonenumber->HeaderText = L"PhoneNumber";
			this->Phonenumber->MinimumWidth = 15;
			this->Phonenumber->Name = L"Phonenumber";
			this->Phonenumber->Width = 150;
			// 
			// Adress
			// 
			this->Adress->HeaderText = L"Adress";
			this->Adress->MinimumWidth = 8;
			this->Adress->Name = L"Adress";
			this->Adress->Width = 150;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(812, 438);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			
			this->Text = L"MyForm5";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
