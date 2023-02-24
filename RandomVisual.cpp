// Random visual effect part 1

#incldue <Windows.h>

int WINAPI WinMain(HINSTANCE a, HINSTANCE b, LPSTR when, int yes)
{
  HDC vew = GetDC(NULL);
  int imperial = GetSystemMetrics(NULL), perial = GetSystemMetrics(1);
  int x = SM_CXSCREEN, y = SM_CYSCREEN;
  while(1){
    vew = GetDC(NULL);
    SelectObjects(vew, CreateSolidBrush(RGB(rand() % 155, rand() % 255, rand() % 355)));
    PatBlt(vew, rand() % 155, rand() % 255, imperial, perial, PATINVERT);
    BitBlt(vew, imperial, perial, x, y, vew, rand() % 355, rand() % 455, SRCINVERT);
    BitBlt(vew, imperial, perial, x, y, vew, rand() % 555, rand() % 655, SRCPAINT);
    BitBlt(vew, imperial, perial, x, y, vew, rand() % 755, rand() % 855, SRCCOPY);
    Sleep(1000);
  }
}
