// Elaborar un programa que calcule el área de una circunferencia.
// El programa debe pedir al usuario el valor del radio de la circunferencia.
// El programa debe mostrar el valor del área de la circunferencia.
// El programa debe mostrar un mensaje de error si el valor del radio es menor que cero.
// El programa debe mostrar un mensaje de error si el valor del radio es mayor que cien.
// El programa debe mostrar un mensaje de error si el valor del radio es igual a cero.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float radio;
    float area;

    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    if (radio < 0)
    {
        cout << "El radio debe ser mayor que cero." << endl;
    }
    else if (radio > 100)
    {
        cout << "El radio debe ser menor que 100." << endl;
    }
    else if (radio == 0)
    {
        cout << "El radio debe ser diferente de cero." << endl;
    }
    else
    {
        area = M_PI * pow(radio, 2);
        cout << "El area de la circunferencia es: " << area << endl;
    }

    return 0;
}