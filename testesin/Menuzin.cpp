#include "Menuzin.h"

using namespace testesin;

[STAThreadAttribute]
void ShowMenu()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Menuzin());
	Application::Exit();
}

