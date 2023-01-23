
#include <stdio.h>
#include <math.h>
int Calcular_Numero(int num){
    for (int i=1;i<=num; i++){
        if(i==num){printf("%i", i);}
        else{printf("%i - ", i);}
        
    }
    //printf("%.2f\n", Calcular_Sueldo(25.0f));
    //printf("%.2f\n", Sol_Calcular_Sueldo(25.0f));
    return 0;
}