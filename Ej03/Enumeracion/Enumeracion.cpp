#include <vcl\dialogs.hpp>

	// Enumeraci�n de d�as de la semana
enum TDia {Lunes, Martes, Miercoles, Jueves,
           Viernes, Sabado, Domingo};

	// Matriz de cadenas con los nombres de los d�as abreviados
char NombresDias[7][4] = { "Lun", "Mar", "Mi�", "Jue",
                           "Vie", "S�b", "Dom"};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	TDia Hoy; // Hoy puede tomar uno de los valores de la enumeraci�n

    Hoy = Jueves; // Asignamos un valor

    	// Mostramos el valor de Hoy y el nombre correspondiente
    ShowMessage(AnsiString(Hoy) + "->" + NombresDias[Hoy]);
	return 0;
}

