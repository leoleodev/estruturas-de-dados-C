#include <stdio.h>
#include <stdlib.h>

// 6 - Implementar operações inserir e excluir elemnto em uma Filha.

void operacao_Fila(int vet[],int n,int novoelemento){
	
	int topo = 0; // inicialização da variável topo.
	int i = 0;    // inicialização da variável i.
	
	for (i=0;i<n;i++){  // Esta parte é para encontrar-mos exatamente onde está o topo da pilha.
		
		if(vet[i] == NULL){   // Se o valor da posição i do vetor for nulo é por que a posição anterior é o topo. 
							  
			topo = (i-1);    // Definida a posição exata do toop da lista.
			break;		   // como já encontramos o topo não queremos que o loop se repita pois o que nos interessa já achamos.	
		}
		else if(i == (n-1)){ // Aqui é caso a lista esteja cheia e o topo se encontre na ultima posição portanto não tendo espaço para inserir.
							 // precisamos desta informação justamente para tornar a opção OverFlow válida caso seja esta a condição da lista.
			topo = n;  // topo recebe n indicando que o topo é o numéro que corresponde ao tamanho total da lista.
		}
	}
	
	if(topo!=n){    // Se topo for diferente de n é por que tem espaço na lista e podemos inserir elementos nela.
		
		topo = topo+1;  // Indicamos que topo é a posição da frente somente para inserirmos o novo elemento nessa posição e consequentemente atualizamos o topo da lista.
		vet[topo] = novoelemento; // Inserimos o novo valor na posição topo.
			
		// Remoção do elemento da Fila;
			
		int i=0;
	
		if(n>0){ // Verificação para saber se a sequancia está vazia.
		
								 
				for(i=0;i<n;i++){
					
					vet[i] = vet[i+1]; 
									   
				}					   
				for(i=0;i<n-1;i++){
					printf("%d ",vet[i]); 
				}
				exit(0); // Interrimpimento da execução.
			
		}
		else{
			return printf("Sequencia Vazia"); // Caso a sequencia esteja vazia.
		}
			
					
	}
	else{                       
		printf("\nOverflow\n"); // Lista cheia e não pode receber mais valores. 
	}	
}


main(){
	
	int vet[10] = {10,20,30,40,50,60,70,80,90}; // criação da lista que vai ser um dos parametros da função inseir.
	int novoelemento = 500;        // Elemento a ser inserido.
	
	operacao_Fila(vet,10,novoelemento); // Chamada da função.
	
}

