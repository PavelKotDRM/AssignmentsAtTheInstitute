#include "DeleteWindow.h"
#include <Windows.h>

using namespace KyrsovProgect;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew DeleteWindow);
    return 0;
}

