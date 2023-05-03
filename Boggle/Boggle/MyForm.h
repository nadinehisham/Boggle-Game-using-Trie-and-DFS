#pragma once
#include"C:\Users\Jumana\Desktop\Boggle\Boggle\Trie.h"
#include<fstream>
#include<string>
#include <vector>
#include <cstdlib>
string mypoints;
vector<string> wordsfound;
vector<string> userinput;
vector<char> word;
vector<char> v0;
vector<char> v1;
vector<char> v2;
vector<char> v3;
vector<char> v4;
vector<char> v5;
vector<char> v6;
vector<char> v7;
vector<char> v8;
vector<char> v9;
vector<char> v10;
vector<char> v11;
vector<char> v12;
vector<char> v13;
vector<char> v14;
vector<char> v15;
Trie t;
fstream myFile;

namespace Boggle {

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

		static int Second = 60;
		static int Minute = 1;
		String^ Sec;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   String^ Min;
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
	private: System::Windows::Forms::Button^ HINT;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ addbutton;

	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Score;
	private: System::Windows::Forms::Label^ Points;
	private: System::Windows::Forms::Label^ Time;







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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->HINT = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->addbutton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->Points = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// HINT
			// 
			this->HINT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->HINT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->HINT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HINT->ForeColor = System::Drawing::Color::White;
			this->HINT->Location = System::Drawing::Point(832, 524);
			this->HINT->Name = L"HINT";
			this->HINT->Size = System::Drawing::Size(111, 39);
			this->HINT->TabIndex = 0;
			this->HINT->Text = L"HINT";
			this->HINT->UseVisualStyleBackColor = false;
			this->HINT->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(323, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 79);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			string s(v0.begin(), v0.end());
			String^ h = gcnew String(s.c_str());
			this->button2->Text = h;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(426, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 78);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			string s1(v1.begin(), v1.end());
			String^ h1 = gcnew String(s1.c_str());
			this->button3->Text = h1;
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(529, 148);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 78);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			string s2(v2.begin(), v2.end());
			String^ h2 = gcnew String(s2.c_str());
			this->button4->Text = h2;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(632, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 78);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			string s3(v3.begin(), v3.end());
			String^ h3 = gcnew String(s3.c_str());
			this->button5->Text = h3;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button6->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(323, 233);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 78);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			string s4(v4.begin(), v4.end());
			String^ h4 = gcnew String(s4.c_str());
			this->button6->Text = h4;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(426, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 78);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			string s5(v5.begin(), v5.end());
			String^ h5 = gcnew String(s5.c_str());
			this->button7->Text = h5;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(529, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 78);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			string s6(v6.begin(), v6.end());
			String^ h6 = gcnew String(s6.c_str());
			this->button8->Text = h6;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button9->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(632, 233);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 78);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			string s7(v7.begin(), v7.end());
			String^ h7 = gcnew String(s7.c_str());
			this->button9->Text = h7;
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button10->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(323, 317);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(97, 78);
			this->button10->TabIndex = 9;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			string s8(v8.begin(), v8.end());
			String^ h8 = gcnew String(s8.c_str());
			this->button10->Text = h8;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(426, 317);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(97, 78);
			this->button11->TabIndex = 10;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			string s9(v9.begin(), v9.end());
			String^ h9 = gcnew String(s9.c_str());
			this->button11->Text = h9;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(529, 317);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(97, 78);
			this->button12->TabIndex = 11;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			string s10(v10.begin(), v10.end());
			String^ h10 = gcnew String(s10.c_str());
			this->button12->Text = h10;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button13->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(632, 317);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(97, 78);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			string s11(v11.begin(), v11.end());
			String^ h11 = gcnew String(s11.c_str());
			this->button13->Text = h11;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button14->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(323, 401);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(97, 78);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			string s12(v12.begin(), v12.end());
			String^ h12 = gcnew String(s12.c_str());
			this->button14->Text = h12;
			// 
			// button15
			// 
			this->button15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button15->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button15->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(426, 401);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(97, 78);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			string s13(v13.begin(), v13.end());
			String^ h13 = gcnew String(s13.c_str());
			this->button15->Text = h13;
			// 
			// button16
			// 
			this->button16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button16->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button16->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(529, 401);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(97, 78);
			this->button16->TabIndex = 15;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			string s14(v14.begin(), v14.end());
			String^ h14 = gcnew String(s14.c_str());
			this->button16->Text = h14;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button17->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(632, 401);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(97, 78);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			string s15(v15.begin(), v15.end());
			String^ h15 = gcnew String(s15.c_str());
			this->button17->Text = h15;
			// 
			// addbutton
			// 
			this->addbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addbutton->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->addbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->ForeColor = System::Drawing::Color::White;
			this->addbutton->Location = System::Drawing::Point(409, 514);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(240, 59);
			this->addbutton->TabIndex = 17;
			this->addbutton->Text = L"ADD WORD";
			this->addbutton->UseVisualStyleBackColor = false;
			this->addbutton->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 27);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Player\'s words";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(69, 155);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(213, 324);
			this->listBox1->TabIndex = 20;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->BackColor = System::Drawing::Color::White;
			this->listBox2->ForeColor = System::Drawing::Color::Black;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(772, 155);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(222, 324);
			this->listBox2->TabIndex = 21;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(847, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 27);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Hints";
			// 
			// Score
			// 
			this->Score->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Score->AutoSize = true;
			this->Score->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Score->ForeColor = System::Drawing::Color::Black;
			this->Score->Location = System::Drawing::Point(125, 64);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(85, 27);
			this->Score->TabIndex = 23;
			this->Score->Text = L"Score:";
			// 
			// Points
			// 
			this->Points->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Points->AutoSize = true;
			this->Points->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Points->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Points->Location = System::Drawing::Point(216, 64);
			this->Points->Name = L"Points";
			this->Points->Size = System::Drawing::Size(27, 27);
			this->Points->TabIndex = 24;
			this->Points->Text = L"0";
			this->Points->Click += gcnew System::EventHandler(this, &MyForm::Points_Click);
			// 
			// Time
			// 
			this->Time->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->Location = System::Drawing::Point(847, 61);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(69, 30);
			this->Time->TabIndex = 25;
			this->Time->Text = L"2:00";
			this->Time->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(355, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(243, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1060, 606);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->Points);
			this->Controls->Add(this->Score);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->HINT);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//String^ s = "C:\\Users\\Jumana\\Desktop\\wrong_answer";
		
		static int i = 0;
		if (i < wordsfound.size()) {

			string f = wordsfound[i];
			this->listBox2->Items->Add(gcnew String(f.c_str()));
			i++;
		}
		else
			MessageBox::Show("No more words found");
		/*for (int i = 0; i < wordsfound.size(); i++) {
			string f = wordsfound[i];
			this->listBox2->Items->Add(gcnew String(f.c_str()));

		}
	*/
		//timer1->Start();
	}

	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		
		bool found = true;
		bool alreadythere = false;
		string wordstr(word.begin(), word.end());
		/*System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
		player->SoundLocation = "C:\\Users\\Jumana\\Desktop\\wrong_answer";
		player->Load();
		player->PlaySync();*/
		//userinput.push_back(wordstr);
		//userinput.push_back(wordstr);

		for (int i = 0; i < wordsfound.size(); i++)
		{
			if (wordstr == wordsfound[i])
			{

				if (userinput.empty())
				{
					//userinput.push_back(wordstr);
					found = false;
					break;
					//cout << str << endl;
				}
				else
				{
					found = false;
					for (int i = 0; i < userinput.size(); i++)
					{
						
						if (userinput[i] == wordstr)
						{
							found = true;
							break;
						}
						 

					}
					//break;
				}
				

			}
			
		
		}
		if (found == false)
		{
			userinput.push_back(wordstr);
			this->listBox1->Items->Add(gcnew String(wordstr.c_str()));
			mypoints = totalPoints(userinput);
			System::Media::SoundPlayer^ player1 = gcnew System::Media::SoundPlayer();
			player1->SoundLocation = "C:\\Users\\Jumana\\Desktop\\Boggle\\correct_answer.wav";
			player1->Load();
			player1->PlaySync();
			Points->Text = gcnew String(mypoints.c_str())+ "\n";
			//cout << str << endl;
		}
		else {
			System::Media::SoundPlayer^ player2 = gcnew System::Media::SoundPlayer();
			player2->SoundLocation = "C:\\Users\\Jumana\\Desktop\\Boggle\\wrong_answer.wav";
			player2->Load();
			player2->PlaySync();
			MessageBox::Show("Invalid Word");
			
			/*System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = "C:\\Users\\Jumana\\Desktop\\Boggle\\res_whoops.wav";
			player->Load();
			player->PlaySync();*/
			//PlaySound("res_whoops.wav", NULL, SND_SYNC);
			//MessageBox::Show(gcnew String(userinput[1].c_str()));
		}
		word.clear();
		button2->BackColor = System::Drawing::Color::DarkSlateBlue;
		button3->BackColor = System::Drawing::Color::DarkSlateBlue;
		button4->BackColor = System::Drawing::Color::DarkSlateBlue;
		button5->BackColor = System::Drawing::Color::DarkSlateBlue;
		button6->BackColor = System::Drawing::Color::DarkSlateBlue;
		button7->BackColor = System::Drawing::Color::DarkSlateBlue;
		button8->BackColor = System::Drawing::Color::DarkSlateBlue;
		button9->BackColor = System::Drawing::Color::DarkSlateBlue;
		button10->BackColor = System::Drawing::Color::DarkSlateBlue;
		button11->BackColor = System::Drawing::Color::DarkSlateBlue;
		button12->BackColor = System::Drawing::Color::DarkSlateBlue;
		button13->BackColor = System::Drawing::Color::DarkSlateBlue;
		button14->BackColor = System::Drawing::Color::DarkSlateBlue;
		button15->BackColor = System::Drawing::Color::DarkSlateBlue;
		button16->BackColor = System::Drawing::Color::DarkSlateBlue;
		button17->BackColor = System::Drawing::Color::DarkSlateBlue;

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		word.push_back(v0[0]);
		button2->BackColor = System::Drawing::Color::Orange;
	}
		  

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v1[0]);
	button3->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v2[0]);
	button4->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v3[0]);
	button5->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v4[0]);
	button6->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v5[0]);
	button7->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v6[0]);
	button8->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v7[0]);
	button9->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v8[0]);
	button10->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v9[0]);
	button11->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v10[0]);
	button12->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v11[0]);
	button13->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v12[0]);
	button14->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v13[0]);
	button15->BackColor = System::Drawing::Color::Orange;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	word.push_back(v14[0]);
	button16->BackColor = System::Drawing::Color::Orange;
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//mypoints = totalPoints(wordsfound);
	//textBox1->Text = gcnew String(mypoints.c_str())+ "\n";
	//textBox1->Text = "hello";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	static int i = 0;
	if (Minute >= 0) {

		if(Minute>=0 && Second>0)
		Second--;
		
			if (Second == 00) {
				if (Minute != 0) {
					Second = 59;
				}
				else
					Second = 0;
				Minute = 0;

			}

			
		
		Sec = Convert::ToString(Second);
		Min = Convert::ToString(Minute);
		Time->Text = Min + ":" + Sec;
		if (Minute == 0 && Second <= 10) {
			Time->ForeColor = System::Drawing::Color::Red;
		}

		if (Minute == 0 && Second == 0 && i==0) {
			i++;
			

			MessageBox::Show("Time's up! \n" + "Your final score is: " + gcnew String(mypoints.c_str()));
			this->Close();
			
		}
	}
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	word.push_back(v15[0]);
	button17->BackColor = System::Drawing::Color::Orange;

}
private: System::Void Points_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
} 

