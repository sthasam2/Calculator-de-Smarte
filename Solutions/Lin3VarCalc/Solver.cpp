#include <Windows.h>

//FORM GENERATOR .CPP CODE//
#include "Solver.h" //USE FORM NAME HEADER INSTEAD OF "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	FreeConsole(); //Removes the Console Window
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lin3Var::Solver form; //USE NAMESPACE OF FORM
	Application::Run(% form);
	return 0;


}