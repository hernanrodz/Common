#include <vcl\vcl.h>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int * PNumero; // Puntero a int

    PNumero = new int[5000]; // Asignamos memoria para 5000 int

    	// Inicializamos dos de los elementos
    PNumero[1] = 5; // Los modificamos
    PNumero[7] = 10; // y mostramos
    ShowMessage("PNumero[1]=" + AnsiString(PNumero[1]) +
                "\nPNumero[7]=" + AnsiString(PNumero[7]));

    delete [] PNumero; // Liberamos la memoria asignada

    return 0;
}


