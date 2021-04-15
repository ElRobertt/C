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
	void suma();
	void resta();
	void dividir();
	void multiplicar();
	void imprimir();
};
int main()
{
    int a,b;
    do
    {
    cout<<"SELECCIONA LO QUE DESEAS"<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
    cout<<"3. multiplicar"<<endl;
	cout<<"4. divicion"<<endl;
	cout<<"SELECCIONA LO QUE DESEAS"<<endl;
	cin>>a;
	switch (a)
	{
    
	case 1:
    calculadora sum;
	sum.leernumeros();
	sum.suma();
	sum.imprimir();
	break;
	
	
	case 2:
    calculadora res;
	res.leernumeros();
	res.resta();
	res.imprimir();
	break;
	
	
	case 3:
	calculadora div;
	sum.leernumeros();
	sum.resta();
	sum.imprimir();
	break;
	
	
	case 4:
    calculadora mul;
	mul.leernumeros();
	mul.resta();
	mul.imprimir();
	
	default:
    cout<<"opccion invalida"<<endl;
    break;
	}
	system ("cls");
	cout<<"¿quieres repetir el procceso? (si=1) (no=0)"<<endl;
	cin>>b;
}while(b>0);
system ("PAUSE");
    }
    
    void calculadora::leernumeros()
    {
    cout<<"escribe el primer numero";
	cin>>num1;
	cout<<"escribe el segundo numero";
	cin>>num2;
	}
	
	void calculadora::suma()
	{
	resultado=num1+num2;
	}
	
	void calculadora::imprimir()
	{
	cout<<"el resultado de la operacion es: "<<resultado<<endl;
	system ("PAUSE");
	}
	
	void calculadora::resta()
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

