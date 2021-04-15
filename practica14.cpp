#include <iostream>
#include <windows.h>
using namespace std;
int k, opcion;
float funcion_cuadrado_perimetro(float a,float b);
float funcion_cuadrado_area(float a,float b);
float funcion_triangulo_perimetro(float a,float b);
float funcion_triangulo_area(float a,float b);
float funcion_circulo_perimetro(float a, float b);
float funcion_rectangulo_perimetro(float a,float b);
float funcion_rectangilo_area(float a,float b);
float funcion_cuadrado (float a, float b);
float funcion_triangulo (float a, float b);
float funcion_circulo (float a, float b);
float funcion_rectangulo (float a, float b);
int main ()
{
    cout<<"que figura quieres"<<endl;
    cout<<"1.cuadrado"<<endl;
    cout<<"2.trianguo"<<endl;
    cout<<"3.circulo"<<endl;
    cout<<"4.rectangulo"<<endl;
    cin>>k;
    switch (k)
    {
    case 1:
    cout<<"elige tu opcion"<<endl;
    cout<<"1.area"<<endl;
    cout<<"2.perimetro"<<endl;
    cin>>opcion;
    if(opcion==1)
{



     float c,a,b,r;
    cout<<"dame un numero:"<<endl;
    cin>>a;
    cout<<"dame otro numero:"<<endl;
    cin>>b;
    c=funcion_cuadrado (a,b);
    cout<<"el resultado del area del cuadrado es: "<<c<<endl;
    c=funcion_triangulo (a,b);
    cout<<"el resultado de el area triangulo es: "<<c<<endl;
    c=funcion_circulo (a,b);
    cout<<"el resultado del area del circulo es: "<<c<<endl;
    c=funcion_rectangulo (a,b);
    cout<<"el resultado del area del rectangulo es: "<<c<<endl;
    system ("pause");
    return 0;
}
    float funcion_cuadrado (float a, float b)
}
    cout<<"dame la base"<<endl;
    cin>>basec;
    cout<<"dame la altura"<<endl;
    cin>>alturac;
    float c;
    c=basec*alturac;
    return c;
{

}
float funcion_triangulo (float a, float b)
{
    float c;
    c=a*b/2;
    return c;
}
float funcion_circulo (float a, float r)
{
    float c;
    c=3.1416*(a*a);
    return c;
}
float funcion_rectangulo (float a, float b)
{
    float c;
    c=a*b;
    return c;
}

