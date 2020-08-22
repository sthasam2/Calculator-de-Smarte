#include "main.h" //USE FORM NAME HEADER INSTEAD OF "main.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] int main(array<String ^> ^ args) {
	FreeConsole(); //Removes the Console Window

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MenuCalc::main form; //USE NAMESPACE OF FORM
	Application::Run(% form);
	return 0;
}