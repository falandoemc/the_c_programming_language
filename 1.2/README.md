# Capítulo 1 - Uma introdução através de exemplos

## 1.2 - Variáveis e Expressões Aritméticas

## Variáveis e Expressões Aritméticas 
### Um programa que converte de graus fahrenheit para graus celsius: de fahrenheit = 0 até 300

# Neste código usamos variáveis e podemos ver essa abordagem inicial sobre os tipos de variáveis em linguagem C

## Tipos:
## int de tamanho 4 bytes:
signed int min: -2147483648 max: 2147483647
### float de tamanho 4 bytes(com pelo menos 6 digitos significativos com sua magnitude descrita abaixo:
float min: 10^-38 max: 10^+38

exemplo 32,253886
#### outros tipos básicos providos pela linguagem C
```
char    caracter - um único byte
short   inteiro curto
long    inteiro longo
double  ponto flutuante em dupla precisão
``` 
##### Esses tamanhos dependem da máquina, se o processador é 32 bits ou 64 bits, isso será abordado mais adiante.

### Vetores
### Estruturas e Uniões
### Apontadores(os famosos ponteiros)
### No C existem funções que retornam tudo isso que foi citado relacionado a tipos!

# Como a linguagem C reage um número inteiro dividido por um número inteiro?
## Ele trunca a parte decimal!
### Como:
5/9 = 0.5555555....
### Logo:
5/9 = 0
#### Assim todas as temperaturas dariam 0 por isso não deixamos dessa forma no nosso codigo.

# Proposta de estudo:

Ex 1.3: Modifique o programa de conversão de temperatura para imprimir um cabeçalho acima da tabela.

Ex 1.4: Escreva um programa para imprimir a tabela correspondente de Celsius a Fahrenheit.

Solução na pasta propostas 
