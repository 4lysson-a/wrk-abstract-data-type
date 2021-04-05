// Desenvolva e implemente um TAD que represente um
// conjunto de inteiros. Para isso, utilize um vetor
// de inteiros. O TAD deverá conter as seguintes funções

// Criar um conjunto vazio.
// Remover um elemento no conjunto.
// Inserir um elemento no conjunto.
// União de dois conjuntos.
// Menor valor do conjunto.
// Testar se o conjunto é vazio.
// Testar se os dois conjuntos são iguais.
// Testar se um número pertence ao conjunto.

// Para cada função, explique brevemente a ideia

#include "./lib/tad.h"

int main()
{
	int *vet;
	int num[10];
	criar_vet(vet,10);
	inserir_vet(vet, num);
  return 0;
}