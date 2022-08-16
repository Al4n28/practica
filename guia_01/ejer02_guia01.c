#include <stdio.h>

float Calcular_Sueldo_Neto(float Horas_Trabajadas, int Pago_Por_hora){

    /* Forma Correcta de hacerlo
    float Sueldo = Horas_Trabajadas*Pago_Por_hora;
    float Beneficios = Sueldo*0.25;
    float Descuentos = Sueldo*0.1;
    float Consignacion = Sueldo*0.05;
    float Sueldo_Neto = Sueldo+ Beneficios-Descuentos- Consignacion;
    */
   
    //Como yo lo haría:
    return (Horas_Trabajadas*Pago_Por_hora)*1.1;
  
}

int main() {
  float r =Calcular_Sueldo_Neto(29,2600.6);
  printf("Sueldo_Neto:\n");
  printf("%.2f",r);
  return 0;

}