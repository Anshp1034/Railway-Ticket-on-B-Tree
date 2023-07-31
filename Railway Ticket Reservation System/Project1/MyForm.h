#pragma once
#include<fstream>
#include<string>
#include <msclr/marshal_cppstd.h>
#include"btree.h"
#include<vector>
#include"MyForm1.h"
#include"MyForm2.h"
#include"Details.h"
#include<stdexcept>
#include<limits>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	btree b;
	static int n = 0;
	public ref class MyForm : public System::Windows::Forms::Form
	{
		static int second = 0;
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
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;















	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ displayFileContentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ disToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ projectDetailsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ detailsToolStripMenuItem;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->displayFileContentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->disToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projectDetailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->detailsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BackColor = System::Drawing::Color::Transparent;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button5);
			this->splitContainer1->Panel2->Controls->Add(this->textBox7);
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox2);
			this->splitContainer1->Panel2->Controls->Add(this->label11);
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Panel2->Controls->Add(this->label9);
			this->splitContainer1->Panel2->Controls->Add(this->label12);
			this->splitContainer1->Size = System::Drawing::Size(1866, 838);
			this->splitContainer1->SplitterDistance = 942;
			this->splitContainer1->SplitterWidth = 6;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->listBox1);
			this->splitContainer2->Panel1->Controls->Add(this->label8);
			this->splitContainer2->Panel1->Controls->Add(this->textBox2);
			this->splitContainer2->Panel1->Controls->Add(this->textBox1);
			this->splitContainer2->Panel1->Controls->Add(this->button2);
			this->splitContainer2->Panel1->Controls->Add(this->button1);
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			this->splitContainer2->Panel1->Controls->Add(this->textBox4);
			this->splitContainer2->Panel1->Controls->Add(this->label4);
			this->splitContainer2->Panel1->Controls->Add(this->label3);
			this->splitContainer2->Panel1->Controls->Add(this->textBox3);
			this->splitContainer2->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer2_Panel1_Paint);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->listBox2);
			this->splitContainer2->Panel2->Controls->Add(this->label7);
			this->splitContainer2->Panel2->Controls->Add(this->textBox6);
			this->splitContainer2->Panel2->Controls->Add(this->textBox5);
			this->splitContainer2->Panel2->Controls->Add(this->label6);
			this->splitContainer2->Panel2->Controls->Add(this->label5);
			this->splitContainer2->Panel2->Controls->Add(this->button4);
			this->splitContainer2->Panel2->Controls->Add(this->button3);
			this->splitContainer2->Size = System::Drawing::Size(942, 838);
			this->splitContainer2->SplitterDistance = 388;
			this->splitContainer2->SplitterWidth = 6;
			this->splitContainer2->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::Color::Red;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"* for Ticket_ID please ", L"   enter 1 not 01 ",
					L"* for Train Number please ", L"   enter alphabets in ", L"   Captial Letters", L"* Remaining please enter in ", L"   small characters"
			});
			this->listBox1->Location = System::Drawing::Point(660, 134);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(208, 160);
			this->listBox1->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(62, 78);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(344, 41);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Book your ticket here";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(232, 217);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 137);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(506, 285);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(506, 134);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(62, 222);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(62, 142);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ticket_ID";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(232, 372);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 26);
			this->textBox4->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(62, 377);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Destination";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(62, 300);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Train Number";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(232, 295);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 26);
			this->textBox3->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::White;
			this->listBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox2->ForeColor = System::Drawing::Color::Red;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"* for Ticket_ID please ", L"  enter 1 not 01.",
					L"* for Train Number please ", L"  enter alphabets in ", L"   Captial Letters.", L"* Enter all details in", L"  Captial Letters. "
			});
			this->listBox2->Location = System::Drawing::Point(660, 103);
			this->listBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(208, 160);
			this->listBox2->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(59, 24);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(574, 41);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Check your Ticket confirmation here";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(232, 202);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 26);
			this->textBox6->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(232, 106);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 26);
			this->textBox5->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(62, 206);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Train_Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(62, 111);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ticket_ID";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(506, 199);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 35);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Cancel";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(506, 103);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(196, 582);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 60);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Request Cancellation";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(196, 508);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(142, 26);
			this->textBox7->TabIndex = 4;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(177, 78);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(240, 278);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(55, 417);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(368, 41);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Cancel your ticket here";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(490, 200);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(234, 47);
			this->label10->TabIndex = 2;
			this->label10->Text = L"RAILWAYS";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(486, 131);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 47);
			this->label9->TabIndex = 1;
			this->label9->Text = L"INDIAN";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(73, 515);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 20);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Ticket_ID";
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->displayFileContentToolStripMenuItem,
					this->disToolStripMenuItem, this->projectDetailsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1866, 33);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// displayFileContentToolStripMenuItem
			// 
			this->displayFileContentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->displayFileContentToolStripMenuItem->Name = L"displayFileContentToolStripMenuItem";
			this->displayFileContentToolStripMenuItem->Size = System::Drawing::Size(122, 29);
			this->displayFileContentToolStripMenuItem->Text = L"Display File ";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(158, 34);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// disToolStripMenuItem
			// 
			this->disToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem1 });
			this->disToolStripMenuItem->Name = L"disToolStripMenuItem";
			this->disToolStripMenuItem->Size = System::Drawing::Size(167, 29);
			this->disToolStripMenuItem->Text = L"Display Ticket List";
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(158, 34);
			this->openToolStripMenuItem1->Text = L"Open";
			this->openToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem1_Click);
			// 
			// projectDetailsToolStripMenuItem
			// 
			this->projectDetailsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->detailsToolStripMenuItem });
			this->projectDetailsToolStripMenuItem->Name = L"projectDetailsToolStripMenuItem";
			this->projectDetailsToolStripMenuItem->Size = System::Drawing::Size(140, 29);
			this->projectDetailsToolStripMenuItem->Text = L"Project Details";
			// 
			// detailsToolStripMenuItem
			// 
			this->detailsToolStripMenuItem->Name = L"detailsToolStripMenuItem";
			this->detailsToolStripMenuItem->Size = System::Drawing::Size(167, 34);
			this->detailsToolStripMenuItem->Text = L"Details";
			this->detailsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::detailsToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1866, 838);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->splitContainer1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Ticket Reservation";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void splitContainer2_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	n = 0;
	StreamWriter^ outFile = gcnew StreamWriter("Passenger_Details.txt", "std::ios::app");
	//outFile->Write("------------------------------------------------------------------Ticket Details----------------------------------------------------------------------------");
	//outFile->Write("\r\n");
	StreamWriter^ outf = gcnew StreamWriter("Confirmation_List.txt", "std::ios::app");
	//outf->Write("---------------------------------------------------------------------Ticket_ID Confirmed-----------------------------------------------------------------------");
	//outf->Write("\r\n");
	if (textBox1->Text == "" || textBox2->Text=="" || textBox3->Text=="" || textBox4->Text=="")
	{
		n = 1;
		MessageBox::Show("Please enter the value", "Error");
	}
	else {
		n = 0;
		String^ x = textBox1->Text;
		std::string key = msclr::interop::marshal_as<std::string>(x);
		int bar = System::Int16::Parse(x);
		//b.insert(bar);
	//if (b.fg1 == 1 && n==0) 
	//}
		if (b.search(bar))
		{
			MessageBox::Show("ticket id already found");
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
			textBox4->Clear();
		}
		//else if (b.fg1 == 0 && n == 0) {
		else{
			MessageBox::Show("inserted successfully");
			outFile->Write("\t");
			outFile->Write(textBox1->Text);
			outFile->Write("\t");
			outFile->Write("|");
			outFile->Write("\t");
			outFile->Write(textBox2->Text);
			outFile->Write("\t");
			outFile->Write("|");
			outFile->Write("\t");
			outFile->Write(textBox3->Text);
			outFile->Write("\t");
			outFile->Write("|");
			outFile->Write("\t");
			outFile->Write(textBox4->Text);
			outFile->Write("\t");
			outFile->Write("|");
			outFile->Write("\r\n");
			//outf->Write("\t");
			outf->Write(textBox1->Text);
			//outf->Write("\t");
			outf->Write("\n");
			textBox1->Clear();
			textBox2->Clear();
			textBox3->Clear();
			textBox4->Clear();
		}
	}
	outFile->Close();
	outf->Close();
	std::string con;
	std::fstream file;
	int key;
	file.open("Confirmation_List.txt", ios::in);
	while (!(file.eof())) {
		getline(file, con);
		if (con != "") {
			key = stoi(con);
			b.insert(key);
		}
	}
	file.close();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	n = 0;
	if (textBox5->Text == "" || textBox6->Text == "")
	{
		n = 1;
		MessageBox::Show("please enter the values", "Error");
	}
	else {
		n = 0;
		String^ x = textBox5->Text;
		std::string key = msclr::interop::marshal_as<std::string>(x);
		int bar = System::Int16::Parse(x);
		b.search(bar);
	}
	if (b.dg == 0 && n==0)
	{
		MessageBox::Show("Sorry ticket is not confirmed");
		textBox5->Clear();
		textBox6->Clear();
	}
	else if(b.dg==1 && n==0)
	{
		MessageBox::Show("Congratulations ticket is confirmed");
		textBox5->Clear();
		textBox6->Clear();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Clear();
	textBox6->Clear();
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::MyForm1^ my = gcnew MyForm1();
	my->ShowDialog();
}
private: System::Void openToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::MyForm2^ my = gcnew MyForm2();
	my->ShowDialog();
}
private: System::Void detailsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::Details^ de = gcnew Details();
	de->ShowDialog();
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ x = textBox7->Text;
	std::string keys = msclr::interop::marshal_as<std::string>(x);
	int bar = System::Int16::Parse(x);
		int key;
		std::string con;
		std::fstream file;
	if (b.search(bar)) {
		b.remove(bar);
		file.open("Confirmation_List.txt", ios::in);
		while (!(file.eof())) {
			getline(file, con);
			if (con != "") {
				key = stoi(con);
				b.insert(key);
			}
		}
		file.close();
		MessageBox::Show("Successfully Canceled\n Reload Required.");
		this->Close();
	}
	else
	{
		MessageBox::Show("Ticket not found");
	}


}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox7->Text == "")
		{
			button5->Enabled = false;
		}
		else
		{
			button5->Enabled = true;
		}
	}
	
/*private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Get the text from the text box.
	String^ text = textBox7->Text;

	// Only try to convert the text if it's not empty.
	if (!String::IsNullOrEmpty(text)) {
		// Try to convert the text to an integer.
		int ticketId;
		try {
			ticketId = int::Parse(text);
		}
		catch (Exception^ ex) {
			// The text is not an integer.
			MessageBox::Show("Invalid ticket ID.");
			textBox7->Text = "";
			return;
		}

		// The text is an integer.
	}
}
*/


private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	std::string con;
	std::fstream file;
	int key;
	file.open("Confirmation_List.txt", ios::in);
	while (!(file.eof())) {
		getline(file, con);
		if (con != "") {
			key = stoi(con);
			b.insert(key);
		}
	}
	file.close();
}
};
}
