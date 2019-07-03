#include <iostream>
 using std::cout;
 using std::endl;

 #include "Tiempo.h"

     int main()
     {
         Tiempo t;

         t.setHora( 18 ).setMinuto( 30 ).setSegundo( 22 );

         cout << "Tiempo universal: " ;
         t.imprimirUniversal();

         cout << "\nTiempo estandar: ";
         t.imprimirEstandar();

         cout << "\n\nNuevo tiempo estandar: ";


         t.setTiempo( 20, 20, 20 ).imprimirEstandar();
         cout << endl;

         return 0;
     }
