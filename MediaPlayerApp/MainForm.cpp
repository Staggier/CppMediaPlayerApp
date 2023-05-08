#include "MainForm.h"

using namespace MediaPlayerApp;
using namespace System;
using namespace System::Windows::Forms;

void OnFormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Form^ form = safe_cast<Form^>(sender);
	form->FormClosed -= gcnew FormClosedEventHandler(&OnFormClosed);
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
}

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MainForm^ form = gcnew MainForm;
	form->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
	form->Show();
	Application::Run();
	return 0;
}
