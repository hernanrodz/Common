#include <vcl\dialogs.hpp>

	// Enumeración de días de la semana
enum TDia {Lunes, Martes, Miercoles, Jueves,
           Viernes, Sabado, Domingo};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    TDia Hoy; // Hoy puede tomar uno de los valores de la enumeración

    Hoy = Jueves; // Asignamos un valor

    	// Mostramos el valor convertidor a int
    ShowMessage(AnsiString((int ) Hoy));

    return 0;
}


