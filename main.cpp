#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

#include "gotoxy.h"
#include "color.h"
#include "cuadros.h"
int main()
{

  ///ANIMACION SIN CLASE
 /**

 for(int x=10;x<20;x++)
 {
     cuadro(x,5,2,5,11,0);
     Sleep(100);
     system("cls");
 }
*/

///ANIMACION CON CLASE

 CUADROS obj;
 int c=0;
 for(int x=10;x<50;x++)
 {
   obj.Cargar(x,5,10,5,c,c);
   obj.mostrar();
   Sleep(150);
   obj.ocultar();
   c++;
 }


    return 0;
}
