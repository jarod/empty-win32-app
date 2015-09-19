#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
				   HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine,
				   int nCmdShow)
{
	MessageBoxA(nullptr,
				"Hello World!",
				"Empty win32 app",
				MB_OK);
	return 0;
}

