// Desenvolva e implemente um TAD que represente
// um cilindro. Inclua as funções de inicializações
// necessárias e as operações que retornem a sua
// altura e o raio, a sua área e o seu volume.
// Para cada função, explique brevemente a ideia
// adotada.  Teste o TAD com exemplos.
// Teste o TAD com uma aplicação.

// V = π.r².h
// r = √v / π.h
// h = v / π.r²

#include "./lib/tad.h"

int main()
{
	LC_ALL,"Portuguese";


	Cilindro *ch, *cr, *cv, *cg;

	// h, r, v
	cg = def(20,2,16);

	ch = def_h(20);
	cr = def_r(2);
	cv = def_v(16);

	printf("Definição única:\n");
	printf("| Volume: %.3f\n", volume(ch, cr));
	printf("| Altura: %.3f\n", altura(cr, cv));
	printf("| Raio: %.3f\n", raio(ch, cv));
	
	printf("\nDefinição geral:\n");
	printf("| Volume: %.3f\n", volume(cg, 0));
	printf("| Altura: %.3f\n", altura(cg, 0));
	printf("| Raio: %.3f\n", raio(cg, 0));
	

	return 0;
}
