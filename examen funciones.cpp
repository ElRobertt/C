#include <iostream>
#include <windows.h>
using namespace std;
int opcc,inicio;
float cua1 (float v1)
{
    float c;
        c=v1*v1;
    return c;
}
float cua2 (float v1)
{
    float c;
        c=v1*4;
    return c;
}
float cir1 (float v1)
{
    float c;
        c=3.1416* (v1*v1);
    return c;
}
float cir2 (float v1)
{
    float c;
        c=((2 * 3.1416)* v1);
    return c;
}
float tri1 (float v1, float b)
{
    float c;
        c=(v1*b)/2;
    return c;
}
float tri2 (float v1,float b,float d)
{
    float c;
        c=v1+b+d;
    return c;
}
float rec1 (float v1,float b)
{
    float c;
        c=v1*b;
    return c;
}
float rec2 (float v1,float b)
{
    float c;
        c=(2*v1) + (2*b);
    return c;

}
int main ()
{
	do
	{
    float opc, b, c,d;
	int v1,inicio;
	cout<<" escoje una figura sue quieras sacar"<<endl;
	cout<<"1. cuadrado "<<endl;
	cout<<"2. circulo "<<endl;
	cout<<"3. triangulo"<<endl;
	cout<<"4. rectangulo"<<endl;
	cin>> v1;
	switch ( v1)
	{
		case 1:
		    cout<<"que quieres hacer "<<endl;
		    cout<<"1. area "<<endl;
	        cout<<"2. perimetro "<<endl;
	        cin>>opc;

	        if (opc==1)
            {
            cout<<"dame un numero para calcular el area"<<endl;
            cin>> v1;
             c= cua1 ( v1);
            cout<<"el area del cuadrado es :"<<c <<endl;
	        }
	    else
            {
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>> v1;
             c= cua2 ( v1);
            cout<<"el perimetro del cuadrado es :"<<c <<endl;
	        }
			break;
		case 2:
			system ("CLS");

			cout<<"que quieres hacer "<<endl;
		    cout<<"1. area "<<endl;
	        cout<<"2. perimetro "<<endl;
	        cin>>opc;

	        if (opc==1)
            {
            cout<<"dame un numero para calcular el area"<<endl;
            cin>>v1;
            c= cir1(v1);
            cout<<"el area del circulo es :"<< c<<endl;
	        }
	    else
            {
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>v1;
            c= cir2(v1);
            cout<<"el perimetro del circulo  es :"<<c<<endl;
            }
		    break;
		case 3:
		    cout<<"que quieres hacer "<<endl;
		    cout<<"1. area "<<endl;
	        cout<<"2. perimetro "<<endl;
	        cin>>opc;

	        if (opc==1)
            {
            cout<<"dame un numero para calcular el area"<<endl;
            cin>>v1;
            cout<<"dame otro numero"<<endl;
            cin>>b;
            c= tri1(v1,b);
            cout<<"el area del triangulo es :"<< c<<endl;
	        }
	    else
            {
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>v1;
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>c;
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>d;
            c= tri2(v1,b,d);
            cout<<"el perimetro del triangulo es :"<<c<<endl;
            }
		    break;
		case 4:
			cout<<"que quieres hacer "<<endl;
		    cout<<"1. area "<<endl;
	        cout<<"2. perimetro "<<endl;
	        cin>>opc;

	        if (opc==1)
            {
            cout<<"dame un numero para calcular el area"<<endl;
            cout<<"dame otro numero"<<endl;
            cin>>v1>>b;
            c= rec1(v1,b);
            cout<<"el area del rectangulo es :"<< c <<endl;
	        }
	    else
            {
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>v1;
            cout<<"dame un lado para calcular el perimetro"<<endl;
            cin>>b;
            c= rec2(v1,b);
            cout<<"el perimetro del rectangulo es :"<<c<<endl;
            }
			break;
		default:
			cout<<"OPCION INCORRECTA "<<endl;
			break;
		    }
		    cout<<"¿quieres volver al inicio?";
		    cout<<"1.Si"<<endl;
		    cout<<"2.No"<<endl;
		    cin>>inicio;
			}while (inicio==1);

	system ("PAUSE");
	return 0;
}
