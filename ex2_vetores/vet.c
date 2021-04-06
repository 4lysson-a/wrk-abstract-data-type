#include "./lib/tad.h"


struct vetor{
	int *vet;
	int index;
};



Vet *cria_vet(Vet* vx){
	int id = vx -> index;
	
	printf("Digite o número de elementos do vetor\n| ");
	scanf("%d", &id);
	
	int vetor[id];
	
	*vx -> vet = vetor[id];
	return vx;
}


