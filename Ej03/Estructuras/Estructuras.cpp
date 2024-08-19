#include <vcl\dialogs.hpp>
#include <cstring.h>

	// Definimos un nuevo tipo al que llamamos TFecha
struct TFecha {
	unsigned char Dia, Mes; // que contiene dos unsigned char
    int Ano;   // y un int
};

	// El tipo TFicha también es una estructura
struct TFicha {
    string Nombre, Email; // que contiene dos cadenas
    TFecha Nacido; // y una estructura TFecha
};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    TFicha Yo; // Hoy es una variable del tipo TFicha

    Yo.Nombre = "Perico";  // Acceso a los distintos miembros
    Yo.Email = "perico@periquera.es"; // de la TFicha
    Yo.Nacido.Dia = 1;
    Yo.Nacido.Mes = 2;
    Yo.Nacido.Ano = 1967;

    return 0;
}


