#include<stdio.h>

/* imprime a tabela de conversão Celsius-Fahrenheit para celsius = 0, 20, ..., 300 */

main()
{
    float fahrenheit, celsius;
    int inicio, fim, incremento;

    inicio = 0;         /* limite inferior da tabela */
    fim = 300;          /* limite superior */
    incremento = 20;    /* incremento */

    celsius = inicio;

    printf("   celsius    fahrenheit\n");

    while(celsius <= fim) {
        fahrenheit = celsius/(5.0/9.0) + 32.0;
        printf("%10.f%14.0f\n", celsius, fahrenheit);
        celsius = celsius + incremento;
    }
}
