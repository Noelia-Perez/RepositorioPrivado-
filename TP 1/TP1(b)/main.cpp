#include <iostream>

using namespace std;

//* Confeccionar un programa que calcule la intersección de dos rectas:
//* y1 = m1*x + b1
//* y2 = m2*x + b2
//* Realizar un adecuado análisis del problema, entendiendo los posibles
//* resultados que se puedan generar. Tener en cuenta en ambos casos
//* seleccionar los tipos de datos mas adecuados.

int main()
{
    int m1, m2, b1, b2,x, Ord, Pend,y;

      cout << "Ingrese valores de la recta 1" << endl;

    cout << "Ingrese pendiente (m)" <<endl;
    cin >> m1;
    cout << "Ingrese ordenada al origen (b)" <<endl;
    cin >> b1;

    cout << "Ingrese valores de la recta 2"<<endl;

    cout << "Ingrese pendiente (m)"<<endl;
    cin >>m2;
    cout << "Ingrese ordenada al origen (b)"<<endl;
    cin >>b2;


   if (m1==m2)
    {
        cout << "Las rectas son paralelas,no hay interseccion" <<endl;


    }

    if (m1!=m2)
    {
        Ord = ((b2)-(b1));
        Pend = ((m1)-(m2));
        x = Ord/Pend;

        y = (m1)*x+(b1);
        cout << "La interseccion de las rectas es en: "<< "("<<x<<";"<<y<<")"<<endl;
    }

    cout << "El programa a finalizado"<<endl;












    return 0;
}
