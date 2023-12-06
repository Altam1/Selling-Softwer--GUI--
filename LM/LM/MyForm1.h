#pragma once

namespace LM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ btn_home;
	private:

	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(380, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(48, 49);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// btn_home
			// 
			this->btn_home->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_home->FlatAppearance->BorderSize = 0;
			this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_home->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_home->ForeColor = System::Drawing::Color::White;
			this->btn_home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.Image")));
			this->btn_home->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_home->Location = System::Drawing::Point(136, 418);
			this->btn_home->Margin = System::Windows::Forms::Padding(3, 11, 3, 3);
			this->btn_home->Name = L"btn_home";
			this->btn_home->Size = System::Drawing::Size(190, 44);
			this->btn_home->TabIndex = 2;
			this->btn_home->Text = L"Add";
			this->btn_home->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_home->UseVisualStyleBackColor = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(-1, 91);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(205, 30);
			this->label37->TabIndex = 3;
			this->label37->Text = L"Student Number:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(225, 37);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(210, 91);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(227, 39);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(209, 135);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(227, 39);
			this->panel2->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(225, 37);
			this->textBox2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(23, 135);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 30);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Student Name:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(156, 236);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(152, 383);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(163, 24);
			this->linkLabel1->TabIndex = 9;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Upload a Picture ";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm1::linkLabel1_LinkClicked);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(440, 488);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->btn_home);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Georgia", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddStudent";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}
