#include <stdio.h>

// 4 - Alterar Elemento.

// Este algoritmo recebe uma chave e um novo elemnto, que sejá inserido no lugar desta chave
// assim fazendo a alteração.

int alterar_elemento(int vet[],int n,int chave,int novoElemento){
	
	int i=0;
	int j=0;
	
	if(n>0){ // Verifica se a sequencia esta vazia;
		for(i=0;i<n;i++){ // Percorre todas as posições da lista;
			if(vet[i] == chave){ 
				vet[i] = novoElemento; // Novo valor é atribuido a mesma posição do antigo.
				for(j=0;j<n;j++){
					
					printf("%d ",vet[j]); // Impressão do vetor já com o valor substituído.
					
				}
				break; // Execução interrompida para não gastar mais processamento pois já encontramos.
			}
		}
		return -1; // Não encontrado
	}
	else{
		return printf("Sequencia Vazia"); // A sequancia não contém valores.
	}	
}

main(){
	
	int vet[] = {1,2,3,4,5};
	int i=0;
	int chave = 1; // Valor que vai ser alterado.
	int novoElemento = 999; // Valor a ser substituído.
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	printf("Lista original:\n");
	for(i=0; i<tamanho; i++){
		printf("%d ", vet[i]);
	}
	
	printf("\n\nNova lista:\n");
	
	alterar_elemento(vet,tamanho,chave,novoElemento);
}






