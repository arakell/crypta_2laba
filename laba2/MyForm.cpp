#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	laba2::MyForm form;
	Application::Run(%form);

	return 0;
}