/*CREA UN PROMAMA CON CLASES PARA UN RESTAURANT FAMILIAR LLAMADO EL SAZON DE DULCE EN EL QUE OFRECE 4 PLATILLOS FUERTES, 4 BEBIDAS DE DIFERENTES SABOR, 3 GUARNICIONES ,2 POSTRES Y UN DETALLE EXTRA SI CUMPLE AÑOS. IMPRIMIR CUAL FUE LA ORDEN QUE PIDIÓ EL COMENZAL Y EL TOTAL DE LA COMPRA  */
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
class restaurant
{
	int cantg=0;
	int opcg;
	float totalg=0; 
	char cumple[50];
	int pfuerte;
	int pt=0;
    int tt=0;
    int ttt=0;
	int opc;
	float totalbe=0;
	int cu,cantb=0;
	int opcc,opcb;
	int qqq=0;
	float qqqt=0;
	int too=0;
	float toot=0;
	int zzz=0;
	float zzzt=0;
	float totalf=0;
	int opcpp,totalpp=0,cantpp=0;
	int opcfinal=0;
	int diac;
	char mesca[12];
	char mesc[12];
	string dia_semana[7];
	string meses[12];
	
	public:
	double cuenta();
	double cuenta2();
	double fuerte();
	double bebidas();
	double guarniciones();
	double postre();
	double regalo();
};

double  restaurant::fuerte ()
{
	do {
		system("CLS");
	cout<<"-----------------BIENVENIDO A UN RESTAURANT FAMILIAR--------------------"<<endl;
	cout<<"-------------""-----   EL SAZON DE MAMA   --------------"<<endl;
	cout<<"QUE PLATILLO DESEA PEDIR? "<<endl;
	cout<<"1.-   TACOS               $12.00 C/U"<<endl;
	cout<<"2.-   QUESADILLAS         $18.00 C/U"<<endl;
	cout<<"3.-   TORTAS              $20.00 C/U"<<endl;
	cout<<"4.-   SINCRONIZADA        $15.00 C/U"<<endl;
	cin>>pfuerte;
	}while (pfuerte>=5);
	switch (pfuerte)
	{
		case 1: 
		{
			cout<<"¿CUANTOS TACOS VAS A QUERER? "<<endl;
			cin>>pt;
			tt=pt*12;
			return restaurant::bebidas();
		}
		case 2:
		{
			cout<<"¿CUANTAS QUESADILLAS VAS A QUERER? "<<endl;
			cin>>qqq;
			qqqt=qqq*18;
			return restaurant::bebidas ();	
		}
		case 3:
		{
			cout<<"¿CUANTAS TORTAS VAS A QUERER? "<<endl;
			cin>>too;
			toot=too*20;
			return restaurant::bebidas ();				
		}
		case 4:
		{
			cout<<"¿CUANTAS SINCORINZADAS VAS A QUERER? "<<endl;
			cin>>zzz;
			zzzt=zzz*12;
			return restaurant::bebidas ();
		}
		default:
			{
				cout<<"OPCION INCORRECTA-REGRESANDO AL MENU "<<endl;
				return restaurant::fuerte();
			}

	}
}
double restaurant::cuenta()
{

		cout<<"--------------HOY NO ES TU CUMPLEAÑOS----------"<<endl;
		cout<<"TACOS:  "<<pt<<"            TOTAL: $ "<<tt<<endl;
		cout<<"QUESADILLAS "<<qqq<<"       TOTAL: $ "<<qqqt<<endl;
		cout<<"TORTAS "<<too<<"            TOTAL: $ "<<toot<<endl;
		cout<<"SINCRONIZADAS "<<zzz<<"     TOTAL: $ "<<zzzt<<endl;
		cout<<"BEBIDAS "<< cantb<<"        TOTAL: $ "<<totalbe<<endl;
		cout<<"GUARNICIONES: "<< cantg<<"  TOTAL: $ "<<totalg<<endl;
		cout<<"POSTRES: "<<cantpp<<"       TOTAL: $ "<<totalpp<<endl;
		totalf=tt+qqqt+toot+zzzt+totalbe+totalg+totalpp;
		cout<<"EL TOTAL FINAL ES: $ "<<totalf<<endl;
		system("pause");
		system("CLS");
		cout<<"SIGUIENTE CLIENTE "<<endl;
		cout<<"1.SI "<<endl;
		cout<<"2.NO "<<endl;
		cin>>opcfinal;
		switch (opcfinal)
		{
			case 1:
				{
					return restaurant::fuerte();
			}
			case 2:
				{
					break;
				}
		}
	}

double restaurant::cuenta2()
{
	
		cout<<"--------------FELIZ  CUMPLEAÑOS----------"<<endl;
		cout<<"TACOS:  "<<pt<<"  TOTAL: $ "<<tt<<endl;
		cout<<"QUESADILLAS "<<qqq<<"  TOTAL: $ "<<qqqt<<endl;
		cout<<"TORTAS "<<too<<"  TOTAL: $ "<<toot<<endl;
		cout<<"SINCRONIZADAS "<<zzz<<"  TOTAL: $ "<<zzzt<<endl;
		cout<<"BEBIDAS "<< cantb<<"TOTAL: $ "<<totalbe<<endl;
		cout<<"GUARNICIONES: "<< cantg<<" TOTAL: $ "<<totalg<<endl;
		cout<<"POSTRES: "<<cantpp<<"      TOTAL: $ "<<totalpp<<endl;
		cout<<"------------------TIENES UN FRAPE GRATIS POR TU CUMPLEAÑOS "<<endl;
		totalf=totalpp+totalg+totalbe+zzzt+toot+qqqt+tt;
		cout<<"EL TOTAL FINAL ES: $ "<<totalf<<endl;
		system("PAUSE");
		system("CLS");
		cout<<"SIGUIENTE CLIENTE "<<endl;
		cout<<"1.SI "<<endl;
		cout<<"0.NO "<<endl;
		cin>>opcfinal;
		if (opcfinal==1)
		{
			return restaurant::fuerte();
		}
		else
		{
			return 0;
		}
	}

double restaurant::bebidas()
{
	system ("CLS");
	cout<<"ELIJA SU BEBIDA -----------"<<endl;
	cout<<"1. COCA-COLA "<<" $ 12 "<<endl;
	cout<<"2. PEPSI $ 11 "<<endl;
	cout<<"3. RED COLA $ 9 "<<endl;
	cout<<"4. FANTA $ 10 "<<endl;
	cout<<"5. NO DESEO REFRESCO "<<endl;
	cin>>opcb;
	switch (opcb)
	{
		case 1:
		{
			cout<<"CUANTAS DESEAS? "<<endl;
			cin>>cantb;
			totalbe=cantb*12;
			restaurant::guarniciones();
		 } 
		case 2:
			{
			cout<<"CUANTAS DESEAS? "<<endl;
			cin>>cantb;
			totalbe=cantb*11;
			restaurant::guarniciones();
			}
		case 3:
			{
			cout<<"CUANTAS DESEAS? "<<endl;
			cin>>cantb;
			totalbe=cantb*9;
			restaurant::guarniciones();
			}
		case 4:
			{
			totalbe=opcb*10;
			cout<<"CUANTAS DESEAS? "<<endl;
			cin>>cantb;
			totalbe=cantb*10;
			restaurant::guarniciones();
			}
		case 5:
			{
			restaurant::guarniciones();	
			}
		
	}
}
double restaurant::guarniciones()
{
	system("CLS");
	cout<<"DESEA AGREGAR ALGUNA GUARNICION? "<<endl;
	cout<<"1. EXTRA DE CARNE $ 10 "<<endl;
	cout<<"2. ORDEN DE CHORIZO Y SALCHICHA $ 30 "<<endl;
	cout<<"3. ORDEN DE PAPAS DORADAS $20 "<<endl;
	cout<<"4. NO DESEO NINGUNA GUARNICION "<<endl;
	cin>>opcg;
	switch (opcg)
	{
		case 1: 
		{
			cout<<"CUANTAS QUIERES? "<<endl;
			cin>>cantg;
			totalg=cantg*10;
			return restaurant::postre();		
		}
		case 2:
	    	{
			cout<<"CUANTAS QUIERES? "<<endl;
		    cin>>cantg;
			totalg=cantg*30;
			return restaurant::postre();
		}
		case 3:	
		    {
			cout<<"CUANTAS QUIERES? "<<endl;
			cin>>cantg;
			totalg=cantg*20;
			return restaurant::postre();
	   }
		case 4:
			{
				return restaurant::postre();
			}
	}
	
}
double restaurant::postre()
{
	system("CLS");
	cout<<"ELIGA UN POSTRE PARA SU ORDEN "<<endl;
	cout<<"1. FRAPPE             $ 25.00 "<<endl;
	cout<<"2. CREPAS             $ 30.00 "<<endl;
	cout<<"3. NO DESEO AGREGAR POSTRE "<<endl;
	cin>>opcpp;
	switch (opcpp)
	{
		case 1:
			{
				cout<<"CUANTOS QUIERES? "<<endl;
				cin>>cantpp;
				totalpp=cantpp*25;
				return restaurant::regalo();
			}
		case 2:
			{
				cout<<"CUANTOS QUIERES? "<<endl;
				cin>>cantpp;
				totalpp=cantpp*30;
				return restaurant::regalo();
			}
		case 3:
			{
				return restaurant::regalo();
			}
	}

}
double restaurant::regalo()
{	
system("CLS");
time_t now = time(0);
	tm *time = localtime(&now);
	string dia_semana[7]=
	{"domingo","lunes","martes","miercoles", 
    "jueves","viernes","sabado"};
	string meses[12]=
	{"enero","febrero","marzo","abril","mayo",
	"junio","julio","agosto","septiembre","noviembre",
	"diciembre"};
	int year = 1900 + time->tm_year; 
	cout << "Hoy " << dia_semana[time->tm_wday]<<", ";
	cout << time->tm_mday <<" de "<<  meses[time->tm_mon] <<  " del " << year << endl;
	cout<<"DIME CUANDO ES TU CUMPLEAÑOS "<<endl;
    cout<<"DIA "<<endl;
    cin>>diac;
    cout<<"MES (EN MINUSCULAS) "<<endl;
    cin>>mesc;
	if (diac==time->tm_mday)
	{
		if (mesc==meses[time->tm_mon])
		{
			cout<<"FELIZ CUMPLEAÑOS! "<<endl;
			cout<<"TIENES UN FRAPPE GRATIS POR TU CUMPLEAÑOS "<<endl;
			return restaurant::cuenta2();
         }
         else 
         {
         	return restaurant::cuenta();
		 }
	 }
	 else 
	 {
	 	return restaurant::cuenta();
	 }
}

int main()
{
restaurant objeto;
objeto.fuerte();
objeto.bebidas();
objeto.guarniciones();
objeto.postre();
objeto.regalo();
objeto.cuenta2();
objeto.cuenta();
system("PAUSE");
}
