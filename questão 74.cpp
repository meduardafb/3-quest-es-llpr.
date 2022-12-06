//74) Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10. 

#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int n;
	int tab=1;
	
	printf("Digite um número: \n");
	scanf("%d",&n);
	
	for(tab=1; tab<=10;tab++){
		
		printf("%d x %d = %d\n", n, tab, n*tab);	
		
	}
	
	
	return 0;
}
