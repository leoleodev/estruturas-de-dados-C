#include <stdio.h>
#include <stdlib.h>

// 4 - Excluir um elemento.

// Encontra-se a chave a ser excluída e o elemento da frente ocupa a posição deste elemento, desta forma esse elemento deixa de existir na lista
// assim sendo (excluído). A lista fica com uma posição a menos preenchida, todos os outros elementos fastam
// uma posição para trás e fica uma posição sobrando já que um elemento deixou de existir mas porém ainda existindo como lixo de memória.

int excluir_elemento(int vet[],int n,int chave){
	
	int i=0;
	int j=0;
	
	if(n>0){ // Verificação para saber se a sequancia está vazia.
		for(i=0;i<n;i++){ // Percorre todas as posições da lista.
			if(vet[i] == chave){ // Verificação da correspondencia entre posição da lista e alor procurado.
								 
				for(j=i;j<n-1;j++){
					
					vet[j] = vet[j+1]; // Valor posterior é inserido na posição da chave a ser exclída e todos os
									   // valores seguintes fastam 1 posição, já que a chave deixou de existir sobrando uma
				}					   // posição no final, que é preechida com lixo de memória.
				for(i=0;i<n-1;i++){
					printf("%d ",vet[i]); // impressão da lista já com a chave excluída e uma posição a menos, já que 1 elemento deixou de existir.
				}
				exit(0); // Interrimpimento da execução.
			}
		}
		return printf("-1"); // Caso não encontre o valor.
	}
	else{
		return printf("Sequencia Vazia"); // Caso a sequencia esteja vazia.
	}	
}

main(){
	
	int i = 0;
	int vet[] = {10,20,30,40,50,60,70,80,90,100}; // Lista ilustrativa criada.
	int chave = 100; // Valor a ser excuído.
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	printf("Lista original:\n");
	for(i=0; i<tamanho; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n\nNova lista:\n");
		
	excluir_elemento(vet,tamanho,chave);
}
