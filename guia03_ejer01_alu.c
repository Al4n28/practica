int Calcular_Factorial(int Numero_Entero){
    int cont=1;
    while(Numero_Entero>1){
        cont=cont*Numero_Entero;
        Numero_Entero=Numero_Entero-1;
    }
    return cont;

}