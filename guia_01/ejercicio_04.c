#include <stdio.h>

float Calcular_Nota_Necesaria(float Solemne1, float  Solemne2, float  Solemne3, 
                            float   Control1, float  Control2, float  Control3){

    /*
     Solemne 1: 20 %.
     Solemne 2: 25 %.
     Solemne 3: 30 %.
     Controles: 25 % (3 controles al promedio)
    */

    /* Forma Correcta de hacerlo
    float Suma_Controles = Control1 + Control2 + Control3;
    float Promedio_Controles = Suma_Controles/3;
    float Solemne1_Porc = Solemne1*0.2;
    float Solemne2_Porc = Solemne1*0.25;
    float Solemne3_Porc = Solemne1*0.3;
    float Controles_Porc = Promedio_Controles*0.25;
    float Nota_Catedra = Solemne1_Porc + Solemne2_Porc + Solemne3_Porc + Controles_Porc;
    float Nota_Examen = (4- (Nota_Catedra*0.7)) /0.3
    return Nota_Examen
    */
    
    //Como yo lo haría:
    return (4- (
            (
            Solemne1*0.2 + Solemne1*0.25 +Solemne1*0.3 +
                ((Control1+Control2+Control3)/3)*0.25 
                    )
                *0.7)
                ) /0.3;
  
}

int main() {
  float r =Calcular_Nota_Necesaria(4.1,5.0,7.0,6.2,2.1,4.7);
  printf("%.2f",r);
  return 0;

}



