#pragma once
#include "Category.h"
#include <msclr\marshal_cppstd.h>

namespace MediaPlayerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CategoryForm
	/// </summary>
	public ref class CategoryForm : public System::Windows::Forms::Form
	{
	public: System::Int16 index;
	public:
		CategoryForm(Category category, int index) {
			InitializeComponent();

			this->index = index;
			CategoryNameTextBox->Text = gcnew String(category.getName().c_str());
			ImageUrlTextBox->Text = gcnew String(category.getImageUrl().c_str());
			CategoryImage->Image = Image::FromFile(gcnew String(category.getImageUrl().c_str()));
			
			MediaListView->View = View::List;
			MediaListView->Items->Clear();

			//MediaListView->Items->Add(gcnew String("C:\\Users\\Jordan\\Downloads\\vid.mp4"));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CategoryNameLabel;
	private: System::Windows::Forms::PictureBox^ CategoryImage;
	private: System::Windows::Forms::Label^ ImageUrlLabel;
	private: System::Windows::Forms::ListView^ MediaListView;

	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Button^ EditButton;
	private: System::Windows::Forms::Button^ AddMediaButton;

	private: System::Windows::Forms::TextBox^ CategoryNameTextBox;

	private: System::Windows::Forms::TextBox^ ImageUrlTextBox;


	private: System::Windows::Forms::Button^ DeleteCategoryButton;

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
			this->CategoryNameLabel = (gcnew System::Windows::Forms::Label());
			this->CategoryImage = (gcnew System::Windows::Forms::PictureBox());
			this->ImageUrlLabel = (gcnew System::Windows::Forms::Label());
			this->MediaListView = (gcnew System::Windows::Forms::ListView());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->AddMediaButton = (gcnew System::Windows::Forms::Button());
			this->CategoryNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ImageUrlTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DeleteCategoryButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CategoryImage))->BeginInit();
			this->SuspendLayout();
			// 
			// CategoryNameLabel
			// 
			this->CategoryNameLabel->AutoSize = true;
			this->CategoryNameLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CategoryNameLabel->Location = System::Drawing::Point(273, 41);
			this->CategoryNameLabel->Name = L"CategoryNameLabel";
			this->CategoryNameLabel->Size = System::Drawing::Size(149, 39);
			this->CategoryNameLabel->TabIndex = 0;
			this->CategoryNameLabel->Text = L"Category: ";
			// 
			// CategoryImage
			// 
			this->CategoryImage->BackColor = System::Drawing::Color::SteelBlue;
			this->CategoryImage->Location = System::Drawing::Point(49, 41);
			this->CategoryImage->Name = L"CategoryImage";
			this->CategoryImage->Size = System::Drawing::Size(196, 196);
			this->CategoryImage->TabIndex = 1;
			this->CategoryImage->TabStop = false;
			// 
			// ImageUrlLabel
			// 
			this->ImageUrlLabel->AutoSize = true;
			this->ImageUrlLabel->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageUrlLabel->Location = System::Drawing::Point(279, 138);
			this->ImageUrlLabel->Name = L"ImageUrlLabel";
			this->ImageUrlLabel->Size = System::Drawing::Size(164, 39);
			this->ImageUrlLabel->TabIndex = 2;
			this->ImageUrlLabel->Text = L"Image URL:";
			// 
			// MediaListView
			// 
			this->MediaListView->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MediaListView->HideSelection = false;
			this->MediaListView->Location = System::Drawing::Point(280, 207);
			this->MediaListView->Name = L"MediaListView";
			this->MediaListView->Size = System::Drawing::Size(452, 243);
			this->MediaListView->TabIndex = 3;
			this->MediaListView->UseCompatibleStateImageBehavior = false;
			this->MediaListView->Click += gcnew System::EventHandler(this, &CategoryForm::MediaListView_Click);
			// 
			// BackButton
			// 
			this->BackButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackButton->Location = System::Drawing::Point(320, 517);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(157, 55);
			this->BackButton->TabIndex = 4;
			this->BackButton->Text = L"Back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &CategoryForm::BackButton_Click);
			// 
			// EditButton
			// 
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditButton->Location = System::Drawing::Point(71, 324);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(157, 55);
			this->EditButton->TabIndex = 5;
			this->EditButton->Text = L"Edit";
			this->EditButton->UseVisualStyleBackColor = true;
			this->EditButton->Click += gcnew System::EventHandler(this, &CategoryForm::EditButton_Click);
			// 
			// AddMediaButton
			// 
			this->AddMediaButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMediaButton->Location = System::Drawing::Point(530, 517);
			this->AddMediaButton->Name = L"AddMediaButton";
			this->AddMediaButton->Size = System::Drawing::Size(157, 55);
			this->AddMediaButton->TabIndex = 6;
			this->AddMediaButton->Text = L"Add Media";
			this->AddMediaButton->UseVisualStyleBackColor = true;
			this->AddMediaButton->Click += gcnew System::EventHandler(this, &CategoryForm::AddMediaButton_Click);
			// 
			// CategoryNameTextBox
			// 
			this->CategoryNameTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CategoryNameTextBox->Location = System::Drawing::Point(465, 38);
			this->CategoryNameTextBox->Name = L"CategoryNameTextBox";
			this->CategoryNameTextBox->Size = System::Drawing::Size(267, 47);
			this->CategoryNameTextBox->TabIndex = 7;
			// 
			// ImageUrlTextBox
			// 
			this->ImageUrlTextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImageUrlTextBox->Location = System::Drawing::Point(465, 135);
			this->ImageUrlTextBox->Name = L"ImageUrlTextBox";
			this->ImageUrlTextBox->Size = System::Drawing::Size(267, 47);
			this->ImageUrlTextBox->TabIndex = 8;
			// 
			// DeleteCategoryButton
			// 
			this->DeleteCategoryButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteCategoryButton->Location = System::Drawing::Point(71, 517);
			this->DeleteCategoryButton->Name = L"DeleteCategoryButton";
			this->DeleteCategoryButton->Size = System::Drawing::Size(157, 55);
			this->DeleteCategoryButton->TabIndex = 9;
			this->DeleteCategoryButton->Text = L"Delete";
			this->DeleteCategoryButton->UseVisualStyleBackColor = true;
			this->DeleteCategoryButton->Click += gcnew System::EventHandler(this, &CategoryForm::DeleteCategoryButton_Click);
			// 
			// CategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(828, 594);
			this->Controls->Add(this->DeleteCategoryButton);
			this->Controls->Add(this->ImageUrlTextBox);
			this->Controls->Add(this->CategoryNameTextBox);
			this->Controls->Add(this->AddMediaButton);
			this->Controls->Add(this->EditButton);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->MediaListView);
			this->Controls->Add(this->ImageUrlLabel);
			this->Controls->Add(this->CategoryImage);
			this->Controls->Add(this->CategoryNameLabel);
			this->Name = L"CategoryForm";
			this->Text = L"CategoryForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CategoryImage))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void ShowAndRemoveOwnedForm() {
		this->OwnedForms[0]->Show();
		this->RemoveOwnedForm(this->OwnedForms[0]);
		this->Close();
	}
	private: System::Void BackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowAndRemoveOwnedForm();
	}

	private: System::Void EditButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ newCategoryName = CategoryNameTextBox->Text,
			  ^ newImageURL = ImageUrlTextBox->Text;

		ShowAndRemoveOwnedForm();
	}

	private: System::Void DeleteCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowAndRemoveOwnedForm();
	}

	private: System::Void MediaListView_Click(System::Object^ sender, System::EventArgs^ e) {
		Point mousePosition = MediaListView->PointToClient(Control::MousePosition);
		ListView^ listView = safe_cast<ListView^>(sender);
		ListViewHitTestInfo^ hitTest = (*listView).HitTest(mousePosition.X, mousePosition.Y);

		int index = hitTest->Item->Index;
		if (index >= 0) {
			system(msclr::interop::marshal_as<std::string>(String::Format("{0}", MediaListView->Items[index]->Text)).c_str());
		}
	}

	private: System::Void AddMediaButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog ofd;
		ofd.ShowDialog();

		if (ofd.FileName != "") {
			std::string filename = msclr::interop::marshal_as<std::string>(ofd.FileName);
			MediaListView->Items->Add(gcnew String(filename.c_str()));
		}
	}
};
}
