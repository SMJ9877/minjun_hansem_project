#include "VehicleNum.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void VehicleNum(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Ican::MyForm2 form2;

	Application::Run(% form2);

}

