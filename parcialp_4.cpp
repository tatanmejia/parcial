#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void mult_matriz();
void imprimir_datos();

int filas, columnas, **p_matriz1,**p_matriz2,**p_matriz_mult;

int main(){
	pedir_datos();
	mult_matriz();
	imprimir_datos();
	free(p_matriz1);
	free(p_matriz2);
	free(p_matriz_mult);
	printf("\n\n");
	system("pause");
	return 0;
}

void pedir_datos(){

	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &filas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &columnas);

	p_matriz1 = (int **)malloc(filas * sizeof(int *));
	for(int x = 0; x < columnas; x++){
		p_matriz1[x] = (int *)malloc(columnas * sizeof(int ));
	}

    for(int a=0; a<filas; a++){
        for(int b=0; b<columnas; b++){
            printf("\nIngrese dato para posicion [%d,%d]: ", a, b);
            scanf("%d", &(*(*(p_matriz1+b)+a)));
        }
    }

	p_matriz2 = (int **)malloc(filas * sizeof(int *));
	for(int y=0; y<columnas; y++){
		p_matriz2[y] = (int *)malloc(columnas * sizeof(int ));
	}

    for(int c = 0; c < filas; c++){
        for(int d = 0; d < columnas; d++){
            printf("\nIngrese dato para posicion [%d,%d]: ", d, c);
            scanf("%d", &(*(*(p_matriz2+d)+c)));
        }
    }
}

void mult_matriz(){

	p_matriz_mult = (int **)malloc(filas * sizeof(int *));
	for(int i=0; i<columnas; i++){
		p_matriz_mult[i] = (int *)malloc(columnas * sizeof(int ));
	}

    for(int a=0; a<filas; a++){
        for(int b=0; b<columnas; b++){
            (*(*(p_matriz_mult+b)+a))=0;
            for(int c=0;c<columnas;c++){
               (*(*(p_matriz_mult+b)+a))=(*(*(p_matriz_mult+b)+a)) + ((*(*(p_matriz1+a)+c)) * (*(*(p_matriz2+c)+b)));
            }
        }
    }
}

void imprimir_datos(){

	printf("La Matriz 1 ingresada es: \n\n");

	for(int f = 0; f < filas; f += 1){
		for(int c = 0; c < columnas; c++){
			printf(" %d ",*(*(p_matriz1+c)+f));
		}printf("\n");
	}

	printf("La Matriz 2 ingresada es: \n\n");

	for(int f = 0; f < filas; f += 1){
		for(int c = 0; c < columnas; c++){
			printf(" %d ",*(*(p_matriz2+c)+f));
		}printf("\n");
	}

	printf("\nLa Matriz resultante es: \n\n");

    for(int f = 0; f < filas; f += 1){
		for(int c = 0; c < columnas; c++){
			printf(" %d ",*(*(p_matriz_mult+f)+c));
		}printf("\n");
	}
}
