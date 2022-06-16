#include <stdio.h>

int main(){

int i=0, cont = 0;
float valor[10], media, soma;

for (i=0;i<10;i++){

    printf ("Digite um valor: ");
    scanf ("%f", &valor[i]);

    if (valor[i] >= 15 && valor[i] <= 20){

        cont++;

    }
}

for (i=9;i>-1;i--){

    printf ("\nValor dados: %.2f", valor[i]);
}

    printf ("\nSoma dos valores: %.2f", valor[0] + valor[1] + valor[2] + valor[3] + valor[4] + valor[5] + valor[6] + valor[7] + valor[8] + valor[9]);
    media = valor[0] + valor[1] + valor[2] + valor[3] + valor[4] + valor[5] + valor[6] + valor[7] + valor[8] + valor[9] / 10;
    printf ("\nMedia: %.2f", media);
    printf ("\nExistem %i valores entre 15 e 20", cont);
}
