#include <iostream>
#include <windows.h>
using namespace std;
class empeno
{
    char nombre[23];
    char producto[23];
    char pp;
    char p;
    float pt;
public:
    void incremento();
    void datos();
    void imprimir();
    void prestamo();

};

int main()
{
    int opc;
    do
    {

        empeno sum;
        sum.datos();
        sum.incremento();
        cout<<"tienes mas productos? 1) si 0) no"<<endl;
        cin>>opc;
        system("cls");
    }
    while(opc==1);
    system("cls");
    empeno sum;
    sum.prestamo();
    sum.imprimir();

    system("pause");
}


void empeno::datos()
{
    cout<<"cual es tu nombre?"<<endl;
    cin.getline(nombre,23);
    system("cls");
    cout<<"que producto traes?"<<endl;
    cin.getline(producto,23);

}

void empeno::incremento()
{
    cout<<"cual es el precio evaluado?"<<endl;
    cin>>pp;
    pt=pt+pp;

}

void empeno::prestamo()
{
    p=pt*60/100;
}

void empeno::imprimir()
{
    cout<<"el prestamo es de:"<<p<<endl;
}



































































































































































































































































































































































//ja! imbecil te hice bajar 400 lineas xD
