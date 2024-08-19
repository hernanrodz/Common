#include <vcl\vcl.h>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int * PNumero; // Puntero a int

    PNumero = new int; // Asignamos memoria suficiente para un int

    	// Mostramos el valor apuntado por PNumero
    ShowMessage("*PNumero=" + AnsiString(*PNumero));

    *PNumero = 5; // Lo modificamos y volvemos a mostrar
    ShowMessage("*PNumero=" + AnsiString(*PNumero));

    delete PNumero; // Liberamos la memoria asignada

    return 0;
}


