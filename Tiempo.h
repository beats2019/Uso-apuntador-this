#ifndef TIEMPO_H
 #define TIEMPO_H

 class Tiempo
 {
     public:
         Tiempo( int = 0, int = 0, int = 0 );
         Tiempo &setTiempo( int, int, int );
         Tiempo &setHora( int );
         Tiempo &setMinuto( int );
         Tiempo &setSegundo( int );
         int getHora();
         int getMinuto() ;
         int getSegundo() ;
         void imprimirUniversal() ;
         void imprimirEstandar() ;
     private:
         int segundosTranscurridos;

 };

 #endif
