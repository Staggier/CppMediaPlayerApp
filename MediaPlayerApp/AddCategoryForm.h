#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "Category.h"

namespace MediaPlayerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for AddCategoryForm
	/// </summary>
	public ref class AddCategoryForm : public System::Windows::Forms::Form
	{
	public:
		AddCategoryForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddCategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ NameLabel;

	private: System::Windows::Forms::Label^ ImageUrlLabel;
	private: System::Windows::Forms::TextBox^ NameTextBox;
	private: System::Windows::Forms::TextBox^ ImageUrlTextBox;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->ImageUrlLabel = (gcnew System::Windows::Forms::Label());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ImageUrlTextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(309, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Add Category";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->Location = System::Drawing::Point(26, 52);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(89, 30);
			this->NameLabel->TabIndex = 1;
			this->NameLabel->Text = L"Name:";
			// 
			// ImageUrlLabel
			// 
			this->ImageUrlLabel->AutoSize = true;
			this->ImageUrlLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageUrlLabel->Location = System::Drawing::Point(26, 198);
			this->ImageUrlLabel->Name = L"ImageUrlLabel";
			this->ImageUrlLabel->Size = System::Drawing::Size(131, 30);
			this->ImageUrlLabel->TabIndex = 2;
			this->ImageUrlLabel->Text = L"Image Url:";
			// 
			// NameTextBox
			// 
			this->NameTextBox->Location = System::Drawing::Point(31, 123);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(429, 37);
			this->NameTextBox->TabIndex = 3;
			// 
			// ImageUrlTextBox
			// 
			this->ImageUrlTextBox->Location = System::Drawing::Point(31, 275);
			this->ImageUrlTextBox->Name = L"ImageUrlTextBox";
			this->ImageUrlTextBox->Size = System::Drawing::Size(429, 37);
			this->ImageUrlTextBox->TabIndex = 4;
			this->ImageUrlTextBox->Click += gcnew System::EventHandler(this, &AddCategoryForm::ImageUrlTextBox_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::MediumAquamarine;
			this->groupBox1->Controls->Add(this->NameLabel);
			this->groupBox1->Controls->Add(this->ImageUrlTextBox);
			this->groupBox1->Controls->Add(this->NameTextBox);
			this->groupBox1->Controls->Add(this->ImageUrlLabel);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(147, 116);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(492, 392);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"New Category";
			// 
			// CancelButton
			// 
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->Location = System::Drawing::Point(239, 529);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(117, 42);
			this->CancelButton->TabIndex = 6;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &AddCategoryForm::CancelButton_Click);
			// 
			// AddButton
			// 
			this->AddButton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddButton->Location = System::Drawing::Point(429, 529);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(117, 42);
			this->AddButton->TabIndex = 7;
			this->AddButton->Text = L"Add";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &AddCategoryForm::AddButton_Click);
			// 
			// AddCategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(828, 594);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"AddCategoryForm";
			this->Text = L"AddCategoryForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->OwnedForms[0]->Show();
		this->RemoveOwnedForm(this->OwnedForms[0]);
		this->Close();
	}

	private: System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::fstream categoryFile;
		categoryFile.open(Category::getFileName(), std::ios_base::app);

		categoryFile << msclr::interop::marshal_as<std::string>(NameTextBox->Text) << std::endl;
		categoryFile << msclr::interop::marshal_as<std::string>(ImageUrlTextBox->Text) << std::endl;

		categoryFile.close();

		this->OwnedForms[0]->Show();
		Form^ form = this->OwnedForms[0];
		this->RemoveOwnedForm(this->OwnedForms[0]);
		this->Close();
	}

	private: System::Void ImageUrlTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog ofd;
		ofd.ShowDialog();

		if (ofd.FileName != "") {
			ImageUrlTextBox->Text = ofd.FileName;
		}
	}
};
}
