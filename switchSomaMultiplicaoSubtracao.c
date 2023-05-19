#include <stdio.h>

void soma(int a,int b){
	
	int somaTotal=0;
	somaTotal=a+b;
		
	printf("\nnA SOMA DE %i + %i = %i", a,b,somaTotal);
}

void subtracao(int a,int b){
	
	int somaTotal=0;
	somaTotal=a-b;
		
	printf("\nnA SOMA DE %i - %i = %i", a,b,somaTotal);
}

void multiplicacao(int a,int b){
	
	int somaTotal=0;
	somaTotal=a*b;
		
	printf("\nnA SOMA DE %i X %i = %i", a,b,somaTotal);
}
int main(){
	
	int x,y,opcao;

do{

	printf("\nDIGITE O PRMEIRO VALOR: ");
	scanf("%i",&x);
	printf("\nDIGITE O SEGUNDO VALOR: ");
	scanf("%i",&y);
	
	system("cls");
	
	printf("\t MENU");
	printf("\n\t 1 - SOMA");
	printf("\t 2 - SUBTRACAO");
	printf("\n\t 3 - MULTIPLICACAO");
	printf("\nQUAL OPCAO DESEJA: ");
	scanf("%i", &opcao);
	
	switch(opcao){
		
		case 1:
			soma(x,y);
			break;
		
		case 2:
			subtracao(x,y);
			break;
		case 3:
			multiplicacao(x,y);
			break;
		
		case 4:
			printf("\n\t ! OPCAO INVALIDA!");
			break;
		
	}
	
	}while(opcao>!4);
	
}
