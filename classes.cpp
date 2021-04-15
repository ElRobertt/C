//CALCULADORA CON CLASSES//
#include <iostream>
#include <windows.h>
using namespace std;

class Calculadora 
{ 
public:

void mostrarSuma (int a, int b) 
{ 
cout << "La suma es:" << a + b << endl; 
}

void mostrarResta (int a, int b) 
{ 
if (a> b) 
cout << "La resta es:" << a - b << endl; 
if (b> a) 
cout << "No se puede realizar la operacion" << endl; 
}

void mostrarProducto (int a, int b) 
{ 
cout << "El producto es:" << a * b << endl; 
}

void mostrarDivision (int a, int b) 
{ 
if (b == 0) 
cout << "No se puede realizar la operación" << endl; 
else 
cout << "La división es:" << a / b << endl; 
}

void mostrarMayor (int a, int b) 
{ 
if (a> b) 
cout << "El mayor es:" << a << endl; 
else 
cout << "El mayor es:" << b << endl; 
}

void mostrarMenor (int a, int b) 
{ 
if (a <b) 
cout << "El menor es:" << a << endl; 
else 
cout << "El menor es:" << b << endl; 
}

};

int main () 
{

int num1, num2; 
Calculadora operacion;

cout << "Introducir dos numeros enteros:" << endl; 
cin >> num1 >> num2;

operacion.mostrarSuma (num1, num2); 
operacion.mostrarResta (num1, num2); 
operacion.mostrarProducto (num1, num2); 
operacion.mostrarDivision (num1, num2); 
operacion.mostrarMayor (num1, num2); 
operacion.mostrarMenor (num1, num2);

return 0; 
}
