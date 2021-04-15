#include <iostream>
#include <windows.h>
using namespace std;
class casa
{
    float precio, prestamo;
    char cliente [30],producto [30];

public:
    void leer();
    void calcular();
    void imprimir();

};
int main ()
{
    int opc;
    do{

    casa objeto;
    objeto.leer();
    objeto.calcular();
    objeto.imprimir();


cout<<"quieres hacer otra operacion"<<endl;
cout<<"1.si"<<endl;
cout<<"2.no"<<endl;
cin>>opc;

} while (opc==1);
}


void casa::leer()
{
    cout<<"nombre del cliente: "<<endl;
    cin>>cliente;
    cout<<"que producto es: "<<endl;
    cin>>producto;
    cout<<"precio de evaluo del producto: "<<endl;
    cin>>precio;

}

void casa:: calcular()
{
    prestamo=precio*.60;
}


void casa::imprimir ()
{
    cout<<"el nombre del cliente es:"<<cliente<<endl;
    cout<<"producto que va a empeñar:"<<producto<<endl;
    cout<<"evaluo"<<precio<<endl;
    cout<<"total del prestamo:"<<prestamo<<endl;
}



