#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void First(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LM::MyForm2);

}