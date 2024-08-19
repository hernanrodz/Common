#include <vcl\dialogs.hpp>

  // Tipos de anotación posibles
enum TTipoAnotacion {Llamada, Correo, Transporte};

       // Una estructura para almacenar anotaciones
struct TAnotacion {
/*26*/      char Consignatario[26];
/* 1*/      TTipoAnotacion Tipo;    // Según el tipo de anotación
            union {
/*10*/      	char Numero[10];  // Mantener el teléfono
/*21*/          char Direccion[21]; // Dirección
                struct {
/* 1*/          	bool Pagados; // o datos del envío
/* 4*/            	int Importe;
				};
 			};
/* Total 63*/
};

	// Una variable de tipo TAnotacion con un valor inicial
TAnotacion Anotacion = {"Francisco Charte", Correo, "Apdo. 54"};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    	// Mostramos el tamaño de la variable y su contenido
    ShowMessage(
      "sizeof(Anotacion)= " + AnsiString(sizeof(Anotacion)) +
      "\n" + Anotacion.Consignatario + "\n" + Anotacion.Direccion);

	return 0;
}


