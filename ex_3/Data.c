#include <stdlib.h>
#include <stdio.h>
#include "Data.h"

struct data{
	int dia;
	int mes;
	int ano;
	char comp[1][11];
};


Data* cria_dado(){
	Data* d = (Data *) malloc (sizeof(Data));


	return d;
}

void insere (Data* d1, Data* d2, Data* d3, Data* c){
	int xdia = 0;
	int xmes = 0;
	int xano = 0;
	int #include <stdlib.h>
#include <stdio.h>
#include "Data.h"

struct data{
	int dia;
	int mes;
	int ano;
	char comp[1][11];
};


Data* cria_dado(){
	Data* d = (Data *) malloc (sizeof(Data));


	return d;
}

void insere (Data* d1, Data* d2, Data* d3, Data* c){
	int xdia = 0;
	int xmes = 0;
	int xano = 0;
	int cont = 0;

	printf("Digite o dia: ");
	scanf("%d", &xdia);

	if(xdia > 0 && xdia <= 31){
		d1 ->dia = xdia;

	}
	else{
		printf("Dado errado! Digite novamente um dia do mes entre 1 e 31: \n");
	}


	printf("Digite o mes: ");
	scanf("%d", &xmes);
	if(xmes > 0 && xmes <= 12){
		d2 -> mes = xmes;
	}
	else{
		printf("Dado errado! Digite novamente um mes entre 1 e 12: \n");
	}


	if(d2 -> mes == 2 && d1 -> dia > 29){
		printf("Data invalida! \n");
		printf("Digite novamente o dia do mes entre 1 e 29: \n");
		scanf("%d", &d1 -> dia);
	}

	printf("Digite o ano: ");
	scanf("%d", &xano);
	if(xano > 1900 && xano < 3000){
		d3 -> ano = xano;
	}
	else{
		printf("Dado errado! Digite novamente um ano entre 2000 e 3000: \n");
	}


	printf("Data digitada: %.2d / %.2d / %d \n\n", d1 -> dia, d2 -> mes, d3 -> ano );


}

void soma(Data* d1, Data* d2, Data* d3){
	int soma = 0;

	printf("Digite o numero de dias que deseja adicionar: ");
	scanf("%d", &soma);
	d1 -> dia += soma;

	if(d1 -> dia > 31){
		while(d1 -> dia > 31){
		d1 -> dia = d1 -> dia - 31;
		(d2 -> mes)++;
	}
	}
	if(d2 -> mes > 12){
		d2 -> mes = d2 -> mes - 12;
		d3 -> ano += 1;
	}

	if(d2 -> mes == 2 && d1 -> dia > 28){
		d1 -> dia = d1 -> dia - 28;
		(d2 -> mes)++;
	}





	printf("Nova data digitada: %.2d / %.2d / %d \n\n", d1 -> dia, d2 -> mes, d3 -> ano );

}




/*
inteiro para string. At� 10 algar�smos.
sprintf(buf, "%i", i);

string para inteiro
i = atoi(buf);
*/
