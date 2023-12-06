#pragma once
#include"MyForm1.h"

namespace LM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_title_bar;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pn_st_bar;
	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_con;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_home;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_st;
	private: System::Windows::Forms::Button^ btn_books;
	private: System::Windows::Forms::Button^ btn_cat;
	private: System::Windows::Forms::Button^ btn_sell;
	private: System::Windows::Forms::Button^ btn_borrow;









	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ pn_home;
	private: System::Windows::Forms::Panel^ pn_borrow;
	private: System::Windows::Forms::Panel^ pn_sell;
	private: System::Windows::Forms::Panel^ pn_cat;
	private: System::Windows::Forms::Panel^ pn_books;
	private: System::Windows::Forms::Panel^ Pn_student;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
private: System::Windows::Forms::Panel^ pn_info;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ panel11;

private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;





























































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->btn_st = (gcnew System::Windows::Forms::Button());
			this->btn_books = (gcnew System::Windows::Forms::Button());
			this->btn_cat = (gcnew System::Windows::Forms::Button());
			this->btn_sell = (gcnew System::Windows::Forms::Button());
			this->btn_borrow = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pn_info = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_con = (gcnew System::Windows::Forms::Panel());
			this->Pn_student = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pn_borrow = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pn_sell = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pn_cat = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pn_books = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pn_title_bar->SuspendLayout();
			this->pn_st_bar->SuspendLayout();
			this->pn_nav_bar->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pn_info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_con->SuspendLayout();
			this->Pn_student->SuspendLayout();
			this->panel11->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->pn_home->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->pn_borrow->SuspendLayout();
			this->pn_sell->SuspendLayout();
			this->pn_cat->SuspendLayout();
			this->pn_books->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_title_bar
			// 
			this->pn_title_bar->BackColor = System::Drawing::SystemColors::ControlText;
			this->pn_title_bar->Controls->Add(this->button4);
			this->pn_title_bar->Controls->Add(this->button3);
			this->pn_title_bar->Controls->Add(this->button12);
			this->pn_title_bar->Controls->Add(this->label1);
			this->pn_title_bar->Controls->Add(this->button2);
			this->pn_title_bar->Controls->Add(this->button1);
			this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_title_bar->Location = System::Drawing::Point(0, 0);
			this->pn_title_bar->Name = L"pn_title_bar";
			this->pn_title_bar->Size = System::Drawing::Size(1034, 32);
			this->pn_title_bar->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 30);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(960, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(38, 31);
			this->button3->TabIndex = 0;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(37, -2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 32);
			this->button12->TabIndex = 0;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlText;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(394, -3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 35);
			this->label1->TabIndex = 1;
			this->label1->Text = L"生鲜社区团购 manager";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(926, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 31);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(996, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 32);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(137, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 41);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_st_bar->Controls->Add(this->label8);
			this->pn_st_bar->Controls->Add(this->label6);
			this->pn_st_bar->Controls->Add(this->label7);
			this->pn_st_bar->Controls->Add(this->label9);
			this->pn_st_bar->Controls->Add(this->label5);
			this->pn_st_bar->Controls->Add(this->label4);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 499);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(1034, 58);
			this->pn_st_bar->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(681, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(170, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L" display notifications ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label6->Location = System::Drawing::Point(341, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 29);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Manager";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(229, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 29);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Usability:";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(956, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 20);
			this->label9->TabIndex = 2;
			this->label9->Text = L"V 1.0.0";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label5->Location = System::Drawing::Point(132, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 29);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Alatan";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 29);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Username:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_nav_bar->Controls->Add(this->flowLayoutPanel1);
			this->pn_nav_bar->Controls->Add(this->panel1);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_nav_bar->Location = System::Drawing::Point(0, 32);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(200, 467);
			this->pn_nav_bar->TabIndex = 2;
			this->pn_nav_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_nav_bar_Paint);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::DarkGray;
			this->flowLayoutPanel1->Controls->Add(this->btn_home);
			this->flowLayoutPanel1->Controls->Add(this->btn_st);
			this->flowLayoutPanel1->Controls->Add(this->btn_books);
			this->flowLayoutPanel1->Controls->Add(this->btn_cat);
			this->flowLayoutPanel1->Controls->Add(this->btn_sell);
			this->flowLayoutPanel1->Controls->Add(this->btn_borrow);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->ForeColor = System::Drawing::Color::Gray;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 72);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(200, 395);
			this->flowLayoutPanel1->TabIndex = 1;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// btn_home
			// 
			this->btn_home->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_home->FlatAppearance->BorderSize = 0;
			this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_home->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_home->ForeColor = System::Drawing::Color::White;
			this->btn_home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.Image")));
			this->btn_home->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_home->Location = System::Drawing::Point(3, 10);
			this->btn_home->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_home->Name = L"btn_home";
			this->btn_home->Size = System::Drawing::Size(128, 47);
			this->btn_home->TabIndex = 0;
			this->btn_home->Text = L"Home";
			this->btn_home->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &MyForm::btn_home_Click);
			// 
			// btn_st
			// 
			this->btn_st->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_st->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_st->FlatAppearance->BorderSize = 0;
			this->btn_st->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_st->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_st->ForeColor = System::Drawing::Color::White;
			this->btn_st->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_st.Image")));
			this->btn_st->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_st->Location = System::Drawing::Point(3, 70);
			this->btn_st->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_st->Name = L"btn_st";
			this->btn_st->Size = System::Drawing::Size(131, 47);
			this->btn_st->TabIndex = 1;
			this->btn_st->Text = L"Customers";
			this->btn_st->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_st->UseVisualStyleBackColor = false;
			this->btn_st->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// btn_books
			// 
			this->btn_books->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_books->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_books->FlatAppearance->BorderSize = 0;
			this->btn_books->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_books->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_books->ForeColor = System::Drawing::Color::White;
			this->btn_books->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_books.Image")));
			this->btn_books->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_books->Location = System::Drawing::Point(3, 130);
			this->btn_books->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_books->Name = L"btn_books";
			this->btn_books->Size = System::Drawing::Size(131, 47);
			this->btn_books->TabIndex = 2;
			this->btn_books->Text = L"Fruits";
			this->btn_books->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_books->UseVisualStyleBackColor = false;
			this->btn_books->Click += gcnew System::EventHandler(this, &MyForm::btn_books_Click);
			// 
			// btn_cat
			// 
			this->btn_cat->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_cat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_cat->FlatAppearance->BorderSize = 0;
			this->btn_cat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cat->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_cat->ForeColor = System::Drawing::Color::White;
			this->btn_cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cat.Image")));
			this->btn_cat->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_cat->Location = System::Drawing::Point(3, 190);
			this->btn_cat->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_cat->Name = L"btn_cat";
			this->btn_cat->Size = System::Drawing::Size(131, 47);
			this->btn_cat->TabIndex = 3;
			this->btn_cat->Text = L"Vegetables";
			this->btn_cat->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_cat->UseVisualStyleBackColor = false;
			this->btn_cat->Click += gcnew System::EventHandler(this, &MyForm::btn_cat_Click);
			// 
			// btn_sell
			// 
			this->btn_sell->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_sell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_sell->FlatAppearance->BorderSize = 0;
			this->btn_sell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sell->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sell->ForeColor = System::Drawing::Color::White;
			this->btn_sell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sell.Image")));
			this->btn_sell->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_sell->Location = System::Drawing::Point(3, 250);
			this->btn_sell->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_sell->Name = L"btn_sell";
			this->btn_sell->Size = System::Drawing::Size(131, 47);
			this->btn_sell->TabIndex = 4;
			this->btn_sell->Text = L"Sell";
			this->btn_sell->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_sell->UseVisualStyleBackColor = false;
			this->btn_sell->Click += gcnew System::EventHandler(this, &MyForm::btn_sell_Click);
			// 
			// btn_borrow
			// 
			this->btn_borrow->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_borrow->FlatAppearance->BorderSize = 0;
			this->btn_borrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_borrow->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_borrow->ForeColor = System::Drawing::Color::White;
			this->btn_borrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_borrow.Image")));
			this->btn_borrow->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_borrow->Location = System::Drawing::Point(3, 310);
			this->btn_borrow->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_borrow->Name = L"btn_borrow";
			this->btn_borrow->Size = System::Drawing::Size(131, 47);
			this->btn_borrow->TabIndex = 5;
			this->btn_borrow->Text = L"Buy";
			this->btn_borrow->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_borrow->UseVisualStyleBackColor = false;
			this->btn_borrow->Click += gcnew System::EventHandler(this, &MyForm::btn_borrow_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pn_info);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 72);
			this->panel1->TabIndex = 0;
			// 
			// pn_info
			// 
			this->pn_info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_info->Controls->Add(this->label2);
			this->pn_info->Controls->Add(this->label3);
			this->pn_info->Controls->Add(this->pictureBox1);
			this->pn_info->Location = System::Drawing::Point(0, 0);
			this->pn_info->Name = L"pn_info";
			this->pn_info->Size = System::Drawing::Size(143, 72);
			this->pn_info->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(11, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Manager";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"阿拉坦";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 56);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pn_con
			// 
			this->pn_con->BackColor = System::Drawing::Color::Gainsboro;
			this->pn_con->Controls->Add(this->Pn_student);
			this->pn_con->Controls->Add(this->pn_home);
			this->pn_con->Controls->Add(this->pn_borrow);
			this->pn_con->Controls->Add(this->pn_sell);
			this->pn_con->Controls->Add(this->pn_cat);
			this->pn_con->Controls->Add(this->pn_books);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pn_con->Location = System::Drawing::Point(200, 32);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(834, 467);
			this->pn_con->TabIndex = 3;
			// 
			// Pn_student
			// 
			this->Pn_student->Controls->Add(this->panel11);
			this->Pn_student->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Pn_student->Location = System::Drawing::Point(0, 0);
			this->Pn_student->Name = L"Pn_student";
			this->Pn_student->Size = System::Drawing::Size(834, 467);
			this->Pn_student->TabIndex = 1;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Gainsboro;
			this->panel11->Controls->Add(this->flowLayoutPanel3);
			this->panel11->Controls->Add(this->button13);
			this->panel11->Controls->Add(this->button14);
			this->panel11->Controls->Add(this->button15);
			this->panel11->Controls->Add(this->button16);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(834, 467);
			this->panel11->TabIndex = 2;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::Color::Gray;
			this->flowLayoutPanel3->Controls->Add(this->panel12);
			this->flowLayoutPanel3->Controls->Add(this->panel13);
			this->flowLayoutPanel3->Controls->Add(this->panel14);
			this->flowLayoutPanel3->Controls->Add(this->panel15);
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel3->ForeColor = System::Drawing::Color::Black;
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(10);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(834, 362);
			this->flowLayoutPanel3->TabIndex = 2;
			// 
			// panel12
			// 
			this->panel12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel12->BackColor = System::Drawing::Color::Violet;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->pictureBox11);
			this->panel12->Controls->Add(this->pictureBox10);
			this->panel12->Controls->Add(this->label15);
			this->panel12->Controls->Add(this->label31);
			this->panel12->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel12->Location = System::Drawing::Point(10, 10);
			this->panel12->Margin = System::Windows::Forms::Padding(10);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(278, 150);
			this->panel12->TabIndex = 0;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(-1, 99);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(167, 50);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 3;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(-1, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(93, 96);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(92, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(117, 32);
			this->label15->TabIndex = 2;
			this->label15->Text = L"ID：6220 ";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Black;
			this->label31->Location = System::Drawing::Point(98, 49);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(167, 30);
			this->label31->TabIndex = 2;
			this->label31->Text = L"姓名： alatan";
			this->label31->Click += gcnew System::EventHandler(this, &MyForm::label31_Click);
			// 
			// panel13
			// 
			this->panel13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel13->BackColor = System::Drawing::Color::White;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->pictureBox12);
			this->panel13->Controls->Add(this->pictureBox13);
			this->panel13->Controls->Add(this->label32);
			this->panel13->Controls->Add(this->label33);
			this->panel13->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel13->Location = System::Drawing::Point(308, 10);
			this->panel13->Margin = System::Windows::Forms::Padding(10);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(278, 150);
			this->panel13->TabIndex = 1;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(-1, 99);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(167, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(-1, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(93, 96);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Black;
			this->label32->Location = System::Drawing::Point(92, 16);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(130, 32);
			this->label32->TabIndex = 2;
			this->label32->Text = L"ID：96046 ";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(98, 49);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(175, 30);
			this->label33->TabIndex = 2;
			this->label33->Text = L"姓名： 汪海航";
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::label33_Click);
			// 
			// panel14
			// 
			this->panel14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->pictureBox14);
			this->panel14->Controls->Add(this->pictureBox15);
			this->panel14->Controls->Add(this->label34);
			this->panel14->Controls->Add(this->label35);
			this->panel14->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel14->Location = System::Drawing::Point(10, 180);
			this->panel14->Margin = System::Windows::Forms::Padding(10);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(278, 150);
			this->panel14->TabIndex = 2;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(-1, 99);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(167, 50);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 3;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(-1, 2);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(93, 96);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Black;
			this->label34->Location = System::Drawing::Point(92, 16);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(156, 32);
			this->label34->TabIndex = 2;
			this->label34->Text = L"ID：1956222 ";
			this->label34->Click += gcnew System::EventHandler(this, &MyForm::label34_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(98, 49);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(175, 30);
			this->label35->TabIndex = 2;
			this->label35->Text = L"姓名： 利姆露";
			// 
			// panel15
			// 
			this->panel15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->pictureBox16);
			this->panel15->Controls->Add(this->pictureBox17);
			this->panel15->Controls->Add(this->label36);
			this->panel15->Controls->Add(this->label37);
			this->panel15->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel15->Location = System::Drawing::Point(308, 180);
			this->panel15->Margin = System::Windows::Forms::Padding(10);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(278, 150);
			this->panel15->TabIndex = 3;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(-1, 99);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(167, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 3;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(-1, 2);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(93, 96);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 1;
			this->pictureBox17->TabStop = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium Cond", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Black;
			this->label36->Location = System::Drawing::Point(92, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(156, 32);
			this->label36->TabIndex = 2;
			this->label36->Text = L"ID：2256223 ";
			this->label36->Click += gcnew System::EventHandler(this, &MyForm::label36_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(98, 49);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(149, 30);
			this->label37->TabIndex = 2;
			this->label37->Text = L"姓名： 娜娜";
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button13->BackColor = System::Drawing::Color::LightGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button13->Location = System::Drawing::Point(560, 388);
			this->button13->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(110, 73);
			this->button13->TabIndex = 1;
			this->button13->Text = L"details";
			this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button14->BackColor = System::Drawing::Color::LightGray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button14->Location = System::Drawing::Point(426, 388);
			this->button14->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(111, 73);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Edit";
			this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button15->BackColor = System::Drawing::Color::LightGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button15->Location = System::Drawing::Point(290, 392);
			this->button15->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(113, 69);
			this->button15->TabIndex = 1;
			this->button15->Text = L"delete";
			this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button16->BackColor = System::Drawing::Color::LightGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button16->Location = System::Drawing::Point(164, 391);
			this->button16->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 69);
			this->button16->TabIndex = 1;
			this->button16->Text = L"Add";
			this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// pn_home
			// 
			this->pn_home->Controls->Add(this->panel2);
			this->pn_home->Controls->Add(this->flowLayoutPanel2);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(834, 467);
			this->pn_home->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 362);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(834, 105);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button10->BackColor = System::Drawing::Color::LightGray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button10->Location = System::Drawing::Point(622, 25);
			this->button10->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(98, 73);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Add";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->BackColor = System::Drawing::Color::LightGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button9->Location = System::Drawing::Point(497, 26);
			this->button9->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(110, 73);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Add";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button8->BackColor = System::Drawing::Color::LightGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button8->Location = System::Drawing::Point(371, 26);
			this->button8->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 73);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Add";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->BackColor = System::Drawing::Color::LightGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(243, 26);
			this->button7->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 73);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Add";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->BackColor = System::Drawing::Color::LightGray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(114, 25);
			this->button6->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(114, 73);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Add";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->panel3);
			this->flowLayoutPanel2->Controls->Add(this->panel4);
			this->flowLayoutPanel2->Controls->Add(this->panel5);
			this->flowLayoutPanel2->Controls->Add(this->panel6);
			this->flowLayoutPanel2->Controls->Add(this->panel7);
			this->flowLayoutPanel2->Controls->Add(this->panel8);
			this->flowLayoutPanel2->Controls->Add(this->panel9);
			this->flowLayoutPanel2->Controls->Add(this->panel10);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(10);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(834, 362);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::Silver;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(10, 10);
			this->panel3->Margin = System::Windows::Forms::Padding(10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(193, 99);
			this->panel3->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(115, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(73, 58);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 30);
			this->label16->TabIndex = 2;
			this->label16->Text = L"100";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(3, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 20);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Students number";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel4->BackColor = System::Drawing::Color::Silver;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(223, 10);
			this->panel4->Margin = System::Windows::Forms::Padding(10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(193, 99);
			this->panel4->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(115, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(73, 58);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 30);
			this->label17->TabIndex = 2;
			this->label17->Text = L"100";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(3, 61);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(118, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Books number";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel5->BackColor = System::Drawing::Color::Silver;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(436, 10);
			this->panel5->Margin = System::Windows::Forms::Padding(10);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(193, 99);
			this->panel5->TabIndex = 2;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(115, -1);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(73, 58);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(54, 30);
			this->label19->TabIndex = 2;
			this->label19->Text = L"100";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(3, 61);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(109, 20);
			this->label20->TabIndex = 2;
			this->label20->Text = L"sales number";
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BackColor = System::Drawing::Color::Silver;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(10, 129);
			this->panel6->Margin = System::Windows::Forms::Padding(10);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(193, 99);
			this->panel6->TabIndex = 3;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(115, -1);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(73, 58);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 30);
			this->label21->TabIndex = 2;
			this->label21->Text = L"100";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(3, 61);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(89, 20);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Borrowing";
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BackColor = System::Drawing::Color::Silver;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Controls->Add(this->label23);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(223, 129);
			this->panel7->Margin = System::Windows::Forms::Padding(10);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(193, 99);
			this->panel7->TabIndex = 4;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(115, -1);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(73, 58);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(54, 30);
			this->label23->TabIndex = 2;
			this->label23->Text = L"100";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(3, 61);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(140, 20);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Students number";
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::Color::Silver;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label26);
			this->panel8->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel8->Location = System::Drawing::Point(436, 129);
			this->panel8->Margin = System::Windows::Forms::Padding(10);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(193, 99);
			this->panel8->TabIndex = 5;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(115, -1);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(73, 58);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(54, 30);
			this->label25->TabIndex = 2;
			this->label25->Text = L"100";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Black;
			this->label26->Location = System::Drawing::Point(3, 61);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(140, 20);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Students number";
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BackColor = System::Drawing::Color::Silver;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->pictureBox8);
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->label28);
			this->panel9->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel9->Location = System::Drawing::Point(10, 248);
			this->panel9->Margin = System::Windows::Forms::Padding(10);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(193, 99);
			this->panel9->TabIndex = 6;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(115, -1);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(73, 58);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(54, 30);
			this->label27->TabIndex = 2;
			this->label27->Text = L"100";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Black;
			this->label28->Location = System::Drawing::Point(3, 61);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(140, 20);
			this->label28->TabIndex = 2;
			this->label28->Text = L"Students number";
			// 
			// panel10
			// 
			this->panel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel10->BackColor = System::Drawing::Color::Silver;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->pictureBox9);
			this->panel10->Controls->Add(this->label29);
			this->panel10->Controls->Add(this->label30);
			this->panel10->Font = (gcnew System::Drawing::Font(L"Georgia", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel10->Location = System::Drawing::Point(223, 248);
			this->panel10->Margin = System::Windows::Forms::Padding(10);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(193, 99);
			this->panel10->TabIndex = 7;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(115, -1);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(73, 58);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Georgia", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 30);
			this->label29->TabIndex = 2;
			this->label29->Text = L"100";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Georgia", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::Black;
			this->label30->Location = System::Drawing::Point(3, 61);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(140, 20);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Students number";
			// 
			// pn_borrow
			// 
			this->pn_borrow->Controls->Add(this->label11);
			this->pn_borrow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_borrow->Location = System::Drawing::Point(0, 0);
			this->pn_borrow->Name = L"pn_borrow";
			this->pn_borrow->Size = System::Drawing::Size(834, 467);
			this->pn_borrow->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::LightGray;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(369, 216);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(113, 35);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Borrow";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pn_sell
			// 
			this->pn_sell->Controls->Add(this->label12);
			this->pn_sell->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sell->Location = System::Drawing::Point(0, 0);
			this->pn_sell->Name = L"pn_sell";
			this->pn_sell->Size = System::Drawing::Size(834, 467);
			this->pn_sell->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::LightGray;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(369, 216);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 35);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Sell";
			this->label12->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pn_cat
			// 
			this->pn_cat->Controls->Add(this->label13);
			this->pn_cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_cat->Location = System::Drawing::Point(0, 0);
			this->pn_cat->Name = L"pn_cat";
			this->pn_cat->Size = System::Drawing::Size(834, 467);
			this->pn_cat->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::LightGray;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(369, 216);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(154, 35);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Categories";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pn_books
			// 
			this->pn_books->Controls->Add(this->label14);
			this->pn_books->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_books->Location = System::Drawing::Point(0, 0);
			this->pn_books->Name = L"pn_books";
			this->pn_books->Size = System::Drawing::Size(834, 467);
			this->pn_books->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::LightGray;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(369, 216);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(96, 35);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Books";
			this->label14->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(18, 35);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(1034, 557);
			this->Controls->Add(this->pn_con);
			this->Controls->Add(this->pn_nav_bar);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_title_bar);
			this->Font = (gcnew System::Drawing::Font(L"Georgia", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LM";
			this->pn_title_bar->ResumeLayout(false);
			this->pn_title_bar->PerformLayout();
			this->pn_st_bar->ResumeLayout(false);
			this->pn_st_bar->PerformLayout();
			this->pn_nav_bar->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->pn_info->ResumeLayout(false);
			this->pn_info->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_con->ResumeLayout(false);
			this->Pn_student->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->pn_home->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->pn_borrow->ResumeLayout(false);
			this->pn_borrow->PerformLayout();
			this->pn_sell->ResumeLayout(false);
			this->pn_sell->PerformLayout();
			this->pn_cat->ResumeLayout(false);
			this->pn_cat->PerformLayout();
			this->pn_books->ResumeLayout(false);
			this->pn_books->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pn_nav_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}


















private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_home_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_home->BringToFront();
}
private: System::Void btn_st_Click(System::Object^ sender, System::EventArgs^ e) {
	Pn_student->BringToFront();
}
private: System::Void btn_books_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_books ->BringToFront();
}
private: System::Void btn_cat_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_cat->BringToFront();
}
private: System::Void btn_sell_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_sell->BringToFront();
}
private: System::Void btn_borrow_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_borrow->BringToFront();
}






private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState==FormWindowState::Maximized) {

		this->WindowState = FormWindowState::Normal;

	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pn_nav_bar ->Width == 200) 
	{
		pn_nav_bar->Width = 55;
		btn_home->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_st->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_sell ->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_books ->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_cat ->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		pn_info->Visible = false;
	}
	else
	{
		pn_nav_bar->Width = 200;
		btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_st->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_sell->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_books->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_cat->RightToLeft = System::Windows::Forms::RightToLeft::No;
		pn_info->Visible = true;

	}
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ frm1 = gcnew MyForm1;
	frm1->Show();
    
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label36_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
