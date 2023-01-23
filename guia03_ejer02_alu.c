#include <stdio.h>
#include <math.h>
int Calcular_Tabla(int num){
    for (int i=1;i<16; i++){
        printf("%i\n", num*i);
    }
    //printf("%.2f\n", Calcular_Sueldo(25.0f));
    //printf("%.2f\n", Sol_Calcular_Sueldo(25.0f));
    return 0;
}