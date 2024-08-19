#include <vcl.h>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int * PNumero; // Puntero a int
    char * PCaracter; // Puntero a char

    PNumero = new int; // Asignamos memoria para un int

    *PNumero = 30000; // Asignamos un valor al int
    PCaracter = (char *) PNumero; // PCaracter apunta al mismo valor

    	// Mostramos el contenido de los punteros
    ShowMessage("*PNumero=" + AnsiString(*PNumero) +
                "\nPCaracter=" + AnsiString(*PCaracter));

    delete PNumero; // Liberamos la memoria asignada

      // !!! PCaracter apunta a una zona de memoria liberada
    *PCaracter = 'x';

    return 0;
}
