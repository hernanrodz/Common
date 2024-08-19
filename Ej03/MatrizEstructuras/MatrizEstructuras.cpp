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
    TFecha Visitas[20]; // Matriz de TFecha
};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	TFicha Anotaciones[100]; // Matriz de TFicha

    	// Completamos los datos de una ficha
    Anotaciones[1].Nombre = "Tomás";
    Anotaciones[1].Email = "tpe@ctg.es";
    Anotaciones[1].Visitas[1].Dia = 26;
    Anotaciones[1].Visitas[1].Mes = 1;
    Anotaciones[1].Visitas[1].Ano = 1999;

	return 0;
}


