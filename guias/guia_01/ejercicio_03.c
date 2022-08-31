#include <stdio.h>

float Dolar_A_Euro(float Dolares){

    /* Forma Correcta de hacerlo //1 euro = 1.33250 dólares
    float Valor_Euro_Dolar = 1.33250;
    float Euros = Dolares / Valor_Euro_Dolar;
    return Euros
    */
   
    //Como yo lo haría:
    return Dolares/1.33250;
  
}

int main() {
  float r =Dolar_A_Euro(1.33250);
  printf("%.2f",r);
  return 0;

}