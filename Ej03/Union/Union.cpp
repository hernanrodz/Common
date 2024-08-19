#include <vcl\dialogs.hpp>

  // Tipos de anotaci�n posibles
enum TTipoAnotacion {Llamada, Correo, Transporte};

       // Una estructura para almacenar anotaciones
struct TAnotacion {
/*26*/      char Consignatario[26];
/* 1*/      TTipoAnotacion Tipo;    // Seg�n el tipo de anotaci�n
            union {
/*10*/      	char Numero[10];  // Mantener el tel�fono
/*21*/          char Direccion[21]; // Direcci�n
                struct {
/* 1*/          	bool Pagados; // o datos del env�o
/* 4*/            	int Importe;
				};
 			};
/* Total 63*/
};

	// Una variable de tipo TAnotacion con un valor inicial
TAnotacion Anotacion = {"Francisco Charte", Correo, "Apdo. 54"};

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    	// Mostramos el tama�o de la variable y su contenido
    ShowMessage(
      "sizeof(Anotacion)= " + AnsiString(sizeof(Anotacion)) +
      "\n" + Anotacion.Consignatario + "\n" + Anotacion.Direccion);

	return 0;
}


