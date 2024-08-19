#include <vcl\dialogs.hpp>

int Contador, N;
float Acumulado;
char LetraNIF;
bool Abierto;

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    ShowMessage("Ocupación en memoria\n"
                "--------------------\n"
                "Contador= " + AnsiString(sizeof(Contador)) +
                "\nAcumulado= " + AnsiString(sizeof(Acumulado)) +
                "\nLetraNIF= " + AnsiString(sizeof(LetraNIF)) +
                "\nAbierto= " + AnsiString(sizeof(Abierto)));
    return 0;
}

