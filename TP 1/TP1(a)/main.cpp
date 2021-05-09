#include <iostream>

using namespace std;
//*Realizar un programa que lea una velocidad en km/h y la trasforme a m/s
//*El programa debe solicitar por pantalla un valor númerico, que luego el
//*usuario debe ingresar, finalmente el programa debe mostrar por
//*pantalla el resultado de la conversión.

int main()

{
    float a,b;


    cout << "Ingrese valor en km/h" << endl;
    cin >> a;

    b = a*1000/3600;

    cout << "Su valor en m/s es: "<< b <<endl;



    cout << "El programa a finalizado"<<endl;




}
