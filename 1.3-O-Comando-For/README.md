# Capítulo 1 - Uma introdução através de exemplos

## 1.3 - O Comando For 

---

## O que vamos fazer hoje? 

---

## O Comando For
### Rever o programa que converte de graus fahrenheit para graus celsius: de fahrenheit = 0 até 300, porém de outra forma.

---

# comando for

```
for (fahr=0; fahr<=300; fahr=fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));  
```

## fahr = 0
Recebe o valor inicial que será usado pra controlar o loop
### fahr <= 300
Estabelece a condição para o loop parar
#### fahr = fahr + 20
Estabelece o incremento que será usado para determinar o passo



---

# Proposta de estudo:

Ex 1.5: Modifique o programa de conversão de temperatura para imprimir a tabela em ordem inversa, isto é, de 300 graus até o 0 grau.

Soluções em https://github.com/falandoemc/the_c_programming_language
