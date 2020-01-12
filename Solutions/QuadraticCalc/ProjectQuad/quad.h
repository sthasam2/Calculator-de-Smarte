#include<math.h>
#pragma once

namespace ProjectQuad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class quad : public System::Windows::Forms::Form
	{
	public:
		quad(void)
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
		~quad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Reset;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxX;
	private: System::Windows::Forms::TextBox^  textBoxY;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  linearLabel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBoxb1;
	private: System::Windows::Forms::TextBox^  textBoxa1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(quad::typeid));
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linearLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxb1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxa1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::Transparent;
			this->Reset->FlatAppearance->BorderSize = 2;
			this->Reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reset->ForeColor = System::Drawing::Color::DarkRed;
			this->Reset->Location = System::Drawing::Point(323, 548);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(148, 73);
			this->Reset->TabIndex = 17;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &quad::Reset_Click);
			// 
			// textBoxX
			// 
			this->textBoxX->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxX->Location = System::Drawing::Point(92, 675);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(148, 45);
			this->textBoxX->TabIndex = 19;
			this->textBoxX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxY
			// 
			this->textBoxY->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->textBoxY->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxY->Location = System::Drawing::Point(323, 675);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(148, 45);
			this->textBoxY->TabIndex = 18;
			this->textBoxY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->Location = System::Drawing::Point(37, 683);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 32);
			this->label11->TabIndex = 21;
			this->label11->Text = L"x =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Location = System::Drawing::Point(250, 675);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 45);
			this->label5->TabIndex = 20;
			this->label5->Text = L"OR";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGreen;
			this->button1->Location = System::Drawing::Point(92, 548);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 73);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &quad::button1_Click_2);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->linearLabel);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBoxY);
			this->panel1->Controls->Add(this->textBoxX);
			this->panel1->Controls->Add(this->Reset);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(565, 752);
			this->panel1->TabIndex = 0;
			// 
			// linearLabel
			// 
			this->linearLabel->AutoSize = true;
			this->linearLabel->BackColor = System::Drawing::Color::Red;
			this->linearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linearLabel->ForeColor = System::Drawing::Color::White;
			this->linearLabel->Location = System::Drawing::Point(41, 153);
			this->linearLabel->Name = L"linearLabel";
			this->linearLabel->Size = System::Drawing::Size(492, 54);
			this->linearLabel->TabIndex = 26;
			this->linearLabel->Text = L"QUADRATIC EQN SOLVER";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(558, 232);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(19, 284);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(514, 233);
			this->panel3->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(170, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 30);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ax² + bx + c = 0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Maroon;
			this->label9->Location = System::Drawing::Point(72, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(365, 30);
			this->label9->TabIndex = 9;
			this->label9->Text = L"ENTER RESPECTIVE COEFFICIENTS";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->textBoxb1);
			this->panel4->Controls->Add(this->textBoxa1);
			this->panel4->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Location = System::Drawing::Point(17, 105);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(485, 116);
			this->panel4->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->label3->Location = System::Drawing::Point(328, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 32);
			this->label3->TabIndex = 3;
			this->label3->Text = L"c =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(165, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"b =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(3, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a =";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(377, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxb1
			// 
			this->textBoxb1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxb1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxb1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxb1->Location = System::Drawing::Point(219, 38);
			this->textBoxb1->Name = L"textBoxb1";
			this->textBoxb1->Size = System::Drawing::Size(87, 38);
			this->textBoxb1->TabIndex = 0;
			this->textBoxb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxa1
			// 
			this->textBoxa1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBoxa1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxa1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxa1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBoxa1->Location = System::Drawing::Point(55, 38);
			this->textBoxa1->Name = L"textBoxa1";
			this->textBoxa1->Size = System::Drawing::Size(87, 38);
			this->textBoxa1->TabIndex = 0;
			this->textBoxa1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// quad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(565, 759);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"quad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Quadratic Solver";
			this->Load += gcnew System::EventHandler(this, &quad::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//main window
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		quad::Height = 470;
	}

//solve
	private: System::Void button1_Click_2(System::Object^  sender, System::EventArgs^  e) {
		double a1, b1, c1;
		a1 = System::Convert::ToDouble(textBoxa1->Text);
		b1 = System::Convert::ToDouble(textBoxb1->Text);
		c1 = System::Convert::ToDouble(textBox1->Text);
		double A11;
		A11 = ((b1*b1) - (4 * a1 * c1));
		double x2,y2;
		x2 = (-b1 - (sqrt(A11)));
		y2 = (-b1 + (sqrt(A11)));
		double x3, y3;
		x3 = 0.5*x2;
		y3 = 0.5*y2;
		double XXX, YYY;
		XXX = x3 / a1;
		YYY = y3 / a1;
		String ^XX;
		String ^YY;

		XX = System::Convert::ToString(XXX);
		YY = System::Convert::ToString(YYY);

		textBoxX ->Text = XX;
		textBoxY->Text = YY;

		quad::Height = 540;
	}

//reset
	private: System::Void Reset_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxa1->Text = "";
		textBoxb1->Text = "";
		textBox1->Text = "";
		textBoxX->Text = "";
		textBoxY->Text = "";

		quad::Height = 470;
	}

};
}
