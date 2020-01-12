#include "Solver.h"
#include <Windows.h>

//FORM GENERATOR .CPP CODE//

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lin2Varh::Solver form; //USE NAMESPACE :: FORM_NAME
	Application::Run(% form);
	return 0;

	FreeConsole(); //Removes the Console Window
}
//