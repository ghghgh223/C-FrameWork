#include <stdio.h>
#include <time.h>
#include "Screen.h"

void Init()
{

}
void Update()
{

}
void Render()
{
  ScreenClear();
  ScreenFlipping();
}
void Release()
{

}

int main() {

  int nkey;
  ScreenInit();
  clock_t CurTime, Oldtime;

  Init();

  while (1)
  {
    if(_kbhit())
    {
      nkey = _getch();
      if (nkey == 'q')
      break;
      switch (nkey)
      {
        case j;
          break;
        case i;
          break;
      }
    }
  }
    Update();
    Render();

    while(1)
    {
      CurTime = clock();
      if(CurTime - Oldtime > 33)
      {
        Oldtime = CurTime;
        break;
      }
    }
  }

  Release();
  ScreenRelease();

  return 0;
}
