//62 Ler o n�mero de alunos existentes em uma turma e, ap�s isto, ler as notas destes alunos, calcular e
//escrever a m�dia aritm�tica dessas notas lidas. 
#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int qa;
	float na, media, tn;
	
	printf("Quantidade de alunos: \n");
	scanf("%d",&qa);
	
	for(int cont=1; cont<=qa; cont++){
		
		printf("digite a nota do aluno\n");
		scanf("%f", &na);
		tn = tn + na;
	}
	
	media = tn/qa;
	
	printf("A m�dia �:%.2f\n", media);
			

	
	return 0;
}







