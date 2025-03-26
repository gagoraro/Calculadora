int main(int argc, char const *argv[])
{
    float numero1, numero2, resultado;
    int opc;

    printf ( "\n Essa e a sua calculadora pessoal: " );
    printf ("\n Escolha uma opcaoo de operacao abaixo: ");

    printf("\n Opcao 1 - soma ");
    printf("\n opcao 2 - subtracao ");
    printf("\n Opcao 3 - divisao ");
    printf("\n Opcao 4 - multiplicacao ");

    printf("\n Escolha uma opcao de calculo: ");
        scanf( "%d", &opc );

    printf("\nDigite o primeiro valor: ");
        scanf("%f", &numero1);
    printf("\nDigite o segundo valor: ");
        scanf("%f", &numero2);

    if (opc == 1)
        resultado = numero1 + numero2;
    if (opc == 2)
        resultado = numero1 - numero2;
    if (opc == 3)
        resultado = numero1 / numero2;
    if (opc == 4)
        resultado = numero1 * numero2;

    printf("%0.2f eh o resultado", resultado);
   
    return 0;
}

   
