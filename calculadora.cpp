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
class restar
    float num3;
    float num4;
    float resultado;

    public:
        void leernumeros ();
        void restar();
        void imprimir ();
};

int main ()
{
    restar res();
    res.leernumeros();
    res.restar();
    res.imprimir();
    system ("pause");
}
void restar::leernumeros ()
{
    cout<<"Escribe el primer numero";
    cin>>num3;
    cout<<"Escribe el segundo numero";
    cin>>num4;
}
void resta::restar ()
{
    resultado=num1-num2;
}
void resta::imprimir ()
{
    cout<<"El resultado de la resta es:"<<resultado<<endl;
}
class dividir
{
    float num5;
    float num6;
    float resultado;

    public:
        void leernumeros ();
        void dividir ();
        void imprimir ();
};
int main ()
{
    dividir di;
    di.leernumeros();
    di.dividir();
    di.imprimir();
    system ("pause");
}
void dividir::leernumeros ()
{
    cout<<"Escribe el primer numero";
    cin>>num5;
    cout<<"Escribe el segundo numero";
    cin>>num6;
}
void di::dividir()
{
    resultado=num1/num2;
}
void dividir::imprimir ()
{
    cout<<"El resultado de la division es:"<<resultado<<endl;
}
class multiplicar
{
    float num7;
    float num8;
    float resultado;

    public:
        void leernumeros ();
        void multiplicar ();
        void imprimir ();
};
int main ()
{
    multiplicar mul;
    mul.leernumeros();
    mul.sumar();
    mul.imprimir();
    system ("pause");
}
void multiplicar::leernumeros ()
{
    cout<<"Escribe el primer numero";
    cin>>num7;
    cout<<"Escribe el segundo numero";
    cin>>num8;
}
void mul::multiplicar()
{
    resultado=num1*num2;
}
void multiplicar::imprimir ()
{
    cout<<"El resultado de la multiplicacion es:"<<resultado<<endl;
}
