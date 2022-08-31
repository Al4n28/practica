#include <stdio.h>

#include <math.h> //Tambien sirve para enseñar librerias 

float pi = 3.1416;
/*
float Calcular_Perimetro(float radio){
    float Perimetro = 2* pi* radio;
    return Perimetro;
}
float Calcular_Area(float radio){
    //float Area = pi*radio*radio;
    float Area = pi*(pow(radio,2));
    return Area;
}
float Calcular_Volumen(float radio){
    float Volumen = ((4*pi*pow(radio,3))/3);
    return Volumen;
}
*/
struct Operaciones{
   float Perimetro;
   float Area;
   float Volumen;
};

typedef struct Operaciones Operaciones;
    
Operaciones Calcular_Operaciones(float radio){
    struct Operaciones Op;
    Op.Perimetro = 2* pi* radio;
    Op.Area = pi*(pow(radio,2));
    Op.Volumen  = ((4*pi*pow(radio,3))/3);
    return Op;
}


int main() {
    /*
    struct Operaciones Op;
    Op.Perimetro = Calcular_Perimetro(radio);
    Op.Area = Calcular_Area(radio);
    Op.Volumen  = Calcular_Volumen(radio);
    */
  struct Operaciones r =Calcular_Operaciones(1.1);

  printf("%.2f \n",r.Perimetro);
  printf("%.2f \n",r.Area);
  printf("%.2f \n",r.Volumen);
  return 0;

}