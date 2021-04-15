#include <iostream>
#include <windows.h>
using namespace std;

class calculadora
{
	float num1;
	float num2;
	float resultado;
	public:
	void leernumeros();
	void sumar();
	void restar ();
	void dividir();
	void multiplicar ();
	void imprimir();
};

int main ()
{
    calculadora calc1;
	int  opcion;
	do
	{
            system("CLS");
            int opcions;
			cout<<"¿que operacion deseas hacer? " <<endl;
			cout<<"1.-sumar"<<endl;
			cout<<"2.-restar"<<endl;
			cout<<"3.-dividir"<<endl;
			cout<<"4.-multiplicar "<<endl;
			cout<<"5.-salir de la calculadora"<<endl;
			cout<<"teclea tu opcion "<<endl;
			cin>>opcions;system("CLS");
			switch (opcions)
			{
				case 1 :

 						calc1.leernumeros();
						calc1.sumar();
						calc1.imprimir();
						break;
				case 2 :
 						calc1.leernumeros();
						calc1.restar();
						calc1.imprimir();
						break;
				case 3 :
						calc1.leernumeros();
						calc1.dividir();
						calc1.imprimir();
						break;
				case 4 :
						calc1.leernumeros();
						calc1.multiplicar();
						calc1.imprimir();
						break;
                default:
                    cout<<"esta opcion no existe, por favor intentelo de nuevo"<<endl;
                    break;
                    system ("pause");
                    return 0;
			}


		}while (opcion==1);
		cout<<"¿quieres una opcion diferente?, selecciona 1 para SI y 2 para NO"<<endl;
			cin>>opcion;
		system("PAUSE");
		return 0;
	}
void calculadora::leernumeros()
{
	cout<<"escribe el primer numero"<<endl;
	cin>>num1;
	cout<<"escribe el segundo numero"<<endl;
	cin>>num2;
}

void calculadora::sumar()
{
	resultado=num1+num2;
}

void calculadora::restar()
{
	resultado=num1-num2;
}
void calculadora::dividir()
{
	resultado=num1/num2;
}
void calculadora::multiplicar()
{
	resultado=num1*num2;
}

void calculadora::imprimir()
{
	cout<<"el resultado de la operacion es:"<<resultado<<endl;
}
