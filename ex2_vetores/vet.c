#include "./lib/tad.h"

typedef struct vetor Vet;

struct vetor
{
	int vet;
	int index;
};

// Vet *criar_vet(int *vet, int index)
// {
// 	int vetor[index];
// 	vet = vetor;
// }

Vet *inserir_vet(int *vet, int index){
	Vet *v = (Vet *)malloc(sizeof(Vet));
	
	v -> index = index;
	v -> vet = *vet;
	
	printf("Quantos elementos deseja inserir ?\n| ");
	scanf("%d", &index);

}
