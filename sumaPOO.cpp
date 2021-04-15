#include <iostream>
#include <windows.h>
using namespace std;

class suma
{
    float num1;
    float num2;
    float resultado;

    public:
        void leernumeros ();
        void sumar ();
        void imprimir ();

};
int main ()
{
    suma sum;
    sum.leernumeros();
    sum.sumar();
    sum.imprimir();
    system ("pause");
}
void suma::leernumeros ()
{
    cout<<"Escribe el primer numero";
    cin>>num1;
    cout<<"Escribe el segundo numero";
    cin>>num2;
}
void suma::sumar()
{
    resultado=num1+num2;
}
void suma::imprimir ()
{
    cout<<"El resultado de la suma es:"<<resultado<<endl;
}
