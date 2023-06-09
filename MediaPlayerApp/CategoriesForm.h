#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "Category.h"
#include "CategoryForm.h"
#include "AddCategoryForm.h"
#include <msclr\marshal_cppstd.h>


namespace MediaPlayerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for CategoriesForm
	/// </summary>
	public ref class CategoriesForm : public System::Windows::Forms::Form
	{
	public:
		CategoriesForm(void)
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
		~CategoriesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ CategoriesListView;

	private: System::Windows::Forms::Button^ AddCategoryButton;
	private: System::Windows::Forms::Button^ ClearCategoriesButton;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CategoriesListView = (gcnew System::Windows::Forms::ListView());
			this->AddCategoryButton = (gcnew System::Windows::Forms::Button());
			this->ClearCategoriesButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(296, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(241, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Select a Category";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// CategoriesListView
			// 
			this->CategoriesListView->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CategoriesListView->HideSelection = false;
			this->CategoriesListView->Location = System::Drawing::Point(191, 81);
			this->CategoriesListView->Name = L"CategoriesListView";
			this->CategoriesListView->Size = System::Drawing::Size(463, 388);
			this->CategoriesListView->TabIndex = 1;
			this->CategoriesListView->UseCompatibleStateImageBehavior = false;
			this->CategoriesListView->Click += gcnew System::EventHandler(this, &CategoriesForm::CategoriesListView_Clicked);
			// 
			// AddCategoryButton
			// 
			this->AddCategoryButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCategoryButton->Location = System::Drawing::Point(447, 503);
			this->AddCategoryButton->Name = L"AddCategoryButton";
			this->AddCategoryButton->Size = System::Drawing::Size(191, 50);
			this->AddCategoryButton->TabIndex = 3;
			this->AddCategoryButton->Text = L"Add Category";
			this->AddCategoryButton->UseVisualStyleBackColor = true;
			this->AddCategoryButton->Click += gcnew System::EventHandler(this, &CategoriesForm::AddCategoryButton_Click);
			// 
			// ClearCategoriesButton
			// 
			this->ClearCategoriesButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearCategoriesButton->Location = System::Drawing::Point(221, 503);
			this->ClearCategoriesButton->Name = L"ClearCategoriesButton";
			this->ClearCategoriesButton->Size = System::Drawing::Size(191, 50);
			this->ClearCategoriesButton->TabIndex = 4;
			this->ClearCategoriesButton->Text = L"Clear All";
			this->ClearCategoriesButton->UseVisualStyleBackColor = true;
			this->ClearCategoriesButton->Click += gcnew System::EventHandler(this, &CategoriesForm::ClearCategoriesButton_Click);
			// 
			// CategoriesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(828, 594);
			this->Controls->Add(this->ClearCategoriesButton);
			this->Controls->Add(this->AddCategoryButton);
			this->Controls->Add(this->CategoriesListView);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"CategoriesForm";
			this->Text = L"CategoriesForm";
			this->Shown += gcnew System::EventHandler(this, &CategoriesForm::OnCategoriesPage_Shown);
			this->VisibleChanged += gcnew System::EventHandler(this, &CategoriesForm::OnCategoriesPage_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ClearCategoriesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Remove and re-create the Categories file
		remove(Category::getFileName().c_str());
		std::ofstream categoriesFile(Category::getFileName());

		CategoriesListView->Items->Clear();
	}

	private: System::Void AddCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		AddCategoryForm^ form = gcnew AddCategoryForm;
		form->AddOwnedForm(this);

		form->Show();
		this->Hide();
	}
	

	public: System::Void static AddCategoryToFile(Category category) {
		std::fstream categoryFile;
		categoryFile.open(Category::getFileName(), std::ios_base::app);

		categoryFile << category.getName().c_str() << std::endl;
		categoryFile << category.getImageUrl().c_str() << std::endl;
	}

	public: std::vector<Category> static GetDefaultCategories() {
		std::vector<Category> v = {
				Category(std::string("Movies"), std::string("c- (1).png")),
				Category(std::string("Shows"), std::string("c- (1).png")),
				Category(std::string("Miscellaneous"), std::string("c- (1).png"))
		};

		std::ofstream categoryFile(Category::getFileName());
		for (Category c : v) {
			AddCategoryToFile(c);
		}

		return v;
	}

	// Load Categories from a file or from default settings
	public: std::vector<Category> static LoadCategories() {
		if (File::Exists(gcnew String(Category::getFileName().c_str()))) {
			std::ifstream categoryFile;
			categoryFile.open(Category::getFileName());

			std::string line;
			int mediaCount = 0;

			std::vector<Category> categories;

			while (std::getline(categoryFile, line)) {
				// The first line of the file should always be the Category title
				Category category = Category(line, "");
				std::getline(categoryFile, line);

				// The second line of the file should always be the Image URL of the Category
				category.setImageUrl(line);

				categories.push_back(category);
			}

			return categories;
		}
		else {
			return CategoriesForm::GetDefaultCategories();
		}
	}

	private: System::Void CategoriesListView_Clicked(System::Object^ sender, System::EventArgs^ e) {
		Point mousePosition = CategoriesListView->PointToClient(Control::MousePosition);
		ListView^ listView = safe_cast<ListView^>(sender);
		ListViewHitTestInfo^ hitTest = (*listView).HitTest(mousePosition.X, mousePosition.Y);

		int index = hitTest->Item->Index;
		if (index >= 0) {
			CategoryForm^ form = gcnew CategoryForm(CategoriesForm::LoadCategories()[index], index);
			form->AddOwnedForm(this);
			form->Show();
			this->Hide();
		}
	}

	private: System::Void OnCategoriesPage_Shown(System::Object^ sender, System::EventArgs^ e) {
		CategoriesListView->View = View::List;
		CategoriesListView->Items->Clear();

		CategoriesListView->SmallImageList = gcnew ImageList;
		int imageIndex = 0;

		for (Category category : CategoriesForm::LoadCategories()) {
			CategoriesListView->SmallImageList->Images->Add(Image::FromFile(gcnew String(category.getImageUrl().c_str())));
			CategoriesListView->Items->Add(gcnew String(category.getName().c_str()), imageIndex);

			imageIndex += 1;
		}
	}
};
}
