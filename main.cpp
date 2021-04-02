#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

enum Color{
    Negro=0,
    Azul=1,
    Verde=2,
    Verdiazul=3,
    Marron=4,
    Morado=5,
    VerdeMostaza=6,
    GrisClaro=7,
    GrisOscuro=8,
    AzulRey=9,
    VerdeLimon=10,
    Celeste=11,
    Rojo=12,
    RositaMorado=13,
    Amarillo=14,
    Blanco=15
};

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

 int y=3,alto=18,ancho=38;
 for(int x=41;x<=50;x++)
 {
   if(x==50)
   {
   obj.Cargar(x,y,alto,ancho,Celeste+RositaMorado*16,Negro+RositaMorado*16);
   Sleep(100);
   }
   else{
   obj.Cargar(x,y,alto,ancho,Celeste,Negro);
   Sleep(100);
   }

   obj.mostrar();
   y+=1;
   alto-=2;
   ancho-=2;
 }

    gotoxy(0,20);system("pause");
    return 0;
}
