#pragma once
#include "MyForm.h"
namespace Here {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxUserName;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ buttonLogin;
	protected:

	private:
		String^ userName = "Alatan";
		String^ Passowrd = "1956220";


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(103, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 129);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(162, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(136, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUserName->Location = System::Drawing::Point(308, 190);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(217, 38);
			this->textBoxUserName->TabIndex = 3;
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(308, 257);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(217, 38);
			this->textBoxPassword->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(391, 307);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Forget Password";
			// 
			// buttonLogin
			// 
			this->buttonLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Georgia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->Location = System::Drawing::Point(308, 357);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(217, 61);
			this->buttonLogin->TabIndex = 6;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(732, 509);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
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

	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Credentail^ obj1 = gcnew Credentail;

		if (textBoxUserName->Text == obj1->getUserName() && textBoxPassword->Text == obj1->getPassword())
		{
			String^ name = textBoxUserName->Text;
			String^ Psd = textBoxPassword->Text;
			MessageBox::Show("Login Succefull   User Name:" + name + " Password " + Psd);
			MyForm obj1;

			this->Hide();// Hide login form

			obj.ShowDialog();// open Home Form.
		}
		else if (textBoxUserName->Text != userName || textBoxPassword->Text != Passowrd)
		{
			MessageBox::Show("Invalid User or Password ");

		}


	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};


}
