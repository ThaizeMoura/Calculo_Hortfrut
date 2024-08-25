# include <stdio.h>
#include <string.h>
//programa Hortfruti - FAM 2020

float maca (int kg_maca) {
	
	float maca1 = 4.00, maca2 = 10.00;
    
    if (kg_maca <= 5){
		return maca1 * kg_maca;
	}
	
	else {
		return maca2 * kg_maca;
	}
}

float melancia (int kg_melancia) {
	
	float melancia1 = 8.00, melancia2 = 10.00;
	
    if (kg_melancia <= 5){
		return melancia1 * kg_melancia;
	}
	
	else {
		return melancia2 * kg_melancia;
	}
}

float banana (int kg_banana){
	
	
    float banana1 = 4.00, banana2 = 7.50;
    
	if (kg_banana <= 5){
		return banana1 * kg_banana;
	}
	
	else {
		return banana2 * kg_banana;
	}
}



float morango (int kg_morango){
	
	float morango1 = 7.50, morango2 = 12.00;
	
	 if(kg_morango <=5){
    	return morango1 * kg_morango;
    } 
    
	else {
		return morango2 * kg_morango;
	}
	
}

int main(){
	
	int kg_maca, kg_melancia, kg_morango, kg_banana;
	float soma_total = 0;
	int opcao;
	
	do {
	
	printf("*****************************************");
	printf("\nMenu\n");
	printf("1 - Morango\n");
	printf("2- Banana\n");
	printf("3 - Maca\n");
	printf("4- Melancia\n");
	printf("5 - Calcular o valor total da compra\n");
	printf("6 - Cancelar compra\n");
	printf("Escolha uma apcao\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1: 
		printf("Digite o peso dos morangos\n");
		scanf("%d", &kg_morango);
		soma_total += morango(kg_morango);
		
		printf("o valor dos morangos e: %0.2f\n", morango(kg_morango));
		break;
		
		case 2:
			printf("Digite o peso das bananas: \n");
			scanf("%d", &kg_banana);
			soma_total += banana(kg_banana);
			printf("O valor das bananas e: %0.2f\n", banana(kg_banana));
			break;
			
		case 3:
		printf("Digite o peso das macas: \n");
			scanf("%d", &kg_maca);
			soma_total += maca(kg_maca);
			printf("O valor das macas e: %0.2f\n", maca(kg_maca));
			break;
		
		case 4:
			printf("digite o peso da melancia: \n");
			scanf("%d", &kg_melancia);
			soma_total += melancia(kg_melancia);
			printf("o valor da melancia e: %0.2f\n", melancia(kg_melancia));
			break;
			
		case 5:
			printf("O valor total da compra e: %0.2f\n", soma_total);
			break;
			
		case 6:
			printf("Cancelando...\n");
			break;
			
			default:
				printf("Opcao invalida\n");
				
}
 
} while(opcao != 6);
  return 0;
}
































