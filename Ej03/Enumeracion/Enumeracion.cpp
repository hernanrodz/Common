#include <vcl\dialogs.hpp>

	// Enumeración de días de la semana
enum TDia {Lunes, Martes, Miercoles, Jueves,
           Viernes, Sabado, Domingo};

	// Matriz de cadenas con los nombres de los días abreviados
char NombresDias[7][4] = { "Lun", "Mar", "Mié", "Jue",
                           "Vie", "Sáb", "Dom"};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	TDia Hoy; // Hoy puede tomar uno de los valores de la enumeración

    Hoy = Jueves; // Asignamos un valor

    	// Mostramos el valor de Hoy y el nombre correspondiente
    ShowMessage(AnsiString(Hoy) + "->" + NombresDias[Hoy]);
	return 0;
}

