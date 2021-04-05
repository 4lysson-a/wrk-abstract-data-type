# Tipo abstrato de dado

Alysson A. 
Trabalho usando TAD em Estruturas de dados

## Como compilar os programas ?

### Compilando via script

Dentro de cada arquivo existe um script que executa automaticamente 
cada programa, e os deleta assim que a execução termina. 
Basta abrir o terminal e digitar

`./start.sh`

#### Erro de acesso

Caso tenha algum problema para executar o script no linux
De permissão de execução para o códigio

No terminal digite 

`chmod +x ./start.sh`

### Compilando manualmente a implementação das funções

Abra o terminal e digite 

`gcc -c {implementação_das_funções}.c -o {implementação_das_funções}.o`

Esse comando compila a implementação das funções do tad 
para serem usadas na main.c

### Executando a main

`gcc main.c {implementação_das_funções}.o -lm -o main`

Esse comando compila o código principal
Inlcuindo a implementação das funções

O comando `-lm` é importante para evitar um erro com a função `Math.h`