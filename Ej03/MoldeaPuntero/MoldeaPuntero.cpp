#include <vcl\dialogs.hpp>

struct TFecha { // Estructura TFecha
	int Dia, Mes, Ano;
};

typedef TFecha* PFecha; // PFecha es un nuevo tipo, puntero a TFecha

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    TFecha Hoy; // Hoy es de tipo TFecha
    void * PHoy; // PHoy es un puntero genérico

    PHoy = &Hoy; // Asignamos a PHoy la dirección de Hoy

    	// El moldeado (PFecha )Hoy nos permite acceder a
        // los miembros de la estructura mediante el puntero
    ((PFecha )PHoy)->Dia = 12; // El operador de selección
    ((PFecha )PHoy)->Mes = 4; // no es un punto, sino los
    ((PFecha )PHoy)->Ano = 2000; // caracteres ->

    ShowMessage(AnsiString(Hoy.Dia) + "/" +
                AnsiString(Hoy.Mes) + "/" +
                AnsiString(Hoy.Ano)); // Mostramos los valores
    return 0;
}

