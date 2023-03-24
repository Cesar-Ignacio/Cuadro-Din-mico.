# Cuadro Dimanico C++.md
- Este programa esta diseñado en c++, para dar un poco de estilo  y frescura a los distintos trabajos o ejercicios que queramos hacer :tw-1f440:. 


# Cuadro-Dinamico.

cuadros c++

El presente programa te permitirá crear cuadros dinámicos, que te permitirá modificar el color y sus dimensiones.

LA FUNCIÓN CUADRADO RECIBE 6 PARA METROS:
cuadrado(PXO,PYO,ALTO,((PXO+TAMAÑO _DE_LA_ORACION)=LARGO),COLOR CUADRO FONDO,COLOR_FONDO);
PXO=AQUÍ SE DEBE PONER EL PUNTO EN "X" DE DONDE EMPIEZA LA ORACIÓN.
PYO=AQUÍ SE DEBE PONER EL PUNTO EN "Y" DE DONDE EMPIEZA LA ORACIÓN.
ALTO=AQUÍ DEBES PODER EL TAMAÑO DEL CUADRADO (EL TAMAÑO CRECE HACIA ABAJO , Y NO HACIA ARRIBA)
LARGO=AQUÍ SE PONE EL LARGO; QUE ES EL TAMAÑO DE LA ORACIÓN + PXO.
COLOR CUADRO FONDO=SE PONE EN NÚMEROS EL COLOR DEL MARCO Y EL FONDO QUE TENDRÁ
COLOR_FONDO=SE PONE EL COLOR DEL FONDO(ÁREA)DEL MARCO.

copia esto para que veas:
cuadrado(49,4,alto,50+19,192,207);

PARA AGRANDAR EN ANCHURA EL CUADRO LO HACEMOS ASÍ:

cuadrado(PXO-10,PYO,alto,(LARGO)+10,192,207);/// hacemos que el cuadro sea más ancho(largo horizontalmente)

ACÁ VAMOS A SER CRECER EL CUADRO EN 10 PARA LOS DOS LADOS

(PXO-10)=RESTAMOS A PXO 10 PORQUE ESE TIENE QUE CRECER HACIA LA IZQUIERDA.
(LARGO)+10=SUMAMOS A LARGO 10 PORQUE TIENE QUE CRECER HACIA LA DERECHA.


<<<COSAS A TENER EN CUENTA >>>

 Un cuadro es equivalente a 3 líneas.

 ejemplo

    5  ---------------
    6 |  xxxxxxx     |
    7 ---------------
    8   -------------
    9  | xxxxxx     |
    10 -------------

fórmula:

  cuadro  lineas
  1-------3
  9-------27
  por lo tanto para crear 9 cuadro necesitaremos 27 lineas 9*3=27


*/

/**

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
