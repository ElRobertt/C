#include <iostream>
#include <windows.h>
using namespace std;
class suma
{
    float num1;
    float num2;
    float resultado;

    public:
    void leernumeros();
    void sumar ();
    void imprimir();
};
int main ()
{	
    suma sum;
    sum.leernumeros();
    sum.sumar();
    sum.imprimir();
    system("PAUSE");
}
void suma:: leernumeros()
{
    cout<<"escribe el primer numero: ";
    cin>>num1;
    cout<<"escribe el segundo numero: ";
    cin>>num2;
}
void suma::sumar()
{
    resultado=num1+num2;
}
void suma::imprimir ()
{
    cout<<"el resultado de la suma es :"<<resultado;
}
