#include <vcl\dialogs.hpp>

int Contador, N;
float Acumulado;
char LetraNIF;
bool Abierto;

WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
     Contador = 5; // A contador le asignamos una constante literal
     N = Contador + 1; // A N le asignamos una expresión
     LetraNIF = 'B'; // Otra constante literal

             // Mostrar los valores de las variables
     ShowMessage("Valores de las variables\n"
                 "------------------------\n"
                 "Contador = " + AnsiString(Contador) +
                 "\nN = " + AnsiString(N) +
                 "\nLetraNIF = " + AnsiString(LetraNIF));
     return 0;
}

