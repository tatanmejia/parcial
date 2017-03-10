#include <stdlib.h>
#include <stdio.h>

void dato();
void impresion ();
void transpuesta ();

int fila, columna, **pmatriz;
int main(){
	dato();
	impresion();
	transpuesta ();
	free(pmatriz);
	return 0;
}

void dato(){
	printf("Ingrese la longitud de filas: ");
	scanf("%d", &fila);
	printf("Ingrese la longitud de columnas: ");
	scanf("%d", &columna);

	pmatriz=(int**)malloc(fila*sizeof(int*));
	for(int i=0; i<columna; i++){
		pmatriz[i]=(int*)malloc(columna*sizeof(int));
	}

		printf("\n\n");
		for(int f =0; f<fila; f++){
			for(int col=0; col<columna; col++){
				printf("ingrese dato para posicion (%d, %d): ", f, col);
				scanf("%d", &(*(*(pmatriz+col)+f))); }
		}

}
void impresion(){
    printf("\n Matriz ingresada es: \n");
	for(int f =0; f<fila; f++){
		for(int col=0; col<columna; col++){
			printf(" %d ",*(*(pmatriz+col)+f)); }
        printf("\n"); }
}
void transpuesta (){
    printf("\nMatriz transpuesta es: \n");
    for(int f =0; f<fila; f++){
		for(int col=0; col<columna; col++){
			printf(" %d ", *(*(pmatriz+f)+col)); }
        printf("\n"); }
}



