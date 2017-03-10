#include <stdio.h>
#include <stdlib.h>




struct productos{
    int cant_vendida;
    int precio_uni;
    int importe;


};

struct proveedores{

    char nombre[30];
    int telefono;
    char direccion[30];
    char empresa[15];
    productos product[50];

};







int main(){



    int cantd;

    printf("Ingrese la cantidad de proveedores a registar\n");
    scanf("%d",&cantd);

    proveedores provee[cantd];
    char cant_producto[cantd][10];
    system("cls");

    for(int i=0;i<cantd;i++){
    printf("Ingrese nombre de proveedor %d:\n" ,i+1);
    scanf("%s",provee[i].nombre );
    printf("Ingrese telefono :\n");
    scanf("%d",&provee[i].telefono );
    printf("Ingrese nombre de empresa :\n");
    scanf("%s",provee[i].empresa );
    printf("Ingrese direccion :\n");
    scanf("%s",provee[i].direccion );

    printf("Ingrese nombre del producto:\n");
    scanf("%s",cant_producto);
    printf("Ingrese valor unitario :\n");
    scanf("%d",&provee[i].product[i].precio_uni);
    printf("Ingrese cantidad vendida :\n");
    scanf("%d",&provee[i].product[i].cant_vendida);

    provee[i].product[i].importe=((provee[i].product[i].precio_uni)*(provee[i].product[i].cant_vendida));

    }

    for(int i=0;i<cantd;i++){

        printf("Nombre: %s\n",provee[i].nombre);
        printf("Telefono: %d\n",provee[i].telefono);
        printf("Nombre de empresa: %s\n", provee[i].empresa);
        printf("Direccion: %s\n", provee[i].direccion);
        printf("Nombre del producto: %s\n", cant_producto[i]);
        printf("Valor unitario: %d\n", provee[i].product[i].precio_uni);
        printf("Cantidad vendida %d\n", provee[i].product[i].cant_vendida);

    }

















return 0;
}
