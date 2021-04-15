#include <stdio.h>
#include <time.h>
#include <iostream>
 
int main()
{
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);
    cout<<"La fecha actual es: %i/%i/%i %i:%i:%i hrs\n";
    tlocal->tm_mday; tlocal->tm_mon+1; tlocal->tm_year+1900;
    tlocal->tm_hour; tlocal->tm_min; tlocal->tm_sec;
    return 0;
}
