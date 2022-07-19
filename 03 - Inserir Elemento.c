#include <stdio.h>

// 3 - Insirir Elemento.

// Dado um vetor com 5 posi��es o programa ir� inserir um novo valor em uma nova posi��o.
// Ao adicionar este novo elemento o programa se encager� ordenar a lista de forma que,
// este novo elemento fique na posi��o correta em ordem crescente.

void inserir_elemento(int vet[],int n,int elem){ 

	int i=0; 
	
		vet[n] = elem; // Inserindo o novo elemento na lista.
		int aux = 0;
		int x = 0;
		
		for(i=0;i<=n;i++){         // J� com o novo elemento inserido, ordenaremos toda a lista de forma crescente.
			for(x=i+1;x<=n;x++){   
				if(vet[i]>vet[x]){
					aux = vet[i];
					vet[i] = vet[x];
					vet[x] = aux;
				}
			}
		}
			
		for(i=0;i<=n;i++){		   // Inpress�o do vetor.
			printf("%d ",vet[i]); 
		}	
}

main(){
	
	int vet[] = {10,20,30,40,50}; 
	int elem = 100; // Elemeto a ser inserido;
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	inserir_elemento(vet,tamanho,elem); 
}




