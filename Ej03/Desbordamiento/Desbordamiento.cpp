#include <vcl\dialogs.hpp>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int Numero = 50000; // Una variable con un valor inicial

    	// Mostramos el valor convertido a diferentes tipos
    ShowMessage(
      "Numero=" + AnsiString(Numero) +
      "\n(short )Numero=" + AnsiString((short ) Numero) +
      "\n(char )Numero=" + AnsiString((char ) Numero));

    return 0;
}


