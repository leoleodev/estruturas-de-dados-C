#include <stdio.h>
#include <stdlib.h>

// 4 - Excluir um elemento.

// Encontra-se a chave a ser exclu�da e o elemento da frente ocupa a posi��o deste elemento, desta forma esse elemento deixa de existir na lista
// assim sendo (exclu�do). A lista fica com uma posi��o a menos preenchida, todos os outros elementos fastam
// uma posi��o para tr�s e fica uma posi��o sobrando j� que um elemento deixou de existir mas por�m ainda existindo como lixo de mem�ria.

int excluir_elemento(int vet[],int n,int chave){
	
	int i=0;
	int j=0;
	
	if(n>0){ // Verifica��o para saber se a sequancia est� vazia.
		for(i=0;i<n;i++){ // Percorre todas as posi��es da lista.
			if(vet[i] == chave){ // Verifica��o da correspondencia entre posi��o da lista e alor procurado.
								 
				for(j=i;j<n-1;j++){
					
					vet[j] = vet[j+1]; // Valor posterior � inserido na posi��o da chave a ser excl�da e todos os
									   // valores seguintes fastam 1 posi��o, j� que a chave deixou de existir sobrando uma
				}					   // posi��o no final, que � preechida com lixo de mem�ria.
				for(i=0;i<n-1;i++){
					printf("%d ",vet[i]); // impress�o da lista j� com a chave exclu�da e uma posi��o a menos, j� que 1 elemento deixou de existir.
				}
				exit(0); // Interrimpimento da execu��o.
			}
		}
		return printf("-1"); // Caso n�o encontre o valor.
	}
	else{
		return printf("Sequencia Vazia"); // Caso a sequencia esteja vazia.
	}	
}

main(){
	
	int i = 0;
	int vet[] = {10,20,30,40,50,60,70,80,90,100}; // Lista ilustrativa criada.
	int chave = 100; // Valor a ser excu�do.
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	printf("Lista original:\n");
	for(i=0; i<tamanho; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n\nNova lista:\n");
		
	excluir_elemento(vet,tamanho,chave);
}
