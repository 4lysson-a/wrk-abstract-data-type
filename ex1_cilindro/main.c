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

	Cilindro *ch, *cr, *cv;

	// h, r, v
	ch = def_h(20);
	cr = def_r(2);
	cv = def_v(16);

	printf("%.3f\n", volume(ch, cr));
	printf("%.3f\n", raio(ch, cv));
	printf("%.3f\n", altura(cr, cv));

	return 0;
}
