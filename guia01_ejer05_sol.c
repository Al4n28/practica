#include <stdio.h>
#include <math.h>
float Sol_Calcular_Perimetro(float radio){
    return 2*3.1416f*radio;
}

float Sol_Calcular_Area(float radio){
    return 3.1416f* pow(radio,2);
}

float Sol_Calcular_Volumen(float radio){
    return (4*3.1416f* pow(radio,3))/3;
}

int Sol_Mostrar_Operaciones_Radio(float radio){
    printf("%.2f\n", Sol_Calcular_Perimetro(radio));
    printf("%.2f\n", Sol_Calcular_Area(radio));
    printf("%.2f\n", Sol_Calcular_Volumen(radio));
    return 0;
}