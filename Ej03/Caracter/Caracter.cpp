#include <vcl\dialogs.hpp>

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
   AnsiString Valor; // Para pedir el dato
   char Codigo; // Para almacenar el código

           // Solicitamos la entrada de un valor
   Valor = InputBox("Entrada del código",
           "Deme un número entre 0 y 255", "");

   Codigo = (char )atoi(Valor.c_str()); // y lo convertimos a número

            // Mostramos el carácter
   ShowMessage("El carácter correspondiente es " + AnsiString(Codigo));

   return 0;
}

