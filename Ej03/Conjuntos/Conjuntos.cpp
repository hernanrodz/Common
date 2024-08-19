#include <vcl\dialogs.hpp>

	// Definimos un nuevo tipo
typedef Set <int, 1, 49> TConjuntoNumeros;

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
		// Esta variable es un conjunto
	TConjuntoNumeros Numeros;

    	// en el que insertamos seis números
    Numeros << 3 <<12 << 24 << 35 << 38 << 41;

	return 0;
}

