#include <vcl\dialogs.hpp>

const char Retorno = '\n'; // Constante con tipo
const Segundos = 3600; // Constante sin tipo
const char Guiones[] = "-------" ;

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    ShowMessage(AnsiString(Segundos) +
                AnsiString(Retorno) +
                Guiones);
    return 0;
}

