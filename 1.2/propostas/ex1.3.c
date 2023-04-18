#include<stdio.h>

/* imprime a tabela de conversão Fahrenheit-Celsius para fahrenheit = 0, 20, ..., 300 */

main()
{
    float fahrenheit, celsius;
    int inicio, fim, incremento;

    inicio = 0;         /* limite inferior da tabela */
    fim = 300;          /* limite superior */
    incremento = 20;    /* incremento */

    fahrenheit = inicio;

    printf("fahrenheit   celsius\n");

    while(fahrenheit <= fim) {
        celsius = (5.0/9.0) * (fahrenheit - 32.0);
        printf("%10.0f%10.1f\n", fahrenheit,celsius);
        fahrenheit = fahrenheit + incremento;
    }
}
