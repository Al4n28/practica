
#include <stdio.h>
#include <math.h>
char Sol_Calcular_Calificacion(float Puntaje){
    if (Puntaje ==7){return 'E';}
    if ((Puntaje <7)&&(Puntaje >=6)){return 'M';}
    if ((Puntaje <6)&&(Puntaje >=5)){return 'B';}
    if ((Puntaje <5)&&(Puntaje >=4)){return 'S';}
    if ((Puntaje <4)&&(Puntaje >=1)){return 'I';}
    else {return 'N';}
}