#include <stdio.h>
#include <stdlib.h>
void cambiarPorValor(int unDato);
void cambiarPorReferencia(int* pDato);
int estaEntreRangos(int superior, int inferior, int elNumero);
int dameUnEntero();

int main()
{
    int unNumero;
    int sePudo;
    sePudo = dameUnEntero("ingresa tu edad:", 100,2,&unNumero);
    if(sePudo == -1){
        printf("No se pudo cargar");
    }else{
        printf("el numero es: %d",unNumero);
    }

    //printf("se pudo: %d", sePudo);
    //printf("el numero es: %d",unNumero);

    /*int numero;
    numero = 22;
    cambiarPorValor(numero);
    printf("\n numero = %d", numero);

    cambiarPorReferencia(&numero);
    printf("\n numero = %d", numero);
    */
    return 0;
}

int estaEntreRangos(int superior, int inferior, int elNumero){

    if(elNumero < superior){
        return 0;
    }

}


int dameUnEntero(char* mensaje, int max, int cantidad, int *pNumero){

    int contador = 0;
    printf("%s",mensaje);
    scanf("%d",pNumero);

    while(*pNumero > max){
        if(contador == cantidad){
            return -1;
        }
        contador++;
        printf("%s",mensaje);
        scanf("%d",pNumero);

    }
    return 0;
}
/*
void cambiarPorValor(int unDato){
    unDato = 99;
    printf("dato por valor = %d", unDato);
}
void cambiarPorReferencia(int *pDato){
    *pDato = 99;
    printf("\n dato por referencia= %d", *pDato);
}
*/
