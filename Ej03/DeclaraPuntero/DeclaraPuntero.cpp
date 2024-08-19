#include <vcl\vcl.h>

int Numero; // Variable de tipo int
int * PNumero; // Puntero a valor de tipo int

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
		// El operador == es el de igualdad, devuelve
        // true si los dos operandos, en este caso
        // PNumero y NULL, son iguales
	ShowMessage(AnsiString((int )(PNumero==NULL)));

	return 0;
}

