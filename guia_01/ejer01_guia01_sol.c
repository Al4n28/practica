float Calcular_Precio_Descuento( float Precio, float Descuento){

    /* Forma Correcta de hacerlo
    float Descuento_Porcentual = Descuento/100;
    float Descuento_A_Descontar = Precio*Descuento_Porcentual;
    float Total = Precio-Descuento_A_Descontar;
    */
   
    //Como yo lo haría:
    return Precio*(1+(Descuento/100));
  
}