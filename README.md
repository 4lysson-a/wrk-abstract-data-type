# Tipo abstrato de dado

Trabalho usando TAD em Estruturas de dados

## Como compilar os programas ?

### - No linux

#### Compilando via script

Dentro de cada arquivo existe um script que executa automaticamente 
cada programa, e os deleta assim que a execução termina. 
Basta abrir o terminal e digitar

`./start.sh`

##### Acesso negado ?

Caso tenha algum problema para executar o script no linux
De permissão de execução para o códigio

No terminal digite 

`chmod +x ./start.sh`

#### Compilando manualmente a implementação das funções

Abra o terminal e digite 

`gcc -c {implementação_das_funções}.c -o {implementação_das_funções}.o`

Esse comando compila a implementação das funções do tad 
para serem usadas na main.c

#### Executando a main

`gcc main.c {implementação_das_funções}.o -lm -o main`

Esse comando compila o código principal
Inlcuindo a implementação das funções

O comando `-lm` é importante para evitar um erro com a função `Math.h`

### - No Windows 

No windows é necessário ter instalado o `MinGW` você pode baixa-lo 
no link abaixo

[link do site GCC](https://sourceforge.net/projects/mingw/files/)

Apos a instalação basta executar os comandos `gcc` como no linux




 
 
Alysson A.