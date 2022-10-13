float Sol_Calcular_Sueldo_Neto(float Horas_Trabajadas,float  Pago_Por_hora){

  /* Forma Correcta de hacerlo
  float Sueldo = Horas_Trabajadas*Pago_Por_hora;
  float Beneficios = Sueldo*0.25;
  float Descuentos = Sueldo*0.1;
  float Consignacion = Sueldo*0.05;
  float Sueldo_Neto = Sueldo+ Beneficios-Descuentos- Consignacion;
  */
    //Como yo lo haría:
    return (Horas_Trabajadas*Pago_Por_hora)*1.1;
  

};