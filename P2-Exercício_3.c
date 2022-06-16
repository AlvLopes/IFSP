#include <stdio.h>
#include <stdlib.h>


int main(){

char palavra[100];
int i, tam=0, vogal=0, vogalA=0, vogalE=0, vogalI=0, vogalO=0, vogalU=0;

    printf("Digite qualquer palavra ou frase: ");
    scanf("%[^99\n]", &palavra[i]);
    /*setbuf(stdin, NULL);*/

i=0;

while (palavra[i] != '\0'){

    i++;
    tam++;

}

for(i=0;i<tam;i++){
 if(palavra[i] == 'a' || palavra[i] == 'A'){

        vogalA++;

    }
    if(palavra[i] == 'e' || palavra[i] == 'E'){

        vogalE++;

    }
    if(palavra[i] == 'i' || palavra[i] == 'I'){

        vogalI++;

    }
    if(palavra[i] == 'o' || palavra[i] == 'O'){

        vogalO++;

    }
    if(palavra[i] == 'u' || palavra[i] == 'U'){

        vogalU++;

    }
}
    vogal = vogalA + vogalE + vogalI + vogalO + vogalU;

    printf("\nContem %i carecteres", tam);
    printf("\nContem %i vogais", vogal);
    printf("\nA vogal A apareceu %i vez(es)", vogalA);
    printf("\nA vogal E apareceu %i vez(es)", vogalE);
    printf("\nA vogal I apareceu %i vez(es)", vogalI);
    printf("\nA vogal O apareceu %i vez(es)", vogalO);
    printf("\nA vogal U apareceu %i vez(es)\n", vogalU);


for (tam=0;tam<4;tam++){

    printf("%c", palavra[tam]);

}
return 0;
}


