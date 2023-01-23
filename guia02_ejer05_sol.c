#include <stdio.h>
#include <math.h>
char Sol_Calcular_Impuestos(float Salario){
    float Renta_Afecta = (Salario*1.05)*0.6;
    if (Renta_Afecta <=0){return 'N';}
    if (Renta_Afecta <=99999.99f){return 'D';}
    if (Renta_Afecta >99999.99f){return 'P';}
    else{return 'N';}
    
}