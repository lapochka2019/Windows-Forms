#include "MyForm.h"
#include <Windows.h>
#include <cmath>
#include <string>
using std::string;

using namespace Project1; // �������� �������
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

		return 0;

}
