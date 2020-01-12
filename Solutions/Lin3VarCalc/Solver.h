#pragma once

namespace Lin3Var {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class Solver : public System::Windows::Forms::Form
	{
	public:
		Solver(void)
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
		~Solver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel5;
	protected:

	private: System::Windows::Forms::Button^ solve3;



	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBoxZ3;
	private: System::Windows::Forms::TextBox^ textBoxY3;
	private: System::Windows::Forms::TextBox^ textBoxX3;




	private: System::Windows::Forms::Button^ Reset3;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxD2;


	private: System::Windows::Forms::TextBox^ textBoxC2;

	private: System::Windows::Forms::TextBox^ textBoxB2;

	private: System::Windows::Forms::TextBox^ textBoxA2;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ labelA1;
	private: System::Windows::Forms::TextBox^ textBoxD1;


	private: System::Windows::Forms::TextBox^ textBoxC1;

	private: System::Windows::Forms::TextBox^ textBoxB1;
	private: System::Windows::Forms::TextBox^ textBoxA1;






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxD3;
	private: System::Windows::Forms::TextBox^ textBoxC3;
	private: System::Windows::Forms::TextBox^ textBoxB3;
	private: System::Windows::Forms::TextBox^ textBoxA3;





	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ linearLabel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Solver::typeid));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->labelA1 = (gcnew System::Windows::Forms::Label());
			this->textBoxD1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA1 = (gcnew System::Windows::Forms::TextBox());
			this->solve3 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBoxZ3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX3 = (gcnew System::Windows::Forms::TextBox());
			this->Reset3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxD3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxD2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxB2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA2 = (gcnew System::Windows::Forms::TextBox());
			this->linearLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Controls->Add(this->solve3);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->textBoxZ3);
			this->panel5->Controls->Add(this->textBoxY3);
			this->panel5->Controls->Add(this->textBoxX3);
			this->panel5->Controls->Add(this->Reset3);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Location = System::Drawing::Point(5, 174);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(386, 488);
			this->panel5->TabIndex = 2;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Solver::panel5_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Navy;
			this->label13->Location = System::Drawing::Point(59, 5);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(277, 25);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Three Variable Linear Equation ";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label30);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->labelA1);
			this->panel8->Controls->Add(this->textBoxD1);
			this->panel8->Controls->Add(this->textBoxC1);
			this->panel8->Controls->Add(this->textBoxB1);
			this->panel8->Controls->Add(this->textBoxA1);
			this->panel8->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel8->Location = System::Drawing::Point(16, 92);
			this->panel8->Margin = System::Windows::Forms::Padding(2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(344, 43);
			this->panel8->TabIndex = 8;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::LimeGreen;
			this->label30->Location = System::Drawing::Point(253, 10);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(36, 21);
			this->label30->TabIndex = 1;
			this->label30->Text = L"d₁=";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::LimeGreen;
			this->label23->Location = System::Drawing::Point(170, 8);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(34, 21);
			this->label23->TabIndex = 1;
			this->label23->Text = L"c₁=";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::LimeGreen;
			this->label22->Location = System::Drawing::Point(85, 10);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(36, 21);
			this->label22->TabIndex = 1;
			this->label22->Text = L"b₁=";
			// 
			// labelA1
			// 
			this->labelA1->AutoSize = true;
			this->labelA1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelA1->ForeColor = System::Drawing::Color::LimeGreen;
			this->labelA1->Location = System::Drawing::Point(-1, 8);
			this->labelA1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelA1->Name = L"labelA1";
			this->labelA1->Size = System::Drawing::Size(35, 21);
			this->labelA1->TabIndex = 1;
			this->labelA1->Text = L"a₁=";
			// 
			// textBoxD1
			// 
			this->textBoxD1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxD1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxD1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxD1->Location = System::Drawing::Point(293, 10);
			this->textBoxD1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxD1->Name = L"textBoxD1";
			this->textBoxD1->Size = System::Drawing::Size(39, 22);
			this->textBoxD1->TabIndex = 0;
			this->textBoxD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxC1
			// 
			this->textBoxC1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxC1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxC1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxC1->Location = System::Drawing::Point(206, 10);
			this->textBoxC1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxC1->Name = L"textBoxC1";
			this->textBoxC1->Size = System::Drawing::Size(39, 22);
			this->textBoxC1->TabIndex = 0;
			this->textBoxC1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxB1
			// 
			this->textBoxB1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxB1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxB1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxB1->Location = System::Drawing::Point(125, 10);
			this->textBoxB1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxB1->Name = L"textBoxB1";
			this->textBoxB1->Size = System::Drawing::Size(39, 22);
			this->textBoxB1->TabIndex = 0;
			this->textBoxB1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxA1
			// 
			this->textBoxA1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxA1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxA1->Location = System::Drawing::Point(38, 10);
			this->textBoxA1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxA1->Name = L"textBoxA1";
			this->textBoxA1->Size = System::Drawing::Size(39, 22);
			this->textBoxA1->TabIndex = 0;
			this->textBoxA1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBoxA1->TextChanged += gcnew System::EventHandler(this, &Solver::textBoxA1_TextChanged);
			// 
			// solve3
			// 
			this->solve3->BackColor = System::Drawing::Color::Transparent;
			this->solve3->FlatAppearance->BorderSize = 2;
			this->solve3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->solve3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->solve3->ForeColor = System::Drawing::Color::Lime;
			this->solve3->Location = System::Drawing::Point(64, 373);
			this->solve3->Margin = System::Windows::Forms::Padding(2);
			this->solve3->Name = L"solve3";
			this->solve3->Size = System::Drawing::Size(99, 47);
			this->solve3->TabIndex = 24;
			this->solve3->Text = L"Solve";
			this->solve3->UseVisualStyleBackColor = false;
			this->solve3->Click += gcnew System::EventHandler(this, &Solver::solve3_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label29->Location = System::Drawing::Point(245, 446);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(28, 21);
			this->label29->TabIndex = 20;
			this->label29->Text = L"z=";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label17->Location = System::Drawing::Point(144, 445);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 21);
			this->label17->TabIndex = 20;
			this->label17->Text = L"y=";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label18->Location = System::Drawing::Point(41, 444);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 21);
			this->label18->TabIndex = 21;
			this->label18->Text = L"x=";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxZ3
			// 
			this->textBoxZ3->BackColor = System::Drawing::Color::Orchid;
			this->textBoxZ3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxZ3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->textBoxZ3->Location = System::Drawing::Point(277, 445);
			this->textBoxZ3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxZ3->Name = L"textBoxZ3";
			this->textBoxZ3->Size = System::Drawing::Size(61, 22);
			this->textBoxZ3->TabIndex = 18;
			// 
			// textBoxY3
			// 
			this->textBoxY3->BackColor = System::Drawing::Color::Orchid;
			this->textBoxY3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxY3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->textBoxY3->Location = System::Drawing::Point(177, 445);
			this->textBoxY3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxY3->Name = L"textBoxY3";
			this->textBoxY3->Size = System::Drawing::Size(61, 22);
			this->textBoxY3->TabIndex = 18;
			// 
			// textBoxX3
			// 
			this->textBoxX3->BackColor = System::Drawing::Color::Orchid;
			this->textBoxX3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxX3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->textBoxX3->Location = System::Drawing::Point(73, 444);
			this->textBoxX3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxX3->Name = L"textBoxX3";
			this->textBoxX3->Size = System::Drawing::Size(61, 22);
			this->textBoxX3->TabIndex = 19;
			this->textBoxX3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Reset3
			// 
			this->Reset3->BackColor = System::Drawing::Color::Transparent;
			this->Reset3->FlatAppearance->BorderSize = 2;
			this->Reset3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset3->ForeColor = System::Drawing::Color::Red;
			this->Reset3->Location = System::Drawing::Point(218, 373);
			this->Reset3->Margin = System::Windows::Forms::Padding(2);
			this->Reset3->Name = L"Reset3";
			this->Reset3->Size = System::Drawing::Size(99, 47);
			this->Reset3->TabIndex = 17;
			this->Reset3->Text = L"Reset";
			this->Reset3->UseVisualStyleBackColor = false;
			this->Reset3->Click += gcnew System::EventHandler(this, &Solver::Reset3_Click);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->panel2);
			this->panel6->Controls->Add(this->panel1);
			this->panel6->Location = System::Drawing::Point(13, 32);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(362, 313);
			this->panel6->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkViolet;
			this->label5->Location = System::Drawing::Point(112, 226);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"a₃x + b₃y + c₃ = d₃";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::DarkBlue;
			this->label14->Location = System::Drawing::Point(112, 132);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(136, 20);
			this->label14->TabIndex = 11;
			this->label14->Text = L"a₂x + b₂y + c₂ = d₂";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkGreen;
			this->label12->Location = System::Drawing::Point(112, 36);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 20);
			this->label12->TabIndex = 10;
			this->label12->Text = L"a₁x + b₁y + c₁z = d₁";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Maroon;
			this->label11->Location = System::Drawing::Point(55, 4);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(248, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"ENTER RESPECTIVE COEFFICIENTS";
			this->label11->Click += gcnew System::EventHandler(this, &Solver::Label11_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->textBoxD3);
			this->panel2->Controls->Add(this->textBoxC3);
			this->panel2->Controls->Add(this->textBoxB3);
			this->panel2->Controls->Add(this->textBoxA3);
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(3, 248);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(343, 43);
			this->panel2->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label7->Location = System::Drawing::Point(252, 10);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 21);
			this->label7->TabIndex = 1;
			this->label7->Text = L"d₃=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label8->Location = System::Drawing::Point(170, 10);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 21);
			this->label8->TabIndex = 1;
			this->label8->Text = L"c₃=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label9->Location = System::Drawing::Point(85, 10);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 21);
			this->label9->TabIndex = 1;
			this->label9->Text = L"b₃=";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label10->Location = System::Drawing::Point(-1, 10);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 21);
			this->label10->TabIndex = 1;
			this->label10->Text = L"a₃=";
			// 
			// textBoxD3
			// 
			this->textBoxD3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxD3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxD3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxD3->Location = System::Drawing::Point(293, 10);
			this->textBoxD3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxD3->Name = L"textBoxD3";
			this->textBoxD3->Size = System::Drawing::Size(39, 22);
			this->textBoxD3->TabIndex = 0;
			this->textBoxD3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxC3
			// 
			this->textBoxC3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxC3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxC3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxC3->Location = System::Drawing::Point(205, 10);
			this->textBoxC3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxC3->Name = L"textBoxC3";
			this->textBoxC3->Size = System::Drawing::Size(39, 22);
			this->textBoxC3->TabIndex = 0;
			this->textBoxC3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxB3
			// 
			this->textBoxB3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxB3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxB3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxB3->Location = System::Drawing::Point(124, 10);
			this->textBoxB3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxB3->Name = L"textBoxB3";
			this->textBoxB3->Size = System::Drawing::Size(39, 22);
			this->textBoxB3->TabIndex = 0;
			this->textBoxB3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxA3
			// 
			this->textBoxA3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxA3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxA3->Location = System::Drawing::Point(37, 10);
			this->textBoxA3->Margin = System::Windows::Forms::Padding(2);
			this->textBoxA3->Name = L"textBoxA3";
			this->textBoxA3->Size = System::Drawing::Size(39, 22);
			this->textBoxA3->TabIndex = 0;
			this->textBoxA3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBoxD2);
			this->panel1->Controls->Add(this->textBoxC2);
			this->panel1->Controls->Add(this->textBoxB2);
			this->panel1->Controls->Add(this->textBoxA2);
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(2, 154);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(344, 43);
			this->panel1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label1->Location = System::Drawing::Point(253, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"d₂=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(170, 10);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"c₂=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(85, 10);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 21);
			this->label3->TabIndex = 1;
			this->label3->Text = L"b₂=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(-1, 10);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 21);
			this->label4->TabIndex = 1;
			this->label4->Text = L"a₂=";
			// 
			// textBoxD2
			// 
			this->textBoxD2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxD2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxD2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxD2->Location = System::Drawing::Point(293, 10);
			this->textBoxD2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxD2->Name = L"textBoxD2";
			this->textBoxD2->Size = System::Drawing::Size(39, 22);
			this->textBoxD2->TabIndex = 0;
			this->textBoxD2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxC2
			// 
			this->textBoxC2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxC2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxC2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxC2->Location = System::Drawing::Point(206, 10);
			this->textBoxC2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxC2->Name = L"textBoxC2";
			this->textBoxC2->Size = System::Drawing::Size(39, 22);
			this->textBoxC2->TabIndex = 0;
			this->textBoxC2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxB2
			// 
			this->textBoxB2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxB2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxB2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxB2->Location = System::Drawing::Point(125, 10);
			this->textBoxB2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxB2->Name = L"textBoxB2";
			this->textBoxB2->Size = System::Drawing::Size(39, 22);
			this->textBoxB2->TabIndex = 0;
			this->textBoxB2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxA2
			// 
			this->textBoxA2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxA2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxA2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxA2->Location = System::Drawing::Point(38, 10);
			this->textBoxA2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxA2->Name = L"textBoxA2";
			this->textBoxA2->Size = System::Drawing::Size(39, 22);
			this->textBoxA2->TabIndex = 0;
			this->textBoxA2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// linearLabel
			// 
			this->linearLabel->AutoSize = true;
			this->linearLabel->BackColor = System::Drawing::Color::Red;
			this->linearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linearLabel->ForeColor = System::Drawing::Color::White;
			this->linearLabel->Location = System::Drawing::Point(60, 114);
			this->linearLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linearLabel->Name = L"linearLabel";
			this->linearLabel->Size = System::Drawing::Size(270, 37);
			this->linearLabel->TabIndex = 3;
			this->linearLabel->Text = L"LINEAR EQN SOLVER";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(-1, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(392, 172);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Solver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(391, 656);
			this->Controls->Add(this->linearLabel);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Solver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Three Variable Linear Solver";
			this->Load += gcnew System::EventHandler(this, &Solver::Solver_Load);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Reset3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxA1->Text = "";
		textBoxB1->Text = "";
		textBoxC1->Text = "";
		textBoxD1->Text = "";
		textBoxA2->Text = "";
		textBoxB2->Text = "";
		textBoxC2->Text = "";
		textBoxD2->Text = "";
		textBoxA3->Text = "";
		textBoxB3->Text = "";
		textBoxC3->Text = "";
		textBoxD3->Text = "";
		textBoxY3->Text = "";
		textBoxZ3->Text = "";
		textBoxX3->Text = "";
		Solver::Height = 652;
	}
	private: System::Void textBoxA1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void solve3_Click(System::Object^ sender, System::EventArgs^ e) {
		Solver::Height = 695;

		double A1, A2, A3, B1, B2, B3, C1, C2, C3, D1, D2, D3;
		A1 = System::Convert::ToDouble(textBoxA1->Text);
		A2 = System::Convert::ToDouble(textBoxA2->Text);
		A3 = System::Convert::ToDouble(textBoxA3->Text);
		B1 = System::Convert::ToDouble(textBoxB1->Text);
		B2 = System::Convert::ToDouble(textBoxB2->Text);
		B3 = System::Convert::ToDouble(textBoxB3->Text);
		C1 = System::Convert::ToDouble(textBoxC1->Text);
		C2 = System::Convert::ToDouble(textBoxC2->Text);
		C3 = System::Convert::ToDouble(textBoxC3->Text);
		D1 = System::Convert::ToDouble(textBoxD1->Text);
		D2 = System::Convert::ToDouble(textBoxD2->Text);
		D3 = System::Convert::ToDouble(textBoxD3->Text);

		double X3, Y3, Z3, A31;
		X3 = (B1 * ((C2 * D3) - (D2 * C3))) - (C1 * ((B2 * D3) - (D2 * B3))) + (D1 * ((B2 * C3) - (C2 * B3)));
		Y3 = (A1 * ((C2 * D3) - (D2 * C3))) - (C1 * ((A2 * D3) - (D2 * A3))) + (D1 * ((A2 * C3) - (C2 * A3)));
		Z3 = (A1 * ((B2 * D3) - (D2 * B3))) - (B1 * ((A2 * D3) - (D2 * A3))) + (D1 * ((A2 * B3) - (B2 * A3)));
		A31 = (A1 * ((B2 * C3) - (C2 * B3))) - (B1 * ((A2 * C3) - (C2 * A3))) + (C1 * ((A2 * B3) - (B2 * A3)));
		double solX, solY, solZ;
		solX = X3 / A31;
		solY = Y3 / A31;
		solZ = Z3 / A31;

		//conversion into string
		String^ XX3;
		String^ YY3;
		String^ ZZ3;

		XX3 = System::Convert::ToString(solX);
		YY3 = System::Convert::ToString(solY);
		ZZ3 = System::Convert::ToString(solZ);

		//display in tab

		textBoxX3->Text = XX3;
		textBoxY3->Text = YY3;
		textBoxZ3->Text = ZZ3;

	}
	
	private: System::Void Label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}

//MAIN WINDOW
private: System::Void Solver_Load(System::Object^ sender, System::EventArgs^ e) {
	Solver::Height = 652;
}
};
}
