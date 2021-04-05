typedef struct data Data;
#include <stdlib.h>
#include <stdio.h>
#include "Data.h"


int main()
{
	Data* dia;
	Data* mes;
	Data* ano;
	Data* comp;
	
	dia = cria_dado();
	mes = cria_dado();
	ano = cria_dado();
	comp = cria_dado();
	
	insere (dia, mes, ano, comp);
	soma (dia, mes, ano, comp);
	
	
	
	
	system("pause");
	return 0;
}
