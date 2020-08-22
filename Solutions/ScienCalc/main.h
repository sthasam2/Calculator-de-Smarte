#pragma once

namespace ScienCalc
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
public
	ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TextBox ^ txtDisplay;

	private:
		System::Windows::Forms::Label ^ lblShowOp;

	private:
		System::Windows::Forms::Button ^ buttonBS;

	private:
		System::Windows::Forms::Button ^ buttonCE;

	private:
		System::Windows::Forms::Button ^ buttonC;

	private:
		System::Windows::Forms::Button ^ buttonDiv;

	private:
		System::Windows::Forms::Button ^ button7;

	private:
		System::Windows::Forms::Button ^ button8;

	private:
		System::Windows::Forms::Button ^ button9;

	private:
		System::Windows::Forms::Button ^ buttonPro;

	private:
		System::Windows::Forms::Button ^ button4;

	private:
		System::Windows::Forms::Button ^ button5;

	private:
		System::Windows::Forms::Button ^ button6;

	private:
		System::Windows::Forms::Button ^ buttonMinus;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Button ^ button2;

	private:
		System::Windows::Forms::Button ^ button3;

	private:
		System::Windows::Forms::Button ^ buttonPlus;

	private:
		System::Windows::Forms::Button ^ buttonDot;

	private:
		System::Windows::Forms::Button ^ button0;

	private:
		System::Windows::Forms::Button ^ buttonPM;

	private:
		System::Windows::Forms::Button ^ buttonEquals;

	private:
		System::Windows::Forms::Button ^ buttonPerC;

	private:
		System::Windows::Forms::Button ^ buttonLn;

	private:
		System::Windows::Forms::Button ^ buttonLog;

	private:
		System::Windows::Forms::Button ^ buttonSqrt;

	private:
		System::Windows::Forms::Button ^ buttonSqr;

	private:
		System::Windows::Forms::Button ^ buttonHex;

	private:
		System::Windows::Forms::Button ^ buttonOct;

	private:
		System::Windows::Forms::Button ^ buttonBin;

	private:
		System::Windows::Forms::Button ^ buttonDec;

	private:
		System::Windows::Forms::Button ^ buttonFact;

	private:
		System::Windows::Forms::Button ^ buttonMod;

	private:
		System::Windows::Forms::Button ^ buttonExp;

	private:
		System::Windows::Forms::Button ^ buttonTan;

	private:
		System::Windows::Forms::Button ^ buttonTanh;

	private:
		System::Windows::Forms::Button ^ buttonCos;

	private:
		System::Windows::Forms::Button ^ buttonCosh;

	private:
		System::Windows::Forms::Button ^ buttonSin;

	private:
		System::Windows::Forms::Button ^ buttonSinh;

	private:
		System::Windows::Forms::Button ^ buttonPwr;

	private:
		System::Windows::Forms::Button ^ buttonPi;

	private:
		System::Windows::Forms::ListBox ^ history;

	private:
		System::Windows::Forms::Label ^ labelHistory;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ fileToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ standardToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ scientificToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ historyToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ historyToolStripMenuItem1;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ exitToolStripMenuItem1;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ helpToolStripMenuItem;

	private:
		System::Windows::Forms::MenuStrip ^ menuStrip1;

	private:
		System::Windows::Forms::ToolStripMenuItem ^ aboutToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->buttonBS = (gcnew System::Windows::Forms::Button());
			this->buttonCE = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonDiv = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonPro = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPM = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->buttonPerC = (gcnew System::Windows::Forms::Button());
			this->buttonLn = (gcnew System::Windows::Forms::Button());
			this->buttonLog = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonSqr = (gcnew System::Windows::Forms::Button());
			this->buttonHex = (gcnew System::Windows::Forms::Button());
			this->buttonOct = (gcnew System::Windows::Forms::Button());
			this->buttonBin = (gcnew System::Windows::Forms::Button());
			this->buttonDec = (gcnew System::Windows::Forms::Button());
			this->buttonFact = (gcnew System::Windows::Forms::Button());
			this->buttonMod = (gcnew System::Windows::Forms::Button());
			this->buttonExp = (gcnew System::Windows::Forms::Button());
			this->buttonTan = (gcnew System::Windows::Forms::Button());
			this->buttonTanh = (gcnew System::Windows::Forms::Button());
			this->buttonCos = (gcnew System::Windows::Forms::Button());
			this->buttonCosh = (gcnew System::Windows::Forms::Button());
			this->buttonSin = (gcnew System::Windows::Forms::Button());
			this->buttonSinh = (gcnew System::Windows::Forms::Button());
			this->buttonPwr = (gcnew System::Windows::Forms::Button());
			this->buttonPi = (gcnew System::Windows::Forms::Button());
			this->history = (gcnew System::Windows::Forms::ListBox());
			this->labelHistory = (gcnew System::Windows::Forms::Label());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scientificToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			//
			// txtDisplay
			//
			this->txtDisplay->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Product Sans", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->txtDisplay->Location = System::Drawing::Point(14, 70);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(5);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(489, 41);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->TextChanged += gcnew System::EventHandler(this, &main::TxtDisplay_TextChanged);
			//
			// lblShowOp
			//
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->lblShowOp->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->lblShowOp->Location = System::Drawing::Point(22, 48);
			this->lblShowOp->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 17);
			this->lblShowOp->TabIndex = 1;
			//
			// buttonBS
			//
			this->buttonBS->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonBS.BackgroundImage")));
			this->buttonBS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonBS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBS->FlatAppearance->BorderSize = 0;
			this->buttonBS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBS->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->buttonBS->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonBS->Location = System::Drawing::Point(13, 133);
			this->buttonBS->Name = L"buttonBS";
			this->buttonBS->Size = System::Drawing::Size(50, 50);
			this->buttonBS->TabIndex = 2;
			this->buttonBS->Text = L"←";
			this->buttonBS->UseCompatibleTextRendering = true;
			this->buttonBS->UseVisualStyleBackColor = true;
			this->buttonBS->Click += gcnew System::EventHandler(this, &main::ButtonBS_Click);
			//
			// buttonCE
			//
			this->buttonCE->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonCE.BackgroundImage")));
			this->buttonCE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCE->FlatAppearance->BorderSize = 0;
			this->buttonCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->buttonCE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCE->Location = System::Drawing::Point(69, 133);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(50, 50);
			this->buttonCE->TabIndex = 3;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &main::ButtonCE_Click);
			//
			// buttonC
			//
			this->buttonC->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonC.BackgroundImage")));
			this->buttonC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonC->FlatAppearance->BorderSize = 0;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->buttonC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonC->Location = System::Drawing::Point(125, 133);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(50, 50);
			this->buttonC->TabIndex = 4;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &main::ButtonC_Click);
			//
			// buttonDiv
			//
			this->buttonDiv->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonDiv.BackgroundImage")));
			this->buttonDiv->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDiv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiv->FlatAppearance->BorderSize = 0;
			this->buttonDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonDiv->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDiv->Location = System::Drawing::Point(181, 133);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(50, 50);
			this->buttonDiv->TabIndex = 5;
			this->buttonDiv->Text = L"÷";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// button7
			//
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(13, 189);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 2;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button8
			//
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(69, 189);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 3;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button9
			//
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(125, 189);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 4;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// buttonPro
			//
			this->buttonPro->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPro.BackgroundImage")));
			this->buttonPro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPro->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPro->FlatAppearance->BorderSize = 0;
			this->buttonPro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPro->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonPro->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPro->Location = System::Drawing::Point(181, 189);
			this->buttonPro->Name = L"buttonPro";
			this->buttonPro->Size = System::Drawing::Size(50, 50);
			this->buttonPro->TabIndex = 5;
			this->buttonPro->Text = L"×";
			this->buttonPro->UseVisualStyleBackColor = true;
			this->buttonPro->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// button4
			//
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(13, 245);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 2;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button5
			//
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(69, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 3;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button6
			//
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(125, 245);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// buttonMinus
			//
			this->buttonMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonMinus.BackgroundImage")));
			this->buttonMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMinus->FlatAppearance->BorderSize = 0;
			this->buttonMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->buttonMinus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonMinus->Location = System::Drawing::Point(181, 245);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(50, 50);
			this->buttonMinus->TabIndex = 5;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// button1
			//
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(13, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button2
			//
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(69, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// button3
			//
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(125, 301);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// buttonPlus
			//
			this->buttonPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPlus.BackgroundImage")));
			this->buttonPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPlus->FlatAppearance->BorderSize = 0;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonPlus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPlus->Location = System::Drawing::Point(181, 301);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(50, 50);
			this->buttonPlus->TabIndex = 5;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// buttonDot
			//
			this->buttonDot->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonDot.BackgroundImage")));
			this->buttonDot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDot->FlatAppearance->BorderSize = 0;
			this->buttonDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonDot->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDot->Location = System::Drawing::Point(13, 357);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(50, 50);
			this->buttonDot->TabIndex = 2;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &main::ButtonDot_Click);
			//
			// button0
			//
			this->button0->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"button0.BackgroundImage")));
			this->button0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->FlatAppearance->BorderSize = 0;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button0->Location = System::Drawing::Point(69, 357);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 50);
			this->button0->TabIndex = 3;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &main::Num_Click);
			//
			// buttonPM
			//
			this->buttonPM->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPM.BackgroundImage")));
			this->buttonPM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPM->FlatAppearance->BorderSize = 0;
			this->buttonPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPM->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->buttonPM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPM->Location = System::Drawing::Point(125, 357);
			this->buttonPM->Name = L"buttonPM";
			this->buttonPM->Size = System::Drawing::Size(50, 50);
			this->buttonPM->TabIndex = 4;
			this->buttonPM->Text = L"±";
			this->buttonPM->UseVisualStyleBackColor = true;
			this->buttonPM->Click += gcnew System::EventHandler(this, &main::ButtonPM_Click);
			//
			// buttonEquals
			//
			this->buttonEquals->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonEquals.BackgroundImage")));
			this->buttonEquals->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEquals->FlatAppearance->BorderSize = 0;
			this->buttonEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->buttonEquals->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonEquals->Location = System::Drawing::Point(181, 357);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(50, 50);
			this->buttonEquals->TabIndex = 5;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &main::ButtonEquals_Click);
			//
			// buttonPerC
			//
			this->buttonPerC->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPerC.BackgroundImage")));
			this->buttonPerC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPerC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPerC->FlatAppearance->BorderSize = 0;
			this->buttonPerC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPerC->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonPerC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPerC->Location = System::Drawing::Point(285, 357);
			this->buttonPerC->Name = L"buttonPerC";
			this->buttonPerC->Size = System::Drawing::Size(50, 50);
			this->buttonPerC->TabIndex = 26;
			this->buttonPerC->Text = L"%";
			this->buttonPerC->UseVisualStyleBackColor = true;
			this->buttonPerC->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// buttonLn
			//
			this->buttonLn->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonLn.BackgroundImage")));
			this->buttonLn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonLn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonLn->FlatAppearance->BorderSize = 0;
			this->buttonLn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLn->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->buttonLn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonLn->Location = System::Drawing::Point(453, 301);
			this->buttonLn->Name = L"buttonLn";
			this->buttonLn->Size = System::Drawing::Size(50, 50);
			this->buttonLn->TabIndex = 25;
			this->buttonLn->Text = L"Ln x";
			this->buttonLn->UseVisualStyleBackColor = true;
			this->buttonLn->Click += gcnew System::EventHandler(this, &main::Button11_Click);
			//
			// buttonLog
			//
			this->buttonLog->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonLog.BackgroundImage")));
			this->buttonLog->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonLog->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonLog->FlatAppearance->BorderSize = 0;
			this->buttonLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLog->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonLog->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonLog->Location = System::Drawing::Point(453, 359);
			this->buttonLog->Name = L"buttonLog";
			this->buttonLog->Size = System::Drawing::Size(50, 50);
			this->buttonLog->TabIndex = 24;
			this->buttonLog->Text = L"Log x";
			this->buttonLog->UseVisualStyleBackColor = true;
			this->buttonLog->Click += gcnew System::EventHandler(this, &main::ButtonLog_Click);
			//
			// buttonSqrt
			//
			this->buttonSqrt->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonSqrt.BackgroundImage")));
			this->buttonSqrt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSqrt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSqrt->FlatAppearance->BorderSize = 0;
			this->buttonSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonSqrt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSqrt->Location = System::Drawing::Point(397, 359);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(50, 50);
			this->buttonSqrt->TabIndex = 23;
			this->buttonSqrt->Text = L"Sqrt";
			this->buttonSqrt->UseVisualStyleBackColor = true;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &main::ButtonSqrt_Click);
			//
			// buttonSqr
			//
			this->buttonSqr->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonSqr.BackgroundImage")));
			this->buttonSqr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSqr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSqr->FlatAppearance->BorderSize = 0;
			this->buttonSqr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSqr->Font = (gcnew System::Drawing::Font(L"Product Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonSqr->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSqr->Location = System::Drawing::Point(453, 135);
			this->buttonSqr->Name = L"buttonSqr";
			this->buttonSqr->Size = System::Drawing::Size(50, 50);
			this->buttonSqr->TabIndex = 22;
			this->buttonSqr->Text = L"x²";
			this->buttonSqr->UseVisualStyleBackColor = true;
			this->buttonSqr->Click += gcnew System::EventHandler(this, &main::Button14_Click);
			//
			// buttonHex
			//
			this->buttonHex->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonHex.BackgroundImage")));
			this->buttonHex->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonHex->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonHex->FlatAppearance->BorderSize = 0;
			this->buttonHex->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHex->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonHex->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonHex->Location = System::Drawing::Point(397, 136);
			this->buttonHex->Name = L"buttonHex";
			this->buttonHex->Size = System::Drawing::Size(50, 50);
			this->buttonHex->TabIndex = 20;
			this->buttonHex->Text = L"Hex";
			this->buttonHex->UseVisualStyleBackColor = true;
			this->buttonHex->Click += gcnew System::EventHandler(this, &main::ButtonHex_Click);
			//
			// buttonOct
			//
			this->buttonOct->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonOct.BackgroundImage")));
			this->buttonOct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonOct->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonOct->FlatAppearance->BorderSize = 0;
			this->buttonOct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOct->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonOct->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonOct->Location = System::Drawing::Point(397, 244);
			this->buttonOct->Name = L"buttonOct";
			this->buttonOct->Size = System::Drawing::Size(50, 50);
			this->buttonOct->TabIndex = 19;
			this->buttonOct->Text = L"Oct";
			this->buttonOct->UseVisualStyleBackColor = true;
			this->buttonOct->Click += gcnew System::EventHandler(this, &main::ButtonOct_Click);
			//
			// buttonBin
			//
			this->buttonBin->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonBin.BackgroundImage")));
			this->buttonBin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonBin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBin->FlatAppearance->BorderSize = 0;
			this->buttonBin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBin->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonBin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonBin->Location = System::Drawing::Point(397, 303);
			this->buttonBin->Name = L"buttonBin";
			this->buttonBin->Size = System::Drawing::Size(50, 50);
			this->buttonBin->TabIndex = 18;
			this->buttonBin->Text = L"BIn";
			this->buttonBin->UseVisualStyleBackColor = true;
			this->buttonBin->Click += gcnew System::EventHandler(this, &main::ButtonBin_Click);
			//
			// buttonDec
			//
			this->buttonDec->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonDec.BackgroundImage")));
			this->buttonDec->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDec->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDec->FlatAppearance->BorderSize = 0;
			this->buttonDec->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDec->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonDec->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDec->Location = System::Drawing::Point(397, 189);
			this->buttonDec->Name = L"buttonDec";
			this->buttonDec->Size = System::Drawing::Size(50, 50);
			this->buttonDec->TabIndex = 21;
			this->buttonDec->Text = L"Dec";
			this->buttonDec->UseVisualStyleBackColor = true;
			this->buttonDec->Click += gcnew System::EventHandler(this, &main::ButtonDec_Click);
			//
			// buttonFact
			//
			this->buttonFact->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonFact.BackgroundImage")));
			this->buttonFact->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonFact->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonFact->FlatAppearance->BorderSize = 0;
			this->buttonFact->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonFact->Font = (gcnew System::Drawing::Font(L"Product Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonFact->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonFact->Location = System::Drawing::Point(453, 247);
			this->buttonFact->Name = L"buttonFact";
			this->buttonFact->Size = System::Drawing::Size(50, 50);
			this->buttonFact->TabIndex = 17;
			this->buttonFact->Text = L"x!";
			this->buttonFact->UseVisualStyleBackColor = true;
			this->buttonFact->Click += gcnew System::EventHandler(this, &main::Button19_Click);
			//
			// buttonMod
			//
			this->buttonMod->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonMod.BackgroundImage")));
			this->buttonMod->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonMod->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMod->FlatAppearance->BorderSize = 0;
			this->buttonMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMod->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonMod->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonMod->Location = System::Drawing::Point(341, 357);
			this->buttonMod->Name = L"buttonMod";
			this->buttonMod->Size = System::Drawing::Size(50, 50);
			this->buttonMod->TabIndex = 15;
			this->buttonMod->Text = L"Mod";
			this->buttonMod->UseVisualStyleBackColor = true;
			this->buttonMod->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// buttonExp
			//
			this->buttonExp->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonExp.BackgroundImage")));
			this->buttonExp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonExp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonExp->FlatAppearance->BorderSize = 0;
			this->buttonExp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExp->Font = (gcnew System::Drawing::Font(L"Product Sans", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
																 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonExp->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonExp->Location = System::Drawing::Point(341, 136);
			this->buttonExp->Name = L"buttonExp";
			this->buttonExp->Size = System::Drawing::Size(50, 50);
			this->buttonExp->TabIndex = 11;
			this->buttonExp->Text = L"e";
			this->buttonExp->UseVisualStyleBackColor = true;
			this->buttonExp->Click += gcnew System::EventHandler(this, &main::ButtonExp_Click);
			//
			// buttonTan
			//
			this->buttonTan->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonTan.BackgroundImage")));
			this->buttonTan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonTan->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTan->FlatAppearance->BorderSize = 0;
			this->buttonTan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTan->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonTan->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonTan->Location = System::Drawing::Point(341, 301);
			this->buttonTan->Name = L"buttonTan";
			this->buttonTan->Size = System::Drawing::Size(50, 50);
			this->buttonTan->TabIndex = 14;
			this->buttonTan->Text = L"Tan";
			this->buttonTan->UseVisualStyleBackColor = true;
			this->buttonTan->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonTanh
			//
			this->buttonTanh->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonTanh.BackgroundImage")));
			this->buttonTanh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonTanh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTanh->FlatAppearance->BorderSize = 0;
			this->buttonTanh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTanh->Font = (gcnew System::Drawing::Font(L"Product Sans", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonTanh->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonTanh->Location = System::Drawing::Point(285, 301);
			this->buttonTanh->Name = L"buttonTanh";
			this->buttonTanh->Size = System::Drawing::Size(50, 50);
			this->buttonTanh->TabIndex = 10;
			this->buttonTanh->Text = L"Tanh";
			this->buttonTanh->UseVisualStyleBackColor = true;
			this->buttonTanh->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonCos
			//
			this->buttonCos->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonCos.BackgroundImage")));
			this->buttonCos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCos->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCos->FlatAppearance->BorderSize = 0;
			this->buttonCos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCos->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonCos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCos->Location = System::Drawing::Point(341, 245);
			this->buttonCos->Name = L"buttonCos";
			this->buttonCos->Size = System::Drawing::Size(50, 50);
			this->buttonCos->TabIndex = 13;
			this->buttonCos->Text = L"Cos";
			this->buttonCos->UseVisualStyleBackColor = true;
			this->buttonCos->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonCosh
			//
			this->buttonCosh->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonCosh.BackgroundImage")));
			this->buttonCosh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCosh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCosh->FlatAppearance->BorderSize = 0;
			this->buttonCosh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCosh->Font = (gcnew System::Drawing::Font(L"Product Sans", 8.249999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonCosh->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCosh->Location = System::Drawing::Point(285, 245);
			this->buttonCosh->Name = L"buttonCosh";
			this->buttonCosh->Size = System::Drawing::Size(50, 50);
			this->buttonCosh->TabIndex = 9;
			this->buttonCosh->Text = L"Cosh";
			this->buttonCosh->UseVisualStyleBackColor = true;
			this->buttonCosh->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonSin
			//
			this->buttonSin->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonSin.BackgroundImage")));
			this->buttonSin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSin->FlatAppearance->BorderSize = 0;
			this->buttonSin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSin->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonSin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSin->Location = System::Drawing::Point(341, 189);
			this->buttonSin->Name = L"buttonSin";
			this->buttonSin->Size = System::Drawing::Size(50, 50);
			this->buttonSin->TabIndex = 12;
			this->buttonSin->Text = L"Sin";
			this->buttonSin->UseVisualStyleBackColor = true;
			this->buttonSin->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonSinh
			//
			this->buttonSinh->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonSinh.BackgroundImage")));
			this->buttonSinh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonSinh->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSinh->FlatAppearance->BorderSize = 0;
			this->buttonSinh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSinh->Font = (gcnew System::Drawing::Font(L"Product Sans", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(0)));
			this->buttonSinh->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonSinh->Location = System::Drawing::Point(285, 189);
			this->buttonSinh->Name = L"buttonSinh";
			this->buttonSinh->Size = System::Drawing::Size(50, 50);
			this->buttonSinh->TabIndex = 8;
			this->buttonSinh->Text = L"Sinh";
			this->buttonSinh->UseVisualStyleBackColor = true;
			this->buttonSinh->Click += gcnew System::EventHandler(this, &main::Trig_Op);
			//
			// buttonPwr
			//
			this->buttonPwr->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPwr.BackgroundImage")));
			this->buttonPwr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPwr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPwr->FlatAppearance->BorderSize = 0;
			this->buttonPwr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPwr->Font = (gcnew System::Drawing::Font(L"Product Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(0)));
			this->buttonPwr->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPwr->Location = System::Drawing::Point(453, 189);
			this->buttonPwr->Name = L"buttonPwr";
			this->buttonPwr->Size = System::Drawing::Size(50, 50);
			this->buttonPwr->TabIndex = 16;
			this->buttonPwr->Text = L"xⁿ";
			this->buttonPwr->UseVisualStyleBackColor = true;
			this->buttonPwr->Click += gcnew System::EventHandler(this, &main::Airthmetic_Op);
			//
			// buttonPi
			//
			this->buttonPi->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPi->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"buttonPi.BackgroundImage")));
			this->buttonPi->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPi->FlatAppearance->BorderSize = 0;
			this->buttonPi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPi->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->buttonPi->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPi->Location = System::Drawing::Point(285, 135);
			this->buttonPi->Name = L"buttonPi";
			this->buttonPi->Size = System::Drawing::Size(50, 50);
			this->buttonPi->TabIndex = 7;
			this->buttonPi->Text = L"π";
			this->buttonPi->UseVisualStyleBackColor = false;
			this->buttonPi->Click += gcnew System::EventHandler(this, &main::ButtonPi_Click);
			//
			// history
			//
			this->history->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->history->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->history->ColumnWidth = 240;
			this->history->Font = (gcnew System::Drawing::Font(L"Product Sans", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->history->ForeColor = System::Drawing::SystemColors::Highlight;
			this->history->FormattingEnabled = true;
			this->history->ItemHeight = 17;
			this->history->Location = System::Drawing::Point(14, 452);
			this->history->MultiColumn = true;
			this->history->Name = L"history";
			this->history->Size = System::Drawing::Size(486, 189);
			this->history->TabIndex = 27;
			this->history->SelectedIndexChanged += gcnew System::EventHandler(this, &main::History_SelectedIndexChanged);
			//
			// labelHistory
			//
			this->labelHistory->AutoSize = true;
			this->labelHistory->Font = (gcnew System::Drawing::Font(L"Product Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>(0)));
			this->labelHistory->ForeColor = System::Drawing::SystemColors::Highlight;
			this->labelHistory->Location = System::Drawing::Point(225, 429);
			this->labelHistory->Name = L"labelHistory";
			this->labelHistory->Size = System::Drawing::Size(75, 20);
			this->labelHistory->TabIndex = 28;
			this->labelHistory->Text = L"HISTORY";
			//
			// fileToolStripMenuItem
			//
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(5){
				this->standardToolStripMenuItem,
				this->scientificToolStripMenuItem, this->historyToolStripMenuItem, this->historyToolStripMenuItem1, this->exitToolStripMenuItem1});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(41, 23);
			this->fileToolStripMenuItem->Text = L"File";
			//
			// standardToolStripMenuItem
			//
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::StandardToolStripMenuItem_Click);
			//
			// scientificToolStripMenuItem
			//
			this->scientificToolStripMenuItem->Name = L"scientificToolStripMenuItem";
			this->scientificToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->scientificToolStripMenuItem->Text = L"Scientific";
			this->scientificToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::ScientificToolStripMenuItem_Click);
			//
			// historyToolStripMenuItem
			//
			this->historyToolStripMenuItem->Checked = true;
			this->historyToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->historyToolStripMenuItem->Name = L"historyToolStripMenuItem";
			this->historyToolStripMenuItem->Size = System::Drawing::Size(133, 24);
			this->historyToolStripMenuItem->Text = L"History";
			this->historyToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::HistoryToolStripMenuItem_Click);
			//
			// historyToolStripMenuItem1
			//
			this->historyToolStripMenuItem1->Name = L"historyToolStripMenuItem1";
			this->historyToolStripMenuItem1->Size = System::Drawing::Size(133, 24);
			this->historyToolStripMenuItem1->Text = L"History";
			this->historyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &main::HistoryToolStripMenuItem1_Click);
			//
			// exitToolStripMenuItem1
			//
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(133, 24);
			this->exitToolStripMenuItem1->Text = L"Exit";
			this->exitToolStripMenuItem1->Click += gcnew System::EventHandler(this, &main::ExitToolStripMenuItem1_Click);
			//
			// helpToolStripMenuItem
			//
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(1){this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(49, 23);
			this->helpToolStripMenuItem->Text = L"Help";
			//
			// aboutToolStripMenuItem
			//
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			//
			// menuStrip1
			//
			this->menuStrip1->Items->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem ^>(2){
				this->fileToolStripMenuItem,
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(512, 27);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			//
			// main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(512, 675);
			this->Controls->Add(this->labelHistory);
			this->Controls->Add(this->history);
			this->Controls->Add(this->buttonPerC);
			this->Controls->Add(this->buttonLn);
			this->Controls->Add(this->buttonLog);
			this->Controls->Add(this->buttonSqrt);
			this->Controls->Add(this->buttonSqr);
			this->Controls->Add(this->buttonHex);
			this->Controls->Add(this->buttonOct);
			this->Controls->Add(this->buttonBin);
			this->Controls->Add(this->buttonDec);
			this->Controls->Add(this->buttonFact);
			this->Controls->Add(this->buttonMod);
			this->Controls->Add(this->buttonExp);
			this->Controls->Add(this->buttonTan);
			this->Controls->Add(this->buttonTanh);
			this->Controls->Add(this->buttonCos);
			this->Controls->Add(this->buttonCosh);
			this->Controls->Add(this->buttonSin);
			this->Controls->Add(this->buttonSinh);
			this->Controls->Add(this->buttonPwr);
			this->Controls->Add(this->buttonPi);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPro);
			this->Controls->Add(this->buttonDiv);
			this->Controls->Add(this->buttonPM);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonDot);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonCE);
			this->Controls->Add(this->buttonBS);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Product Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Highlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"main";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Scientific Calculator";
			this->Load += gcnew System::EventHandler(this, &main::Main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		//VARIABLE DECLARATION FOR OPERAND AND OPERATORS
		double iFirstNum = 0;  //first input
		double iSecondNum = 0; //second input
		double iResult;		   //result
		String ^ iOperator;	   //operators

		//MAIN WINDOW (FIRST OPEN)
	private:
		System::Void Main_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
			main::Width = 537;
			main::Height = 456;
			txtDisplay->Width = 489;
			history->Width = 486;
			history->ColumnWidth = 475;
			historyToolStripMenuItem->Visible = false; //No checked history at startup
			labelHistory->Location = System::Drawing::Point(225, 430);
		}

		//MENU ITEM START (DESCENDING)
	private:
		System::Void ExitToolStripMenuItem1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//File>Exit
			Application::Exit();
		}

	private:
		System::Void History_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			//checkmark for history
		}

		//2 histories, history1 with checkmark, history2 with no checkmark. Because check value is not changed
	private:
		System::Void HistoryToolStripMenuItem1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//File>HistoryUnchecked(History2)
			historyToolStripMenuItem->Visible = true; //if
			history->Width = 486;
			history->Height = 204;
			main::Height = 720;
			historyToolStripMenuItem1->Visible = false;
		}

	private:
		System::Void HistoryToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//File>HistoryChecked(History1)
			if (historyToolStripMenuItem->Checked == true)
			{ //check for checked or unchecked
				history->Visible = true;
				historyToolStripMenuItem->Visible = false; //if unchecked HistoryUnchecked false
				historyToolStripMenuItem1->Visible = true; //if checked HistoryChecked true
				main::Height = 456;
			}
		}

	private:
		System::Void ScientificToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Scientific Window
			main::Width = 537;
			txtDisplay->Width = 489;
			history->Width = 486;
			labelHistory->Location = System::Drawing::Point(225, 430);
		}

	private:
		System::Void StandardToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Standard window
			main::Width = 265;
			txtDisplay->Width = 218;
			history->Width = 218;
			labelHistory->Location = System::Drawing::Point(86, 430);

			//when standard pressed history disappeared(but history check remains), so to fix this
			if (historyToolStripMenuItem->Checked == true)
			{
				main::Height = 456;

				historyToolStripMenuItem->Visible = false; //two histories, history1 only to check if history desired then display
				historyToolStripMenuItem1->Visible = true; //history2 to show history menu, as when history unchecked(undesired) history1 hidden. pressing history2 toggles history1 ie activates history1
			}
			else
			{
				main::Height = 720;
				historyToolStripMenuItem1->Visible = false;
				historyToolStripMenuItem->Visible = true;
			}
		}
		//MENU END

		//BUTTONS START
	private:
		System::Void ButtonC_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Button CE (Displaying 0 with operator not intact)
			txtDisplay->Text = "0";
			lblShowOp->Text = "";
		}

	private:
		System::Void ButtonCE_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Button C (displaying 0 with operator intact)
			txtDisplay->Text = "0";
		}

	private:
		System::Void ButtonBS_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Button Backspace
			if (txtDisplay->Text->Length > 0)
			{
				txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
			}
		}

	private:
		System::Void TxtDisplay_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Backspace null value results to zero
			if (txtDisplay->Text == "")
			{
				txtDisplay->Text = "0";
			}
		}

		//OPERATORS START
	private:
		System::Void Airthmetic_Op(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Operators(/, *, -, +, Mod, ^, %)
			Button ^ Operator = safe_cast<Button ^>(sender); //assigning pressed button to 'Operator'

			iFirstNum = Double::Parse(txtDisplay->Text); //converting input number displayed in textbox to double
			txtDisplay->Text = "";
			iOperator = Operator->Text;												  //taking button operator
			lblShowOp->Text = System::Convert::ToString(iFirstNum) + " " + iOperator; //displaying at top left label first input and operator
		}

	private:
		System::Void Trig_Op(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Trigonometric Operators
			Button ^ Operator = safe_cast<Button ^>(sender); //assigning pressed button to 'Operator'
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			b = a * ((22.000000000000000 / 7.000000000000000) / 180.000000000000000); //converting to degrees (15 decimal point)
			iFirstNum = b;
			iOperator = Operator->Text;

			if (iOperator == "Sinh")
			{
				iResult = Math::Sinh(iFirstNum);
				lblShowOp->Text = "Sinh( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Sin")
			{
				iResult = Math::Sin(iFirstNum);
				lblShowOp->Text = "Sin( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Cosh")
			{
				iResult = Math::Sinh(iFirstNum);
				lblShowOp->Text = "Cosh( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Cos")
			{
				iResult = Math::Cos(iFirstNum);
				lblShowOp->Text = "Cos( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Tanh")
			{
				iResult = Math::Sinh(iFirstNum);
				lblShowOp->Text = "Tanh( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Tan")
			{
				iResult = Math::Sinh(iFirstNum);
				lblShowOp->Text = "Tan( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			else if (iOperator == "Sinh")
			{
				iResult = Math::Sinh(iFirstNum);
				lblShowOp->Text = "Sinh( " + Convert::ToString(a) + " )";
				txtDisplay->Text = Convert::ToString(iResult);
			}

			history->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
		}

	private:
		System::Void ButtonLog_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Log
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			lblShowOp->Text = System::Convert::ToString("Log" + "( " + (txtDisplay->Text) + " )");
			b = Math::Log10(a);
			txtDisplay->Text = System::Convert::ToString(b);
			history->Items->Add(System::Convert::ToString(lblShowOp->Text) + " = " + System::Convert::ToString(b));
		}

	private:
		System::Void ButtonSqrt_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Sqrt
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			lblShowOp->Text = System::Convert::ToString("Sqrt( " + (txtDisplay->Text) + " )");
			b = Math::Sqrt(a);
			txtDisplay->Text = System::Convert::ToString(b);
			history->Items->Add(System::Convert::ToString(lblShowOp->Text) + " = " + System::Convert::ToString(b));
		}

	private:
		System::Void ButtonExp_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Exp
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			lblShowOp->Text = System::Convert::ToString("Exp" + "( " + (txtDisplay->Text) + " )");
			b = Math::Exp(a);
			txtDisplay->Text = System::Convert::ToString(b);
			history->Items->Add(System::Convert::ToString(lblShowOp->Text) + " = " + System::Convert::ToString(b));
		}

	private:
		System::Void Button14_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Sqared
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			lblShowOp->Text = System::Convert::ToString("( " + (txtDisplay->Text) + " )^ 2");
			b = Math::Pow(a, 2);
			txtDisplay->Text = System::Convert::ToString(b);
			history->Items->Add(System::Convert::ToString(lblShowOp->Text) + " = " + System::Convert::ToString(b));
		}

	private:
		System::Void Button19_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Factorial
			double a, b;
			int fact = 1;
			a = Double::Parse(txtDisplay->Text);
			b = Convert::ToInt32(a);
			for (int i = 1; i <= b; i++)
			{
				fact = fact * i;
			}
			lblShowOp->Text = System::Convert::ToString(a) + "!";
			txtDisplay->Text = System::Convert::ToString(fact);
			history->Items->Add(System::Convert::ToString(a) + "! =" + System::Convert::ToString(fact));
		}

	private:
		System::Void Button11_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Natural Log
			double a, b;
			a = Double::Parse(txtDisplay->Text);
			lblShowOp->Text = System::Convert::ToString("Ln" + "( " + (txtDisplay->Text) + " )");
			b = Math::Log(a);
			txtDisplay->Text = System::Convert::ToString(b);
			history->Items->Add(System::Convert::ToString(lblShowOp->Text) + " = " + System::Convert::ToString(b));
		}
		//OPERATOR END

	private:
		System::Void Num_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Button Numbers display in textbox
			Button ^ Numbers = safe_cast<Button ^>(sender);

			if (txtDisplay->Text == "0")
			{
				txtDisplay->Text = Numbers->Text; //checking first number is zero from our textbox ie condition of CE or C
			}
			else
			{
				txtDisplay->Text = txtDisplay->Text + Numbers->Text; //sequentially inputing numbers to right
			}
		}

	private:
		System::Void ButtonEquals_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//equals
			//lblShowOp->Text = ""; //remove this for history
			iSecondNum = Double::Parse(txtDisplay->Text);

			if (iOperator == "+")
			{ //addition
				iResult = iFirstNum + iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "-")
			{ //subtraction
				iResult = iFirstNum - iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "×")
			{ //multiplication
				iResult = iFirstNum * iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "÷")
			{ //division
				iResult = iFirstNum / iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "Mod")
			{ //Modular division
				int iFirst, iSecond, iResult;
				iFirst = Convert::ToInt32(iFirstNum); //convert to integer as double will give inaccurate mod div
				iSecond = Convert::ToInt32(iSecondNum);
				iResult = iFirst % iSecond;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "^")
			{ //power
				iResult = Math::Pow(iFirstNum, iSecondNum);
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + System::Convert::ToString(iSecondNum);
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}

			else if (iOperator == "%")
			{ //Percent
				lblShowOp->Text = lblShowOp->Text + " of ";
				iResult = iFirstNum * (iSecondNum / Convert::ToDouble(100));
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + "( " + System::Convert::ToString(iSecondNum) + " )";
				history->Items->Add(lblShowOp->Text + " = " + System::Convert::ToString(iResult));
			}
		}

	private:
		System::Void ButtonDot_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//decimal point
			if (!txtDisplay->Text->Contains("."))
			{ //adds only when given number doesnot contain decimal
				txtDisplay->Text = txtDisplay->Text + ".";
			}
		}

	private:
		System::Void ButtonPM_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//plus minus
			if (txtDisplay->Text->Contains("-"))
			{
				txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
			}
			else
			{
				txtDisplay->Text = "-" + txtDisplay->Text;
			}
		}

	private:
		System::Void ButtonPi_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//button pi
			txtDisplay->Text = ("3.1415926535897932384626433832795");
		}

		//NUMBER SYSTEM START
	private:
		System::Void ButtonDec_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Decimal
			int a = int ::Parse(txtDisplay->Text);
			txtDisplay->Text = Convert::ToString(a, 10);
			lblShowOp->Text = "DEC( " + Convert::ToString(a) + " )";
			history->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
		}

	private:
		System::Void ButtonBin_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Binary
			int a = int ::Parse(txtDisplay->Text);
			txtDisplay->Text = Convert::ToString(a, 2);
			lblShowOp->Text = "BIN( " + Convert::ToString(a) + " )";
			history->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
		}

	private:
		System::Void ButtonOct_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//Octal
			int a = int ::Parse(txtDisplay->Text);
			txtDisplay->Text = Convert::ToString(a, 8);
			lblShowOp->Text = "OCT( " + Convert::ToString(a) + " )";
			history->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
		}

	private:
		System::Void ButtonHex_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			//HexaDecimal
			int a = int ::Parse(txtDisplay->Text);
			txtDisplay->Text = Convert::ToString(a, 16);
			lblShowOp->Text = "HEX( " + Convert::ToString(a) + " )";
			history->Items->Add(lblShowOp->Text + " = " + txtDisplay->Text);
		}
		//NUMBER SYSTEM END
	};
} // namespace ScienCalc