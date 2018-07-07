#include <windows.h>

static int g_nScreenIndex;
static HANDLE g_hScreen[2];

void ScreenInit()
{
  CONSOLE_CURSOR_INFO cci;

  //버퍼 2개 생성
  g_hScreen[0] = CreateConsoleScreenBuffer( GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL );
  g_hScreen[1] = CreateConsoleScreenBuffer( GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL );

  cci.dwSize = 1;
  cci.bVisible = FALSE;
  SetConsoleCursorInfo( g_hScreen[0], & cci);
  SetConsoleCursorInfo( g_hScreen[1], & cci);
}

void ScreenFlipping()
{
  SetConsoleActiveScreenBuffer( g_hScreen[g_hScreenIndex]);
  g_nScreenIndex =! g_nScreenIndex;
}

void ScreenClear()
{
  COORD Coor = { 0, 0 };
  DWORD dw
  FillConsoleOutputCharacter(g_nScreenIndex[g_nScreenIndex], '', 80*25, Coor, &dw);
}

void ScreenRelease()
{
  CloseHandle(g_nScreen[0]);
  CloseHandle(g_nScreen[1]);
}

void ScreenPrint(int x, int y, char *string)
{
  DWORD dw
  COORD Coor = { x, y };
  SetConsoleCursorPosition(g_nScreenIndex[g_nScreenIndex], CursorPosition);
  WriteFile(g_nScreenIndex[g_nScreenIndex], string, strlen(string), &dw, NULL);
}

void SetColor()
{
  SetConsoleTextAttribute((g_nScreenIndex[g_nScreenIndex], color);
}
