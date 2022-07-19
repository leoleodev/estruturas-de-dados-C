#include <stdio.h>

 // 2 - Busca Bin�ria.
 
// Utilizando uma busca bin�ria, buscar elemtento em uma lista atrav�s de uma chave e retornar a posi��o.
 
 int busca_binaria(int vet[],int n, int chave){ // Os paramentros: vetor, tamanho do vetor e a chave.
 	
 	int inicio = 0;
 	int final = n-1;
 	int meio = 0;
 	
 	while(inicio<=final){ 
 		
 		meio = (inicio+final)/2; // Aqui c�lculamos o meio da sequencia num�rica.
 		
 		if(chave < vet[meio]){ // Caso a chave seja menor que o valor do meio, significa que ela est� na primeira metade.
 			final = meio-1;
		 }
		 else if(chave > vet[meio]){ // Caso a chave seja maior que o valor do meio, significa que ela est� na segunda metade.
		 	inicio = meio+1;
		 }
		 else{
		 	return meio; // Caso nenhum dos if�s seja atendido significa que a chave est� no meio.
		 }
 		
	 }
	 return -1; //Caso a chave n�o exista na sequncia.
 	
 }
  
 main(){
 	
 	int vet[] = {1,2,3,4,5,6,7,8,9,10};
 	int chave = 0;
 	int result = 0;
	int tamanho = sizeof(vet)/sizeof(vet[0]); // Obtem o tamanho do vetor.
	
	chave = 5;
 	
 	
 	if(result != -1){
		printf("\nA chave procurada esta na posicao %d da lista\n",result);
	}
	else{
		printf("\nA chave procurada nao existe na lista");
	}
 	
 }
 
 
 
