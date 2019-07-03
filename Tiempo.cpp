#include <iostream>
using namespace std;
 using std::cout;

 #include <iomanip>
 using std::setfill;
 using std::setw;

 #include "Tiempo.h"


 Tiempo::Tiempo( int hr, int min, int seg )
 {
    segundosTranscurridos = 0;
    setTiempo( hr, min, seg );
 }

 //El operador & permite las llamadas en cascada
 Tiempo &Tiempo::setTiempo( int h, int m, int s )
 {
     //cout << "Las horas valen " << h << endl;
     setHora( h );
     setMinuto( m );
     setSegundo( s );
     return *this; // permite las llamadas en cascada
 }


 Tiempo &Tiempo::setHora( int h )
 {
     segundosTranscurridos = 0;
     int hora = ( h >= 0 && h < 24 ) ? h : 0;
     segundosTranscurridos += ( hora * 3600 );
     cout << "Las " << h <<" horas representan segundos: " << segundosTranscurridos << endl;
     return *this;
 }


 Tiempo &Tiempo::setMinuto( int m )
 {
     int minuto = ( m >= 0 && m < 60 ) ? m : 0;
     segundosTranscurridos += ( minuto * 60 );
     return *this;
 }


 Tiempo &Tiempo::setSegundo( int s )
 {
     int segundo = ( s >= 0 && s < 60 ) ? s : 0;
     segundosTranscurridos += segundo;
     return *this;
 }


 int Tiempo::getHora()
 {
    int a = segundosTranscurridos;

       if( a / 60 >= 60 )
       {
           return a / 3600;
       }else
           return 0;
 }

 int Tiempo::getMinuto()
 {
    int a = segundosTranscurridos;

       if( a / 60 >= 60 )
       {
           return ( a / 60 ) % 60;
       }else
           return a / 60;
 }
int Tiempo::getSegundo()
 {
    int a = segundosTranscurridos;
       return a % 60;
 }


 void Tiempo::imprimirUniversal()
 {
 cout << setfill( '0' ) << setw( 2 ) << getHora() << ":"
 << setw( 2 ) << getMinuto() << ":" << setw( 2 ) << getSegundo();
 }

 void Tiempo::imprimirEstandar()
 {
     int hora = getHora();
     int minuto = getMinuto();
     int segundo = getSegundo();

 cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 )
 << ":" << setfill( '0' ) << setw( 2 ) << minuto
 << ":" << setw( 2 ) << segundo << ( hora < 12 ? " AM" : " PM" );
 }
