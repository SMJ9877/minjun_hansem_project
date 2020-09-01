#include "MyForm.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void MyForm(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Ican::MyForm form;

	Application::Run(% form);

}
