#include <vcl\vcl.h>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int Numero = 10; // Variable int con un valor inicial
    int* PNumero = &Numero; // Puntero a int con la dirección de Numero

    	// Mostramos el valor apuntado por PNumero
    ShowMessage("*PNumero=" + AnsiString(*PNumero));

    	// Usamos el puntero para modificar el valor
    *PNumero = 5; // Numero contiene el mismo valor
    ShowMessage("Numero=" + AnsiString(Numero));

    return 0;
}


