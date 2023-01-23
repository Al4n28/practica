int Sol_Calcular_Factorial(int Numero_Entero){
    if ( Numero_Entero == 0 ) 
        return 1;
    return(Numero_Entero * Sol_Calcular_Factorial(Numero_Entero - 1));
}