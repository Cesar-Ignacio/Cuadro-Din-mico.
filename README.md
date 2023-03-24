# Cuadro Dimanico C++
- Este programa esta diseñado en c++, para dar un poco de estilo  y frescura a los distintos trabajos o ejercicios que queramos hacer :tw-1f440:

###Pantallaso:
[![Captura-de-pantalla-20230324-153159.png](https://i.postimg.cc/zvVQcxCH/Captura-de-pantalla-20230324-153159.png)](https://postimg.cc/rR2gdCYq)

####Código
````cpp
 CUADROS obj;
 obj.Cargar(45,6,12,70,Amarillo+RositaMorado*16,Negro*16);
 obj.mostrar();
 obj.Cargar(50,9,3,40,Azul+RositaMorado*16,Azul*16);
 obj.mostrar();
 gotoxy(58,10);cout<<"Hola Mundo";
````
###Manejo:
- Para formar el cuadro debos proporcionarle 6 valores (enteros).
```cpp
obj.Cargar(posicionX,posicionY,alto,ancho,colorDeMarcoFondo,colorDeFondo);
```

|  PARAMETROS | DESCRIPCIÓN   |
| ------------ | ------------ |
|   P1|  Posicion en X, donde empezara a dibujarse |
|   P2|  Posicion en Y donde empezara a dibujarse |
|   P3|  altura del cuadro, crece para abajo no equitativamente |
|   P4|  ancho del cuadro, crece para la derecha no equitativamente |
|   P5|  color del marco y el fondo del mismo |
|   P6|  color del érea del marco  |

0 = negro
1 = azul
2 = verde
3 = verdiazul
4 = Marrón
5 = Morado
6 = Verde Mostaza
7 = Gris claro
8 = Gris Oscuro
9 = Azul Rey
10 = Verde Limón
11 = Celeste
12 = Rojo
13 = Rosita/Morado
14 = Amarillo Pollo
15 = Blanco

FÓRMULA PARA  MODIFICAR  COLOR:
Por ejemplo, si queremos texto verde en fondo blanco
sería
2 + 15*16 = 242*/
