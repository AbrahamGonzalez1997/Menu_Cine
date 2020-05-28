//
//  main.c
//  Cartelera1.2
//
//  Created by Vairon Walder on 26/05/20.
//  Copyright © 2020 Vairon Walder. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int pago(int x);
void boleto(char const *pelifin,char const *ubifin);
void peliculas(char const *pelifin);
void ubicacion(char const *ubicacion);


int main(){

    int opc,n=0,pago1, p = 0;
    char pelifin[30],ubifin[30];
    printf("\n");

    printf("-----MENU-----\n");
    printf("\n1.-Cartelera\n2.-Ubicaciones de cines\n");
    scanf("%d",&opc);

    switch (opc){
        case 1:
        peliculas(pelifin);
        n=1;
        break;
            
        case 2:
        ubicacion(ubifin);
        n=2;
        break;
        }

    if(n==1)
    {
    printf("\nEliga ahora una ubicacion\n");
    ubicacion(ubifin);
    pago1=pago(p);
    boleto(pelifin,ubifin);
    printf("\n\nSu total a pagar es de: $%d\n\n",pago1);
    
    //printf("Para la serie de: ");
    }
    else{
    printf("\nEliga ahora una pelicula\n");
    peliculas(pelifin);
    pago1=pago(p);
    boleto(pelifin,ubifin);
    printf("\n\nSu total a pagar es de: $%d\n\n",pago1);
    }

    printf("\n");
    return 0;
}

int pago(int x){
    int adul,nino,total;
    printf("\nCuantos adultos? ");
    scanf("%d",&adul);
    printf("\nCuantos niños? ");
    scanf("%d",&nino);
    adul=adul*90;
    nino=nino*60;
    total=adul+nino;

    return total;

}

void boleto(char const *pelifin,char const *ubifin){
  printf("\n ----------------------- \n");
  printf("\nLa pelicula que reservaste es: %s",pelifin);
  printf("\nEn la ubicacion de: %s",ubifin);
}

void peliculas(char const *pelifin){
    int opcion;
    printf("\nEliga ahora una pelicula\n");
    printf("\n1.-John Wick 4\n2.-Silent Hill 3\n3.-Saw 9\n4.-The thing\n");
    scanf("%d",&opcion);
        switch (opcion){
            case 1:
                strcpy(pelifin, "John Wick 4");
            break;
            case 2:
                strcpy(pelifin, "Silent Hill 3");
            break;
            case 3:
                strcpy(pelifin, "Saw 9");
            break;
            case 4:
                strcpy(pelifin, "The thing");
            break;
        }
  
}

void ubicacion(char const *ubifin){
    int opcion;
    printf("\n1.-Cinemex Lindavista\n2.-Cinemex El Rosario\n3.-Cinemex Tenayuca\n4.-Cinemex Via Vallejo\n");
         scanf("%d",&opcion);
             switch (opcion){
                           case 1:
                               strcpy(ubifin, "Cinemex Lindavista");
                           break;
                           case 2:
                               strcpy(ubifin, "Cinemex El Rosario");
                           break;
                           case 3:
                               strcpy(ubifin, "Cinemex Tenayuca");
                           break;
                           case 4:
                               strcpy(ubifin, "Cinemex Via Vallejo");
                           break;
                       }
}
