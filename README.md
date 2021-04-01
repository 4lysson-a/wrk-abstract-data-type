# Cilindro 
Trabalho usando tipo abstrato de dados em Estruturas de dados


## Como rodar o programa ??

### Compilando a implementação das funções

Abra o terminal e digite 

`gcc -c cilindro.c -o cilindro.o`

Esse comando compila a implementação das funções do tad 
para serem usadas na main.c

### Executando a main

`gcc main.c cilindro.o -lm -o main`

Esse comando compila o código principal
Inlcuindo a implementação das funções

O comando `-lm` é importante para evitar um erro com a função `Math.h`