#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TAMA 100 

int contarConsonantes(int *contMin, int *contMayus, char frase[]);
int contarConsonantes(int *contMin, int *contMayus, char  frase[]){
    int total = 0;
    for (int i = 0; i < strlen(frase); i++)
    {
        if(tolower(frase[i]) != 'a' && tolower(frase[i]) != 'e' && tolower(frase[i]) != 'i' && tolower(frase[i]) != 'o' && tolower(frase[i]) != 'u' && frase[i] != ' '){
            if(isupper(frase[i])){
                *contMayus = *contMayus + 1;
            }else{
                *contMin = *contMin + 1;
            }
            total = total + 1;
        }
    }
    return total;
}

int main(){
    char frase[TAMA];
    int contCons=0, contMin=0, contMayus=0;
    //Apartado 1 y 2
    //char *puntFrase = frase[0];
    char *puntFrase = frase;
    printf("Ingrese una frase: \n");
    fflush(stdin);
    gets(frase);
    contCons = contarConsonantes(&contMin, &contMayus, frase);
    printf("La cantidad total de consonantes es: %d \n", contCons);
    printf("La cantidad total de consonantes minusculas: %d \n", contMin);
    printf("La cantidad total de consonantes mayusculas: %d \n", contMayus);

    printf("Apartado 3: \n");
    printf("Direccion del puntero: %p \n", puntFrase);
    printf("Direccion de la primer componente del arreglo: %p \n", frase);

    printf("Apartado 4: \n");
    printf("Contenido 4ta celda arreglo: %c \n", frase[3]);
    //desplazo el puntero 3 lugares
    //puntFrase = puntFrase + 3;
    printf("Lo mismo pero con notacion de puntero: %c \n", *(puntFrase+3));

    printf("Apartado 5: \n");
    printf("Direccion referenciada por punt+5: %p \n", (puntFrase+5));
    printf("Valor almancenado en %p: %c \n", (puntFrase+5), *(puntFrase+5));
    printf("Direccion del arreglo %p, direccion del puntero %p", frase, puntFrase);
    //El puntero siempre apunto al primer elemnto asi que no se movio, segun yo.

    printf("Apartado 6: \n");
    


    return 0;
}