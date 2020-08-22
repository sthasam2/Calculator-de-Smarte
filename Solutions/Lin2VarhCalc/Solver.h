#pragma once

namespace Lin2Varh
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
public
	ref class Solver : public System::Windows::Forms::Form
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

	private:
		System::Windows::Forms::Panel ^ panel1;

	protected:
	private:
		System::Windows::Forms::Label ^ label13;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Label ^ label12;

	private:
		System::Windows::Forms::Label ^ label11;

	private:
		System::Windows::Forms::Button ^ Reset;

	private:
		System::Windows::Forms::Panel ^ panel3;

	private:
		System::Windows::Forms::Panel ^ panel2;

	private:
		System::Windows::Forms::Label ^ label6;

	private:
		System::Windows::Forms::Label ^ label7;

	private:
		System::Windows::Forms::Label ^ label8;

	private:
		System::Windows::Forms::TextBox ^ textBoxc2;

	private:
		System::Windows::Forms::TextBox ^ textBoxb2;

	private:
		System::Windows::Forms::TextBox ^ textBoxa2;

	private:
		System::Windows::Forms::Panel ^ panel4;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Label ^ label4;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::TextBox ^ textBoxc1;

	private:
		System::Windows::Forms::TextBox ^ textBoxb1;

	private:
		System::Windows::Forms::TextBox ^ textBoxa1;

	private:
		System::Windows::Forms::Label ^ label9;

	private:
		System::Windows::Forms::Label ^ label5;

	private:
		System::Windows::Forms::Label ^ linearLabel;

	private:
		System::Windows::Forms::TextBox ^ textBoxY;

	private:
		System::Windows::Forms::TextBox ^ textBoxX;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::PictureBox ^ pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Solver::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxc2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxb2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxa2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxc1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxb1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxa1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linearLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			//
			// panel1
			//
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBoxY);
			this->panel1->Controls->Add(this->textBoxX);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(0, 148);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(350, 385);
			this->panel1->TabIndex = 0;
			//
			// label13
			//
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Navy;
			this->label13->Location = System::Drawing::Point(55, 10);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(263, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Two Variable Linear Equation ";
			//
			// button1
			//
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Green;
			this->button1->Location = System::Drawing::Point(52, 253);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 47);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Solver::button1_Click_2);
			//
			// label12
			//
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkMagenta;
			this->label12->Location = System::Drawing::Point(112, 355);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 20);
			this->label12->TabIndex = 20;
			this->label12->Text = L"y=";
			//
			// label11
			//
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkMagenta;
			this->label11->Location = System::Drawing::Point(112, 322);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"x=";
			//
			// textBoxY
			//
			this->textBoxY->BackColor = System::Drawing::Color::Orchid;
			this->textBoxY->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBoxY->ForeColor = System::Drawing::Color::White;
			this->textBoxY->Location = System::Drawing::Point(143, 352);
			this->textBoxY->Margin = System::Windows::Forms::Padding(2);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(79, 27);
			this->textBoxY->TabIndex = 18;
			this->textBoxY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// textBoxX
			//
			this->textBoxX->BackColor = System::Drawing::Color::Orchid;
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->textBoxX->ForeColor = System::Drawing::Color::White;
			this->textBoxX->Location = System::Drawing::Point(143, 320);
			this->textBoxX->Margin = System::Windows::Forms::Padding(2);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(79, 27);
			this->textBoxX->TabIndex = 19;
			this->textBoxX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// Reset
			//
			this->Reset->BackColor = System::Drawing::Color::Transparent;
			this->Reset->FlatAppearance->BorderSize = 2;
			this->Reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->Reset->ForeColor = System::Drawing::Color::Red;
			this->Reset->Location = System::Drawing::Point(201, 253);
			this->Reset->Margin = System::Windows::Forms::Padding(2);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(99, 47);
			this->Reset->TabIndex = 17;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &Solver::Reset_Click);
			//
			// panel3
			//
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label1);
			this->panel3->ForeColor = System::Drawing::Color::Navy;
			this->panel3->Location = System::Drawing::Point(12, 41);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(327, 198);
			this->panel3->TabIndex = 16;
			//
			// panel2
			//
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBoxc2);
			this->panel2->Controls->Add(this->textBoxb2);
			this->panel2->Controls->Add(this->textBoxa2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->panel2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(5, 143);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(318, 43);
			this->panel2->TabIndex = 7;
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Location = System::Drawing::Point(219, 11);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 21);
			this->label6->TabIndex = 3;
			this->label6->Text = L"c₂=";
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label7->Location = System::Drawing::Point(114, 11);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 21);
			this->label7->TabIndex = 3;
			this->label7->Text = L"b₂=";
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label8->Location = System::Drawing::Point(5, 11);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 21);
			this->label8->TabIndex = 1;
			this->label8->Text = L"a₂=";
			//
			// textBoxc2
			//
			this->textBoxc2->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxc2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxc2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxc2->Location = System::Drawing::Point(255, 11);
			this->textBoxc2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxc2->Name = L"textBoxc2";
			this->textBoxc2->Size = System::Drawing::Size(52, 23);
			this->textBoxc2->TabIndex = 0;
			this->textBoxc2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// textBoxb2
			//
			this->textBoxb2->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxb2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxb2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxb2->Location = System::Drawing::Point(150, 11);
			this->textBoxb2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxb2->Name = L"textBoxb2";
			this->textBoxb2->Size = System::Drawing::Size(52, 23);
			this->textBoxb2->TabIndex = 0;
			this->textBoxb2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// textBoxa2
			//
			this->textBoxa2->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxa2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxa2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxa2->Location = System::Drawing::Point(43, 12);
			this->textBoxa2->Margin = System::Windows::Forms::Padding(2);
			this->textBoxa2->Name = L"textBoxa2";
			this->textBoxa2->Size = System::Drawing::Size(52, 23);
			this->textBoxa2->TabIndex = 0;
			this->textBoxa2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// panel4
			//
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->textBoxc1);
			this->panel4->Controls->Add(this->textBoxb1);
			this->panel4->Controls->Add(this->textBoxa1);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->panel4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Location = System::Drawing::Point(5, 57);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(318, 43);
			this->panel4->TabIndex = 8;
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(219, 11);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"c₁=";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(111, 11);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"b₁=";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(5, 11);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a₁=";
			//
			// textBoxc1
			//
			this->textBoxc1->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxc1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxc1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxc1->Location = System::Drawing::Point(255, 11);
			this->textBoxc1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxc1->Name = L"textBoxc1";
			this->textBoxc1->Size = System::Drawing::Size(52, 23);
			this->textBoxc1->TabIndex = 0;
			this->textBoxc1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// textBoxb1
			//
			this->textBoxb1->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxb1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxb1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxb1->Location = System::Drawing::Point(150, 11);
			this->textBoxb1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxb1->Name = L"textBoxb1";
			this->textBoxb1->Size = System::Drawing::Size(52, 23);
			this->textBoxb1->TabIndex = 0;
			this->textBoxb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// textBoxa1
			//
			this->textBoxa1->BackColor = System::Drawing::SystemColors::Info;
			this->textBoxa1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->textBoxa1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBoxa1->Location = System::Drawing::Point(43, 11);
			this->textBoxa1->Margin = System::Windows::Forms::Padding(2);
			this->textBoxa1->Name = L"textBoxa1";
			this->textBoxa1->Size = System::Drawing::Size(52, 23);
			this->textBoxa1->TabIndex = 0;
			this->textBoxa1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(47, 6);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(248, 20);
			this->label9->TabIndex = 5;
			this->label9->Text = L"ENTER RESPECTIVE COEFFICIENTS";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkBlue;
			this->label5->Location = System::Drawing::Point(120, 122);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"a₂x + b₂y = c₂";
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(120, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"a₁x + b₁y = c₁";
			//
			// linearLabel
			//
			this->linearLabel->AutoSize = true;
			this->linearLabel->BackColor = System::Drawing::Color::Red;
			this->linearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
																   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linearLabel->ForeColor = System::Drawing::Color::White;
			this->linearLabel->Location = System::Drawing::Point(46, 104);
			this->linearLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linearLabel->Name = L"linearLabel";
			this->linearLabel->Size = System::Drawing::Size(270, 37);
			this->linearLabel->TabIndex = 2;
			this->linearLabel->Text = L"LINEAR EQN SOLVER";
			//
			// pictureBox1
			//
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(2, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(348, 151);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			//
			// Solver
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(350, 531);
			this->Controls->Add(this->linearLabel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Solver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Linear Equation Solver";
			this->Load += gcnew System::EventHandler(this, &Solver::Solver_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			textBoxa1->Text = "";
			textBoxb1->Text = "";
			textBoxc1->Text = "";
			textBoxa2->Text = "";
			textBoxb2->Text = "";
			textBoxc2->Text = "";
			textBoxX->Text = "";
			textBoxY->Text = "";
		}

	private:
		System::Void button1_Click_1(System::Object ^ sender, System::EventArgs ^ e)
		{
			double a1, a2, b1, b2, c1, c2;
			a1 = System::Convert::ToDouble(textBoxa1->Text);
			a2 = System::Convert::ToDouble(textBoxa2->Text);
			b1 = System::Convert::ToDouble(textBoxb1->Text);
			b2 = System::Convert::ToDouble(textBoxb2->Text);
			c1 = System::Convert::ToDouble(textBoxc1->Text);
			c2 = System::Convert::ToDouble(textBoxc2->Text);

			double XXX, YYY;

			XXX = (((b1 * c2) - (b2 * c1)) / ((a1 * b2) - (a2 * b2)));
			YYY = (((a1 * c2) - (a2 * c1)) / ((a1 * b2) - (a2 * b2)));
			String ^ XX;
			String ^ YY;

			XX = System::Convert::ToString(XXX);
			YY = System::Convert::ToString(YYY);
		}

	private:
		System::Void button1_Click_2(System::Object ^ sender, System::EventArgs ^ e)
		{
			Solver::Height = 570;

			double a1, a2, b1, b2, c1, c2;
			a1 = System::Convert::ToDouble(textBoxa1->Text);
			a2 = System::Convert::ToDouble(textBoxa2->Text);
			b1 = System::Convert::ToDouble(textBoxb1->Text);
			b2 = System::Convert::ToDouble(textBoxb2->Text);
			c1 = System::Convert::ToDouble(textBoxc1->Text);
			c2 = System::Convert::ToDouble(textBoxc2->Text);

			double XT, YT, AT;
			AT = ((a1 * b2) - (a2 * b1));
			XT = ((b1 * c2) - (b2 * c1));
			YT = ((a1 * c2) - (a2 * c1));

			double XXX, YYY;

			XXX = (XT / AT);
			YYY = (YT / AT);
			String ^ XX;
			String ^ YY;

			//add exception handling here

			XX = System::Convert::ToString(XXX);
			YY = System::Convert::ToString(YYY);

			textBoxX->Text = XX;
			textBoxY->Text = YY;
		}

	private:
		System::Void Reset_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			textBoxa1->Text = "";
			textBoxb1->Text = "";
			textBoxc1->Text = "";
			textBoxa2->Text = "";
			textBoxb2->Text = "";
			textBoxc2->Text = "";
			textBoxX->Text = "";
			textBoxY->Text = "";

			Solver::Height = 500;
		}

	private:
		System::Void pictureBox1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
		}
		//MAIN WINDOW
	private:
		System::Void Solver_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
			Solver::Height = 500;
		}
	};
} // namespace Lin2Varh
