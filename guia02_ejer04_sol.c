#include <stdio.h>
#include <math.h>
char Sol_Calcular_Triangulo(float a,float b,float c){
    if ((a ==b)&&(b ==c)){return 'E';}
    if ((a==b)||(b==c)||(a==c)){return 'I';}
    if ((a+b>c)&&(a+c>b)&&(b+c>a)){return 'S';}
    else {return 'N';}
}