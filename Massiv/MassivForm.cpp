#include "MassivForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Massiv::MassivForm form;
	Application::Run(%form);
	return 0;
}
