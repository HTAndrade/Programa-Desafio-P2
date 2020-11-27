#include<stdio.h>
#include <locale.h>

int vet[3], TipoTriangulo();

int main(){	

setlocale(LC_ALL, "Portuguese");

int veri=0, ld1,ld2,ld3;

    printf("============ Desafio P2 - Algoritmos e Lógica de Programação ============\n");
    printf("Este programa irá retornar com o tipo do triangulo, após a coleta de\ntrês números.");
    printf("\nObs.: Garanta que nenhum deles possa ser maior que a soma dos outros dois.\n\n");

    do{
	    veri=0;
	    int cont=0;
	    for(cont=0; cont<3; cont++){
		    printf("Digite o %i° lado \n",cont+1);
		    scanf("%i",&vet[cont]);
	    }
	
	    if((vet[0]< vet[1] + vet[2]) && (vet[1]< vet[2]+vet[0]) && (vet[2]< vet[0]+vet[1]) ){
		TipoTriangulo();
				
	    }else{
		    printf("\nNão formam um triangulo\n");
		    printf("Números invalidos. Garanta que nenhum deles pode ser maior que a soma dos outros dois.\n");		
		    veri=1;
	    }
	
    } while(veri>0);

}

int TipoTriangulo(){
	
	if((vet[0]!=vet[1])&&(vet[0]!=vet[2])&&(vet[1]!=vet[2])){
		printf("Triangulo ESCALENO");
	}else if(vet[0]==vet[1] && vet[1]==vet[2]){
		printf("Triangulo EQUILATERO");
	}else {
		printf("Trinagulo ISOSCELES");
	}
    return 0;
}