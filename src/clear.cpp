#include "clear.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
