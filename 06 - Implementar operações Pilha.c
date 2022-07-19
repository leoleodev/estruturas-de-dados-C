#include <stdio.h>
#include <stdlib.h>

// 6 - Implementar operações inserir e excluir elemnto em uma pilha.

void inserir_elementopilha(int vet[],int n,int novoelemento){
	
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
			
		for(i=0;i<(topo+1);i++){ // Impressão da lista já com o novo valor inserido.
			
			printf("%d ",vet[i]);
		}			
	}
	else{                       
		printf("\nOverflow\n"); // Lista cheia e não pode receber mais valores. 
	}	
}

void remover_elementopilha(int vet1[], int n){
	
	int topo = 0;
	int i = 0;
	
	for (i=0;i<n;i++){   // Aqui a verificação do topo é igual a da função anterior pois não importa para qual motivo vamos usar o topo
				         // ele sempre será o mesmo em todas as listas.
		if(vet1[i] == NULL){
			topo = i;
			break;				
		}
		else if(i == (n-1)){
					
			topo = n;
		}
	}
	// A diferença da função anterior vem aqui.
	
	if(topo!=0){   // Se o topo da lista for diferente de zero é porque nessa lista existm elementos, pode ser que tenha somente um, mas já podemos removê-lo.
		
		topo = topo - 1;  // Topo recebe -1 justamente para atualizarmos a posição correta para se remover o elemento contido nela.
		vet1[topo] = NULL; // o elemento recebe nulo confirmando sua remoção.
			
		for(i=0;i<topo;i++){ // Impressão da lista já com o elemento removido.
								
			printf("%d ",vet1[i]); // É importante resaltar que se alista tiver somente um elemento a impressão será em branca pois o único elemento existem foi removido.
		}		
	}
	else{
		printf("\nUnderflow"); // Se o topo for identificado na posição 0 é porque não tem elementos e não podemos remover nada de uma lista vazia.
	}	
}

main(){
	
	int vet[10] = {10,20,30,40,50,60,70,80,90}; // criação da lista que vai ser um dos parametros da função inseir.
	int novoelemento = 500;        // Elemento a ser inserido.
	
	inserir_elementopilha(vet,10,novoelemento); // Chamada da função inserir.
	
	printf("\n\n");
	
	int vet1[10] = {10,20,30,40,50,60,70,80,90,100}; // Crianção da lista que vai ser um dos parametros da função remover.
	
	remover_elementopilha(vet1,10); // Chamada da função remover.
	
}

