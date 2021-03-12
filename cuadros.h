#ifndef CUADROS_H_INCLUDED
#define CUADROS_H_INCLUDED

void cuadro(int xx, int yy ,int alto, int larg,int colorcuadroyfondo, int fondo)
{
  int x=0,y=yy,largo=larg+xx;
  color("",colorcuadroyfondo);///color puede modificarse
  for(x=0;x<alto;x++)///poner bordes a los costados
  {
      gotoxy(xx,y);cout<<(char)186<<endl;///borde izquierdo
      gotoxy(largo,y);cout<<(char)186<<endl;///borde derecho
      y++;
  }


  for(x=xx;x<=largo;x++)///barras horinzontales
  {
      if(x==xx)///x igual a la posicion de inicia� de la oracion disminuida en 1
      {
          gotoxy(x,yy-1);cout<<(char)201<<endl;///codo izquierdo arriba
          gotoxy(x,y);cout<<(char)200<<endl;///codo izquierdo invertido abajo
      }
     else if(x==largo)
      {
          gotoxy(x,yy-1);cout<<(char)187<<endl; ///codo derecho  arriba
          gotoxy(x,y);cout<<(char)188<<endl;   ///codo derecho invertido abajo
      }
      else
      {
          gotoxy(x,yy-1);cout<<(char)205<<endl;/// barra superior
          gotoxy(x,y);cout<<(char)205<<endl;   ///barra inferior

      }
  }

///color del fondo
  int yyy=yy;

  for(int t=0;t<alto;t++)
  {
   for(x=xx;x<=largo;x++)
  {
    if(x!=xx && x!=largo)
    {
     color("",fondo);
     gotoxy(x,yyy);cout<<" "<<endl;
    }

  }
  yyy++;
  }

color("",7);///vuelve al color de consola

}
///class

class CUADROS{

private:
      int posicionx;
      int posiciony;
      int alto;
      int largo;
      int colordemarco;
      int colorfondo;

public:

     CUADROS(int px=50, int py=10,int alt=1, int larg=10,int colorM=15,int colorF=0)
     {
       posicionx=px;
       posiciony=py;
       alto=alt;
       largo=larg;
       colordemarco=colorM;
       colorfondo=colorF;
     }

     void setsposicionx(int x){posicionx=x;}
     void setsposiciony(int y){posiciony=y;}
     void setsalto(int alt){alto=alt;}
     void setslargo(int larg){largo=larg;}
     void setscolormarco(int colm){colordemarco=colm;}
     void setscolorfondo(int colf){colorfondo=colf;}


     void Cargar(int,int,int,int,int,int);
     void mostrar(void);
     void ocultar(void);

     ~CUADROS()
     {
         cout<<"EL OBJETO MURIO"<<endl;
     }

};

void CUADROS::Cargar(int px,int py, int altura, int anchura, int colormarco, int colorfondo)
{
    posicionx=px;
    posiciony=py;
    this->alto=altura;
    largo=anchura;
    this->colordemarco=colormarco;
    this->colorfondo=colorfondo;
}


void CUADROS::mostrar()
{
    cuadro(posicionx,posiciony,alto,largo,colordemarco,colorfondo);
}
void CUADROS::ocultar()
{
    cuadro(posicionx,posiciony,alto,largo,0,0);
}

#endif // CUADROS_H_INCLUDED
