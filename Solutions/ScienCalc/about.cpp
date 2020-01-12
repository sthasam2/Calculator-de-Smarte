#include "aboutapp.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ScienCalc::about form; //USE NAMESPACE OF FORM
	Application::Run(% form);
	return 0;

	FreeConsole(); //Removes the Console Window
}