#include <vcl\dialogs.hpp>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   AnsiString Valor; // Para pedir el dato
   char Codigo; // Para almacenar el c�digo

           // Solicitamos la entrada de un valor
   Valor = InputBox("Entrada del c�digo",
           "Deme un n�mero entre 0 y 255", "");

   Codigo = (char )atoi(Valor.c_str()); // y lo convertimos a n�mero

            // Mostramos el car�cter
   ShowMessage("El car�cter correspondiente es " + AnsiString(Codigo));

   return 0;
}

