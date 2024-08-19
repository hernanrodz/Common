#include <vcl\vcl.h>

int * PNumero; // Puntero a valor de tipo int
int Numero; // Variable de tipo int, 4 bytes
char Caracteres[10]; // Una cadena de 10 bytes
bool Condicion; // Un bool, 1 byte

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	PNumero = &Numero; // Ahora PNumero apunta al valor de Numero
    Numero = (int )(PNumero == NULL);

    	// PNumero ya no es NULL
	ShowMessage(AnsiString(Numero));

    	// Mostramos las direcciones de las variables
    ShowMessage("&Numero=" + AnsiString((int )&Numero) +
                "\n&Caracteres=" + AnsiString((int )&Caracteres) +
                "\n&Condicion=" + AnsiString((int )&Condicion));

	return 0;
}
                                           
