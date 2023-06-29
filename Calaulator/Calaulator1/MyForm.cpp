#include "MyForm.h"
#include <Windows.h>
#include <cmath>
#include <string>
using std::string;

using namespace Calaulator1; // Название проекта
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

	return 0;

}
#include "MyForm.h"

