#include <vcl\vcl.h>


WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    int  P[] = { 1, 2 }; // Matriz con dos enteros
    char X[] = { 'A', 'B' }; // Matriz con dos caracteres
    char Y[] = "AB"; // Matriz con una cadena, tres caracteres
    char Z[12][31]; // Matriz bidimensional

    	// Preparamos una cadena con los elementos
        // de cada una de las matrices y la mostramos
    ShowMessage(
      "Elementos de P = " + AnsiString(sizeof(P)/sizeof(P[0])) +
      "\nElementos de X = " + AnsiString(sizeof(X)/sizeof(X[0])) +
      "\nElementos de Y = " + AnsiString(sizeof(Y)/sizeof(Y[0])) +
      "\nElementos de Z = " + AnsiString(sizeof(Z)/sizeof(Z[0])) +
      "\nElementos de Z[0] = " + AnsiString(sizeof(Z[0])/sizeof(Z[0][0])));

	return 0;
}


