#pragma once

namespace GenCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
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
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Label^ lblShowOp;

	private: System::Windows::Forms::Button^ buttonBS;
	private: System::Windows::Forms::Button^ buttonCE;
	private: System::Windows::Forms::Button^ buttonC;
	private: System::Windows::Forms::Button^ buttonDiv;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ buttonPro;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ buttonMInus;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ buttonPM;
	private: System::Windows::Forms::Button^ buttonEquals;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
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
			this->buttonMInus = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonPM = (gcnew System::Windows::Forms::Button());
			this->buttonEquals = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Product Sans", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->txtDisplay->Location = System::Drawing::Point(14, 31);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(5);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(218, 41);
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
			this->lblShowOp->Location = System::Drawing::Point(22, 9);
			this->lblShowOp->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 17);
			this->lblShowOp->TabIndex = 1;
			// 
			// buttonBS
			// 
			this->buttonBS->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonBS.BackgroundImage")));
			this->buttonBS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonBS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonBS->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonBS->FlatAppearance->BorderSize = 0;
			this->buttonBS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonBS->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBS->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonBS->Location = System::Drawing::Point(13, 94);
			this->buttonBS->Name = L"buttonBS";
			this->buttonBS->Size = System::Drawing::Size(50, 50);
			this->buttonBS->TabIndex = 2;
			this->buttonBS->Text = L"←";
			this->buttonBS->UseVisualStyleBackColor = true;
			this->buttonBS->Click += gcnew System::EventHandler(this, &main::ButtonBS_Click);
			// 
			// buttonCE
			// 
			this->buttonCE->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCE.BackgroundImage")));
			this->buttonCE->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonCE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCE->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonCE->FlatAppearance->BorderSize = 0;
			this->buttonCE->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCE->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCE->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonCE->Location = System::Drawing::Point(69, 94);
			this->buttonCE->Name = L"buttonCE";
			this->buttonCE->Size = System::Drawing::Size(50, 50);
			this->buttonCE->TabIndex = 3;
			this->buttonCE->Text = L"CE";
			this->buttonCE->UseVisualStyleBackColor = true;
			this->buttonCE->Click += gcnew System::EventHandler(this, &main::ButtonCE_Click);
			// 
			// buttonC
			// 
			this->buttonC->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonC.BackgroundImage")));
			this->buttonC->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonC->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonC->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonC->FlatAppearance->BorderSize = 0;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonC->Location = System::Drawing::Point(125, 94);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(50, 50);
			this->buttonC->TabIndex = 4;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = true;
			this->buttonC->Click += gcnew System::EventHandler(this, &main::ButtonC_Click);
			// 
			// buttonDiv
			// 
			this->buttonDiv->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDiv.BackgroundImage")));
			this->buttonDiv->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDiv->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiv->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonDiv->FlatAppearance->BorderSize = 0;
			this->buttonDiv->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDiv->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDiv->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDiv->Location = System::Drawing::Point(181, 94);
			this->buttonDiv->Name = L"buttonDiv";
			this->buttonDiv->Size = System::Drawing::Size(50, 50);
			this->buttonDiv->TabIndex = 5;
			this->buttonDiv->Text = L"÷";
			this->buttonDiv->UseVisualStyleBackColor = true;
			this->buttonDiv->Click += gcnew System::EventHandler(this, &main::Arith_Op);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(13, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 2;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(69, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 3;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(125, 150);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 4;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// buttonPro
			// 
			this->buttonPro->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPro.BackgroundImage")));
			this->buttonPro->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPro->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPro->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonPro->FlatAppearance->BorderSize = 0;
			this->buttonPro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPro->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPro->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPro->Location = System::Drawing::Point(181, 150);
			this->buttonPro->Name = L"buttonPro";
			this->buttonPro->Size = System::Drawing::Size(50, 50);
			this->buttonPro->TabIndex = 5;
			this->buttonPro->Text = L"×";
			this->buttonPro->UseVisualStyleBackColor = true;
			this->buttonPro->Click += gcnew System::EventHandler(this, &main::Arith_Op);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(13, 206);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 2;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(69, 206);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 3;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(125, 206);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// buttonMInus
			// 
			this->buttonMInus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMInus.BackgroundImage")));
			this->buttonMInus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonMInus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMInus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonMInus->FlatAppearance->BorderSize = 0;
			this->buttonMInus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMInus->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMInus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonMInus->Location = System::Drawing::Point(181, 206);
			this->buttonMInus->Name = L"buttonMInus";
			this->buttonMInus->Size = System::Drawing::Size(50, 50);
			this->buttonMInus->TabIndex = 5;
			this->buttonMInus->Text = L"-";
			this->buttonMInus->UseVisualStyleBackColor = true;
			this->buttonMInus->Click += gcnew System::EventHandler(this, &main::Arith_Op);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(13, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(69, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(125, 262);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPlus.BackgroundImage")));
			this->buttonPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPlus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPlus->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonPlus->FlatAppearance->BorderSize = 0;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPlus->Location = System::Drawing::Point(181, 262);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(50, 50);
			this->buttonPlus->TabIndex = 5;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &main::Arith_Op);
			// 
			// buttonDot
			// 
			this->buttonDot->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDot.BackgroundImage")));
			this->buttonDot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonDot->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDot->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonDot->FlatAppearance->BorderSize = 0;
			this->buttonDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDot->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonDot->Location = System::Drawing::Point(13, 318);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(50, 50);
			this->buttonDot->TabIndex = 2;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = true;
			this->buttonDot->Click += gcnew System::EventHandler(this, &main::ButtonDot_Click);
			// 
			// button0
			// 
			this->button0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button0.BackgroundImage")));
			this->button0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->button0->FlatAppearance->BorderSize = 0;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button0->Location = System::Drawing::Point(69, 318);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 50);
			this->button0->TabIndex = 3;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &main::Num_Click);
			// 
			// buttonPM
			// 
			this->buttonPM->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonPM.BackgroundImage")));
			this->buttonPM->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonPM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPM->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonPM->FlatAppearance->BorderSize = 0;
			this->buttonPM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPM->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPM->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonPM->Location = System::Drawing::Point(125, 318);
			this->buttonPM->Name = L"buttonPM";
			this->buttonPM->Size = System::Drawing::Size(50, 50);
			this->buttonPM->TabIndex = 4;
			this->buttonPM->Text = L"±";
			this->buttonPM->UseVisualStyleBackColor = true;
			this->buttonPM->Click += gcnew System::EventHandler(this, &main::ButtonPM_Click);
			// 
			// buttonEquals
			// 
			this->buttonEquals->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonEquals.BackgroundImage")));
			this->buttonEquals->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonEquals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEquals->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveBorder;
			this->buttonEquals->FlatAppearance->BorderSize = 0;
			this->buttonEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEquals->Font = (gcnew System::Drawing::Font(L"Product Sans", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEquals->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonEquals->Location = System::Drawing::Point(181, 318);
			this->buttonEquals->Name = L"buttonEquals";
			this->buttonEquals->Size = System::Drawing::Size(50, 50);
			this->buttonEquals->TabIndex = 5;
			this->buttonEquals->Text = L"=";
			this->buttonEquals->UseVisualStyleBackColor = true;
			this->buttonEquals->Click += gcnew System::EventHandler(this, &main::ButtonEquals_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(244, 382);
			this->Controls->Add(this->buttonEquals);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMInus);
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
			this->Font = (gcnew System::Drawing::Font(L"Product Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"main";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//declaration for input numbers and operators
		double iFirstNum = 0;		//first input
		double iSecondNum = 0;	//second input
		double iResult;			//result
		String^ iOperator;		//operators

//BUTTONS
		private: System::Void ButtonC_Click(System::Object^ sender, System::EventArgs^ e) {
			//Button CE (Displaying 0 with operator not intact)
			txtDisplay->Text = "0";
			lblShowOp->Text = "";
		}
		private: System::Void ButtonCE_Click(System::Object^ sender, System::EventArgs^ e) {
			//Button C (displaying 0 with operator intact)
			txtDisplay->Text = "0";
		}
		private: System::Void ButtonBS_Click(System::Object^ sender, System::EventArgs^ e) {
			//Button Backspace
			if (txtDisplay->Text->Length > 0) {
				txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
			}
		}

				private: System::Void TxtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
				//after backspace puts 0 when null
					if (txtDisplay->Text == "") {
						txtDisplay->Text = "0";
					}
				}
		private: System::Void Num_Click(System::Object^ sender, System::EventArgs^ e) {
			//Button Numbers displaying in textbox
			Button^ Numbers = safe_cast<Button^>(sender);

			if (txtDisplay->Text == "0") {
				txtDisplay->Text = Numbers->Text; //checking first number is zero from our textbox ie condition of CE or C
			}
			else {
				txtDisplay->Text = txtDisplay->Text + Numbers->Text; //sequentially inputing numbers to right
			}
		}
		private: System::Void Arith_Op(System::Object^ sender, System::EventArgs^ e) {
			//Operators
			Button^ Operator = safe_cast<Button^>(sender); //displaying pressed button operator in textbox

			iFirstNum = Double::Parse(txtDisplay->Text); //converting input number displayed in textbox to double
			txtDisplay->Text = "";
			iOperator = Operator->Text; //convering button input operator to string
			lblShowOp->Text = Convert::ToString(iFirstNum) + " " + iOperator; //displaying at top right label first input and operator
		}
		private: System::Void ButtonEquals_Click(System::Object^ sender, System::EventArgs^ e) {
			//lblShowOp->Text = "";
			iSecondNum = Double::Parse(txtDisplay->Text);

			if (iOperator == "+") { //addition
				iResult = iFirstNum + iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + Convert::ToString(iSecondNum);
			}

			else if (iOperator == "-") { //subtraction
				iResult = iFirstNum - iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + Convert::ToString(iSecondNum);
			}

			else if (iOperator == "×") { //multiplication
				iResult = iFirstNum * iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + Convert::ToString(iSecondNum);
			}

			else if (iOperator == "÷") { //division
				iResult = iFirstNum / iSecondNum;
				txtDisplay->Text = System::Convert::ToString(iResult);
				lblShowOp->Text = lblShowOp->Text + " " + Convert::ToString(iSecondNum);
			}

		}

		private: System::Void ButtonDot_Click(System::Object^ sender, System::EventArgs^ e) {
			//decimal point
			if (!txtDisplay->Text->Contains(".")) {
				txtDisplay->Text = txtDisplay->Text + ".";
			}
		}

		private: System::Void ButtonPM_Click(System::Object^ sender, System::EventArgs^ e) {
		//plus minus
			if (txtDisplay->Text->Contains("-")) {
				txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
			}
			else {
				txtDisplay->Text = "-" + txtDisplay->Text;
			}
		}


};
}
