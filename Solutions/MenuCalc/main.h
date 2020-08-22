#include <Windows.h>
using namespace std;
#pragma once

namespace MenuCalc
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
		System::Windows::Forms::Label ^ Topic;

	private:
		System::Windows::Forms::Button ^ button1;

	private:
		System::Windows::Forms::Button ^ button2;

	private:
		System::Windows::Forms::DateTimePicker ^ dateTimePicker1;

	private:
		System::Windows::Forms::Label ^ label1;

	private:
		System::Windows::Forms::PictureBox ^ pictureBox1;

	private:
		System::Windows::Forms::Label ^ label2;

	private:
		System::Windows::Forms::Button ^ button4;

	private:
		System::Windows::Forms::Label ^ label3;

	private:
		System::Windows::Forms::Button ^ button3;

	private:
		System::Windows::Forms::Button ^ button7;

	private:
		System::Windows::Forms::Button ^ button8;

	protected:
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
			this->Topic = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			//
			// Topic
			//
			this->Topic->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Topic->AutoSize = true;
			this->Topic->BackColor = System::Drawing::Color::Red;
			this->Topic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Topic->Font = (gcnew System::Drawing::Font(L"Product Sans", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
															 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Topic->ForeColor = System::Drawing::Color::White;
			this->Topic->Location = System::Drawing::Point(151, 110);
			this->Topic->Name = L"Topic";
			this->Topic->Size = System::Drawing::Size(360, 45);
			this->Topic->TabIndex = 0;
			this->Topic->Text = L"Calculator de Smarte";
			this->Topic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// button1
			//
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Navy;
			this->button1->Location = System::Drawing::Point(361, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 50);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SCIENTIFIC";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main::Button1_Click);
			//
			// button2
			//
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Navy;
			this->button2->Location = System::Drawing::Point(149, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 50);
			this->button2->TabIndex = 2;
			this->button2->Text = L"GENERAL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &main::Button2_Click);
			//
			// dateTimePicker1
			//
			this->dateTimePicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dateTimePicker1->Location = System::Drawing::Point(448, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 21);
			this->dateTimePicker1->TabIndex = 4;
			//
			// label1
			//
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::ForestGreen;
			this->label1->Location = System::Drawing::Point(229, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 34);
			this->label1->TabIndex = 5;
			this->label1->Text = L"CALCULATORS:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// pictureBox1
			//
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(685, 281);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			//
			// label2
			//
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::ForestGreen;
			this->label2->Location = System::Drawing::Point(238, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 34);
			this->label2->TabIndex = 9;
			this->label2->Text = L"CONVERTER:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// button4
			//
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(195, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(260, 50);
			this->button4->TabIndex = 7;
			this->button4->Text = L"UNIT CONVERTER";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &main::Button4_Click);
			//
			// label3
			//
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Product Sans", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															  static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::ForestGreen;
			this->label3->Location = System::Drawing::Point(199, 526);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(266, 34);
			this->label3->TabIndex = 11;
			this->label3->Text = L"EQUATION SOLVER:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			//
			// button3
			//
			this->button3->AllowDrop = true;
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Product Sans", 14, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Navy;
			this->button3->Location = System::Drawing::Point(235, 573);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 50);
			this->button3->TabIndex = 10;
			this->button3->Text = L"LINEAR (3 VAR)";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &main::Button3_Click);
			//
			// button7
			//
			this->button7->AllowDrop = true;
			this->button7->AutoSize = true;
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button7->FlatAppearance->BorderSize = 2;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Product Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Navy;
			this->button7->Location = System::Drawing::Point(418, 573);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 50);
			this->button7->TabIndex = 14;
			this->button7->Text = L"QUADRATIC";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &main::Button7_Click);
			//
			// button8
			//
			this->button8->AllowDrop = true;
			this->button8->AutoSize = true;
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->button8->FlatAppearance->BorderSize = 2;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
																								 static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Product Sans", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Navy;
			this->button8->Location = System::Drawing::Point(55, 573);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(159, 50);
			this->button8->TabIndex = 15;
			this->button8->Text = L"LINEAR (2 VAR)";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &main::Button8_Click);
			//
			// main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(686, 749);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Topic);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Product Sans", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(0)));
			this->MaximizeBox = false;
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator de Smarte";
			this->Load += gcnew System::EventHandler(this, &main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

		//SCIENTIFIC CALC BUTTON
	private:
		System::Void Button1_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"ScienCalc.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}
		//GENERAL CALCULATOR BUTTON
	private:
		System::Void Button2_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"GenCalc.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}

		//MAIN WINDOW
	private:
		System::Void Main_Load(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

		//UNIT CONVERTER BUTTON
	private:
		System::Void Button4_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"Converter.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}
		//lINEAR BUTTON
	private:
		System::Void Button8_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"Lin2Calc.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}

		//QUADRATIC BUTTON
	private:
		System::Void Button7_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"QuadCalc.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}

	private:
		System::Void Button3_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			PROCESS_INFORMATION processInfo = {0};
			STARTUPINFO startInfo = {0};
			CreateProcess(L"Lin3Calc.exe", NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
		}
	};
} // namespace MenuCalc
