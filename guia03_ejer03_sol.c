#include <stdio.h>
#include <math.h>
int Sol_Calcular_Vuelto(int num){
    int cont20= 0 , cont10b = 0, cont5 = 0, cont2 = 0, cont1= 0 , cont500= 0 , cont100 = 0, cont50= 0 , cont10 = 0;
    while (num>10){
    for (int c20 ;num>=20000; c20++){
        num = num-20000;cont20++;}
    for (int c10b ;num>=10000; c10b++){
        num = num-10000;cont10b++;}
    for (int c5 ;num>=5000; c5++){
        num = num-5000;cont5++;}
    for (int c2 ;num>=2000; c2++){
        num = num-2000;cont2++;}
    for (int c1 ;num>=1000; c1++){
        num = num-1000;cont1++;}
    for (int c500 ;num>=500; c500++){
        num = num-500;cont500++;}
    for (int c100 ;num>=100; c100++){
        num = num-100;cont100++;}
    for (int c50 ;num>=50; c50++){
        num = num-50;cont50++;}
    for (int c10 ;num>=10; c10++){
        num = num-10;cont10++;}
    }
    printf("20.000 = %i\n", cont20);
    printf("10.000 = %i\n", cont10b);
    printf("5.000 = %i\n", cont5);
    printf("2.000 = %i\n", cont2);
    printf("1.000 = %i\n", cont1);
    printf("500 = %i\n", cont500);
    printf("100 = %i\n", cont100);
    printf("50 = %i\n", cont50);
    printf("10 = %i\n", cont10);
    
    //printf("%.2f\n", Calcular_Sueldo(25.0f));
    //printf("%.2f\n", Sol_Calcular_Sueldo(25.0f));
    return 0;
}