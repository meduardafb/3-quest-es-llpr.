//42

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int ne, an, ie, idade, tempo;
	
	printf("Digite seu n�mero de empregado: \n");
	scanf("%d", &ne);
	
	printf("Digite seu ano de nascimento: \n");
	scanf("%d", &an);
	
	printf("Digite seu ano de ingresso na empresa: \n");
	scanf("%d", &ie);
	

	idade = 2022-an;
	tempo = 2022-ie;
	
	if(idade>=65){
		printf("Requerer aposentadoria.\t");
		printf("N�o requerer.\t");
		
	}else if(tempo>=30){
		printf("Requerer aposentadoria.\t");
		printf("N�o requerer.\t");
		
	}else if(idade>=60 && tempo>=25){
		printf("Requerer aposentadoria.\t");
		printf("N�o requerer.\t");
		
	}else{
		printf("Voc� n�o est� qualificado.\t");
	}
 

	
	return 0;
}
