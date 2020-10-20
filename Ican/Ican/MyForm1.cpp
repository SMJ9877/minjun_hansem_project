#include "MyForm1.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void MyForm1(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Ican::MyForm1 form1;

	Application::Run(% form1);

}