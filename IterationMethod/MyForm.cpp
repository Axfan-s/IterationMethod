#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IterationMethod::MyForm form;
	Application::Run(% form);
}
