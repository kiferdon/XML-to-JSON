#include <Windows.h>
#include "MyForm.h"
#include "ALGORITMY.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
	
}

