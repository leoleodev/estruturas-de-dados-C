#include <stdio.h>
#include <stdlib.h>

// 6 - Implementar opera��es inserir e excluir elemnto em uma pilha.

void inserir_elementopilha(int vet[],int n,int novoelemento){
	
	int topo = 0; // inicializa��o da vari�vel topo.
	int i = 0;    // inicializa��o da vari�vel i.
	
	for (i=0;i<n;i++){  // Esta parte � para encontrar-mos exatamente onde est� o topo da pilha.
		
		if(vet[i] == NULL){   // Se o valor da posi��o i do vetor for nulo � por que a posi��o anterior � o topo. 
							  
			topo = (i-1);    // Definida a posi��o exata do toop da lista.
			break;		   // como j� encontramos o topo n�o queremos que o loop se repita pois o que nos interessa j� achamos.	
		}
		else if(i == (n-1)){ // Aqui � caso a lista esteja cheia e o topo se encontre na ultima posi��o portanto n�o tendo espa�o para inserir.
							 // precisamos desta informa��o justamente para tornar a op��o OverFlow v�lida caso seja esta a condi��o da lista.
			topo = n;  // topo recebe n indicando que o topo � o num�ro que corresponde ao tamanho total da lista.
		}
	}
	
	if(topo!=n){    // Se topo for diferente de n � por que tem espa�o na lista e podemos inserir elementos nela.
		
		topo = topo+1;  // Indicamos que topo � a posi��o da frente somente para inserirmos o novo elemento nessa posi��o e consequentemente atualizamos o topo da lista.
		vet[topo] = novoelemento; // Inserimos o novo valor na posi��o topo.
			
		for(i=0;i<(topo+1);i++){ // Impress�o da lista j� com o novo valor inserido.
			
			printf("%d ",vet[i]);
		}			
	}
	else{                       
		printf("\nOverflow\n"); // Lista cheia e n�o pode receber mais valores. 
	}	
}

void remover_elementopilha(int vet1[], int n){
	
	int topo = 0;
	int i = 0;
	
	for (i=0;i<n;i++){   // Aqui a verifica��o do topo � igual a da fun��o anterior pois n�o importa para qual motivo vamos usar o topo
				         // ele sempre ser� o mesmo em todas as listas.
		if(vet1[i] == NULL){
			topo = i;
			break;				
		}
		else if(i == (n-1)){
					
			topo = n;
		}
	}
	// A diferen�a da fun��o anterior vem aqui.
	
	if(topo!=0){   // Se o topo da lista for diferente de zero � porque nessa lista existm elementos, pode ser que tenha somente um, mas j� podemos remov�-lo.
		
		topo = topo - 1;  // Topo recebe -1 justamente para atualizarmos a posi��o correta para se remover o elemento contido nela.
		vet1[topo] = NULL; // o elemento recebe nulo confirmando sua remo��o.
			
		for(i=0;i<topo;i++){ // Impress�o da lista j� com o elemento removido.
								
			printf("%d ",vet1[i]); // � importante resaltar que se alista tiver somente um elemento a impress�o ser� em branca pois o �nico elemento existem foi removido.
		}		
	}
	else{
		printf("\nUnderflow"); // Se o topo for identificado na posi��o 0 � porque n�o tem elementos e n�o podemos remover nada de uma lista vazia.
	}	
}

main(){
	
	int vet[10] = {10,20,30,40,50,60,70,80,90}; // cria��o da lista que vai ser um dos parametros da fun��o inseir.
	int novoelemento = 500;        // Elemento a ser inserido.
	
	inserir_elementopilha(vet,10,novoelemento); // Chamada da fun��o inserir.
	
	printf("\n\n");
	
	int vet1[10] = {10,20,30,40,50,60,70,80,90,100}; // Crian��o da lista que vai ser um dos parametros da fun��o remover.
	
	remover_elementopilha(vet1,10); // Chamada da fun��o remover.
	
}

