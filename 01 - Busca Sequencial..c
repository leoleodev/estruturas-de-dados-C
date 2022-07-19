#include <stdio.h>

// 1 - Buscar elemento.

// Buscar elemtento em uma lista através de uma chave e retornar a posição.

int buscar_elemento(int vet[], int n, int chave){ // Os paramentros: vetor, tamanho do vetor e a chave.
	
	int i=0;
	
	if(n>0){
	
		for(i=0;i<n;i++){ //Ciclo para rodar n(10) vezes.
				if(vet[i] == chave){ //Estrutura condicional para testar se o conteúdo de cada posição é igual a chave digitada.
				return i; // Retorno da posição;
			}
		}
		return -1; //Caso a chave não exista na sequncia.
	}
	else{
		printf("O numero de elementos nesta lista e zero ");
	}
}

main(){
	
	int vet[] = {10,4,67,32,90,99,55,67,92,11}; // Vetor com 10 posições.
	int chave=0;
	int result = 0;
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	chave = 92;
	
	result = buscar_elemento(vet,tamanho,chave); // Aqui a função de busca.
	
	if(result != -1){
		printf("\nA chave procurada esta na posicao %d da lista\n",result);
	}
	else{
		printf("\nA chave procurada nao existe na lista");
	}
	
	
}



