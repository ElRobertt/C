#include <iostream>
#include <windows.h>
using namespace std;
int funcion_pares(int num);
int funcion_impares(int num);
int funcion_secuencia(int num);
int main()
{
    int num,pares,impares,secuencia,imprimir;
    cout<<"dame un numero entero:"<<endl;
    cin>>num;
    cout<<"¿Hola, que quieres que te imprima?:"<<endl;
    cout<<"1.-secuencia de mayor a menor"<<endl;
    cout<<"2.-numeros pares"<<endl;
    cout<<"3.-numeros impares"<<endl;
    cout<<"elige una opcion: "<<endl;
    cin>>imprimir;
    switch(imprimir)
    {
    case 1:
        {
        funcion_secuencia(num);
        break;
        }
    case 2:
        {
        funcion_impares(num);
        break;
        }
    case 3:
        {
        funcion_pares(num);
        break;
        }
    default:
        cout<<"no existe esa opcion"<<endl;
        break;
    }
    system("pause");
    system("pause");
    return 0;
}
int funcion_pares(int num)
{
    int par;
    system("cls");
    cout<<"Escogiste la opcion pares"<<endl;
    par=0;
    do{
            cout<<par<<endl;
    par=par+2;
    }while(par<=num);
    return par;
}
int funcion_impares(int num)
{
    int impar;
    system("cls");
    cout<<"Escogiste la opcion impares:"<<endl;
    impar=1;
    do{
            cout<<impar<<endl;
    impar=impar+2;
    }while(impar<=num);
    return impar;
}
int funcion_secuencia(int num)
{
    int sec;
    system("cls");
    cout<<"escogiste la opcion secuencia:"<<endl;
sec=num;
do{
        cout<<sec<<endl;
        sec=sec-1;
 }while(sec>=0);
 return sec;
}

