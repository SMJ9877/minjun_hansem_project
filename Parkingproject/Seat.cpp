#include "Seat.h"

using namespace System;

using namespace System::Windows::Forms;



[STAThreadAttribute]

void Main(array<String^>^ args) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Parkingproject::Seat form;

	Application::Run(% form);

}