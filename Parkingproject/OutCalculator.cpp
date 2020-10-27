#include "OutCalculator.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void OutCalculator(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Parkingproject::OutCalculator form;

	Application::Run(% form);

}