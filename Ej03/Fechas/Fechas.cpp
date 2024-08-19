#include <vcl\dialogs.hpp>

	// Definimos un nuevo tipo al que llamamos TFecha
struct TFecha {
	unsigned char Dia, Mes; // que contiene dos unsigned char
    int Ano;   // y un int
};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	TFecha Hoy; // Hoy es una variable del tipo TFecha, una estructura

    Hoy.Dia = 12;   // Accedemos a los miembros de
    Hoy.Mes = 4;   // la variable Hoy para inicializarlos
    Hoy.Ano = 2000;

	return 0;
}


