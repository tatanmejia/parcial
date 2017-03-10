#include <stdio.h>
#include <stdlib.h>

void pedir_datos();
void mult_matriz();
void imprimir_datos();

int nFilas, nColumnas, **p_matriz1,**p_matriz2,**p_matriz_mult;

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

	printf("\t\tTAMANO DE MATRIZ \n");
	printf("\nIngrese Cantidad de Filas: ");
	scanf("%d", &nFilas);

	printf("\nIngrese Cantidad de Columnas: ");
	scanf("%d", &nColumnas);

	p_matriz1 = (int **)malloc(nFilas * sizeof(int *));
	for(int x = 0; x < nColumnas; x++){
		p_matriz1[x] = (int *)malloc(nColumnas * sizeof(int ));
	}
    printf("\n**********************************************\n");
    printf("\t\t\nLLENADO DE MATRIZ 1\n");
    for(int a=0; a<nFilas; a++){
        for(int b=0; b<nColumnas; b++){
            printf("\nIngrese dato para posicion [%d,%d]: ", a, b);
            scanf("%d", &(*(*(p_matriz1+b)+a)));
        }
    }

	p_matriz2 = (int **)malloc(nFilas * sizeof(int *));
	for(int y=0; y<nColumnas; y++){
		p_matriz2[y] = (int *)malloc(nColumnas * sizeof(int ));
	}

    printf("\n**********************************************\n");
    printf("\t\t\nLLENADO DE MATRIZ 2\n");
    for(int c = 0; c < nFilas; c++){
        for(int d = 0; d < nColumnas; d++){
            printf("\nIngrese dato para posicion [%d,%d]: ", d, c);
            scanf("%d", &(*(*(p_matriz2+d)+c)));
        }
    }
}

void mult_matriz(){

	p_matriz_mult = (int **)malloc(nFilas * sizeof(int *));
	for(int i=0; i<nColumnas; i++){
		p_matriz_mult[i] = (int *)malloc(nColumnas * sizeof(int ));
	}

    for(int a=0; a<nFilas; a++){
        for(int b=0; b<nColumnas; b++){
            (*(*(p_matriz_mult+b)+a))=0;
            for(int c=0;c<nColumnas;c++){
                (*(*(p_matriz_mult+b)+a))=(*(*(p_matriz_mult+b)+a)) + ((*(*(p_matriz1+a)+c)) * (*(*(p_matriz2+c)+b)));
            }
        }
    }
}

void imprimir_datos(){

    printf("\n**********************************************\n");
    printf("\t\t\nMATRIZ 1\n");
	printf("\nLa Matriz 1 ingresada fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz1+c)+f));
		}printf("\n");
	}

    printf("\n**********************************************\n");
    printf("\t\t\nMATRIZ 2\n");
	printf("\nLa Matriz 2 ingresada fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz2+c)+f));
		}printf("\n");
	}

    printf("\n**********************************************\n");
    printf("\t\t\nMOSTRAR RESULTADO DE MATRIZ MULTIPLICADA\n");
	printf("\nLa Matriz resultante fue: \n\n");

	for(int f = 0; f < nFilas; f += 1){
		for(int c = 0; c < nColumnas; c++){
			printf(" %d ",*(*(p_matriz_mult+f)+c));
		}printf("\n");
	}
}
