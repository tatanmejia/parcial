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



    int cantd, prod_mayor,prod_menor;
    int menor=0,mayor=0;

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
    scanf("%s",cant_producto[i],provee[i].product[i]);
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

    prod_menor=provee[0].product[0].precio_uni;
    prod_mayor=provee[0].product[0].precio_uni;

    for(int i=0;i<cantd;i++){
        if(prod_mayor<=provee[i].product[i].precio_uni);
            {
                prod_mayor=provee[i].product[i].precio_uni;

                mayor=i;

             }

      }

      for(int i=0;i<cantd;i++){

        if(prod_menor>=provee[i].product[i].precio_uni)
        {
            prod_menor=provee[i].product[i].precio_uni;



        menor=i; }

      }


    printf("El proveedor mas caro es:\n ");
    printf("Nombre: %s\n",provee[mayor].nombre);
    printf("Precio unitario es: %d\n",provee[mayor].product[mayor].precio_uni);
    printf("\n\n ");

    printf("El proveedor mas barato es; ");
    printf("Nombre: %s\n",provee[menor].nombre);
    printf("Precio unitario es: %d\n",provee[menor].product[menor].precio_uni);
    printf("\n\n ");


    printf("Listado de productos ingresados es: \n");
    for(int i=0;i<cantd;i++){


        printf("%s\n",cant_producto[i]);
    }

return 0;
}
