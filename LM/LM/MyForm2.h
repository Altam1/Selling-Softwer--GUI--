#pragma once
#include "MyForm.h"

namespace LM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Button^ buttonLogin;

	private:

		String^ userName = "Alatan";
		String^ Passowrd = "1956220";
	private: System::Windows::Forms::Label^ label3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(382, 118);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"SimSun", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUserName->Location = System::Drawing::Point(207, 190);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(192, 38);
			this->textBoxUserName->TabIndex = 2;
			this->textBoxUserName->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBoxUserName_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(56, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"SimSun", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxPassword->Location = System::Drawing::Point(207, 260);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(192, 38);
			this->textBoxPassword->TabIndex = 2;
			this->textBoxPassword->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBoxPassword_TextChanged);
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::White;
			this->buttonLogin->DialogResult = System::Windows::Forms::DialogResult::No;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"SimSun", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->buttonLogin->ForeColor = System::Drawing::Color::Black;
			this->buttonLogin->Location = System::Drawing::Point(207, 354);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(192, 57);
			this->buttonLogin->TabIndex = 3;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &MyForm2::buttonLogin_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(265, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Forget Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(464, 436);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm2";
			this->Text = L"Login Page";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		ref class Credentail
		{
		private:
			System::String^ userName = "Alatan";
			System::String^ Password = "1956220";

		public:

			System::String^ getUserName()
			{
				return this->userName;
			}

			System::String^ getPassword()
			{
				return this->Password;
			}
		};

#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {

	Credentail^ obj1 = gcnew Credentail;
	if (textBoxUserName->Text == obj1->getUserName() && textBoxPassword->Text == obj1->getPassword())
	{
		String^ name = textBoxUserName->Text;
		String^ Psd = textBoxPassword->Text;
		MessageBox::Show("Login Succefull");
		MyForm obj;
		this->Hide();//Hide login form 

		obj.ShowDialog();
	}
	else if (textBoxUserName->Text !=userName|| textBoxPassword->Text != Passowrd)

	{
		MessageBox::Show("Invalid User or Password ");

	}

}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Please Contact Customer Service: 13162535659 . alatanalatan1234@gmail.com");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBoxUserName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
