#include <stdio.h>

 // 2 - Busca Binária.
 
// Utilizando uma busca binária, buscar elemtento em uma lista através de uma chave e retornar a posição.
 
 int busca_binaria(int vet[],int n, int chave){ // Os paramentros: vetor, tamanho do vetor e a chave.
 	
 	int inicio = 0;
 	int final = n-1;
 	int meio = 0;
 	
 	while(inicio<=final){ 
 		
 		meio = (inicio+final)/2; // Aqui cálculamos o meio da sequencia numérica.
 		
 		if(chave < vet[meio]){ // Caso a chave seja menor que o valor do meio, significa que ela está na primeira metade.
 			final = meio-1;
		 }
		 else if(chave > vet[meio]){ // Caso a chave seja maior que o valor do meio, significa que ela está na segunda metade.
		 	inicio = meio+1;
		 }
		 else{
		 	return meio; // Caso nenhum dos if´s seja atendido significa que a chave está no meio.
		 }
 		
	 }
	 return -1; //Caso a chave não exista na sequncia.
 	
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
 
 
 
