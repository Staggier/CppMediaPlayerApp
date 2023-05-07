#pragma once
#include "CategoriesForm.h"

namespace MediaPlayerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ WelcomeLabel;
	private: System::Windows::Forms::PictureBox^ AppLogo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ LoadButton;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->WelcomeLabel = (gcnew System::Windows::Forms::Label());
			this->AppLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->LoadButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// WelcomeLabel
			// 
			this->WelcomeLabel->AutoSize = true;
			this->WelcomeLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeLabel->Location = System::Drawing::Point(139, 48);
			this->WelcomeLabel->Name = L"WelcomeLabel";
			this->WelcomeLabel->Size = System::Drawing::Size(582, 44);
			this->WelcomeLabel->TabIndex = 0;
			this->WelcomeLabel->Text = L"Welcome to the C++ Media Player App";
			this->WelcomeLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// AppLogo
			// 
			this->AppLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AppLogo.Image")));
			this->AppLogo->ImageLocation = L"";
			this->AppLogo->Location = System::Drawing::Point(320, 164);
			this->AppLogo->Name = L"AppLogo";
			this->AppLogo->Size = System::Drawing::Size(226, 224);
			this->AppLogo->TabIndex = 1;
			this->AppLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12));
			this->label1->Location = System::Drawing::Point(517, 612);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Developed by: Jordan McIntyre";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// StartButton
			// 
			this->StartButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14));
			this->StartButton->Location = System::Drawing::Point(338, 394);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(154, 48);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MainForm::StartButton_Click);
			// 
			// LoadButton
			// 
			this->LoadButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoadButton->Location = System::Drawing::Point(338, 472);
			this->LoadButton->Name = L"LoadButton";
			this->LoadButton->Size = System::Drawing::Size(154, 48);
			this->LoadButton->TabIndex = 4;
			this->LoadButton->Text = L"Load";
			this->LoadButton->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(850, 650);
			this->Controls->Add(this->LoadButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AppLogo);
			this->Controls->Add(this->WelcomeLabel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AppLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		CategoriesForm^ form = gcnew CategoriesForm;
		form->Show();
	}
};
}
