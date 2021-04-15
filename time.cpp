#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
 
int main(){
	int diac;
	char mesca[12];
	char mesc[12];	
	/*
    struct tm {
      int tm_sec;   // seconds of minutes from 0 to 61
      int tm_min;   // minutes of hour from 0 to 59
      int tm_hour;  // hours of day from 0 to 24
      int tm_mday;  // day of month from 1 to 31
      int tm_mon;   // month of year from 0 to 11
      int tm_year;  // year since 1900
      int tm_wday;  // days since sunday
      int tm_yday;  // days since January 1st
      int tm_isdst; // hours of daylight savings time
    }
*/
	/* fecha/hora actual basado en el sistema actual */
	time_t now = time(0);
	tm *time = localtime(&now);
	string dia_semana[7]=
	{"domingo","lunes","martes","miercoles", 
    "jueves","viernes","sabado"};
	string meses[12]=
	{"Enero","Febrero","marzo","abril","mayo",
	"junio","julio","agosto","septiembre","noviembre",
	"diciembre"};
	int year = 1990 + time->tm_year; 
	cout << "Hoy " << dia_semana[time->tm_wday]<<", ";
	cout << time->tm_mday <<" de "<<  meses[time->tm_mon] <<  " del " << year << endl;
	cout<<"DIME CUANDO ES TU CUMPLEAÑOS "<<endl;
    cout<<"DIA "<<endl;
    cin>>diac;
    cout<<"MES 1=ENERO-12=DICIEMBRE "<<endl;
    cin>>mesc;
	if (time->tm_mday=diac)
	{
		if (meses[time->tm_mon]==mesc)
		{
			cout<<"CORRECTO "<<endl;
         }
	 } 
	system("pause");
	return 0;
}
