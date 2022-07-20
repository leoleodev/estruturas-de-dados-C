#include <stdio.h>
#include <stdlib.h>

// 6 - Implementar opera��es inserir e excluir elemnto em uma Filha.

void operacao_Fila(int vet[],int n,int novoelemento){
	
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
			
		// Remo��o do elemento da Fila;
			
		int i=0;
	
		if(n>0){ // Verifica��o para saber se a sequancia est� vazia.
		
								 
				for(i=0;i<n;i++){
					
					vet[i] = vet[i+1]; 
									   
				}					   
				for(i=0;i<n-1;i++){
					printf("%d ",vet[i]); 
				}
				exit(0); // Interrimpimento da execu��o.
			
		}
		else{
			return printf("Sequencia Vazia"); // Caso a sequencia esteja vazia.
		}
			
					
	}
	else{                       
		printf("\nOverflow\n"); // Lista cheia e n�o pode receber mais valores. 
	}	
}


main(){
	
	int vet[10] = {10,20,30,40,50,60,70,80,90}; // cria��o da lista que vai ser um dos parametros da fun��o inseir.
	int novoelemento = 500;        // Elemento a ser inserido.
	
	operacao_Fila(vet,10,novoelemento); // Chamada da fun��o.
	
}

