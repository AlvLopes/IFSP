#include <stdio.h>

int main (){

int i = 0, j = 0;
float notas[10][3], maiorNota[3], menoresNotas[3];

for (i=0;i<10;i++){

    for(j=0;j<3;j++){

        printf("\nDigite sua nota: ");
        scanf("%f", &notas[i][j]);

    if(i == 0 || maiorNota[0] < notas[i][0]){
            maiorNota[0] = notas[i][0];
        }

        if(i == 0 || maiorNota[1] < notas[i][1]){

            maiorNota[1] = notas[i][1];

        }

        if(i == 0 || maiorNota[2] < notas[i][2]){
            maiorNota[2] = notas[i][2];
        }

        if(notas[i][0] < notas[i][1] && notas[i][0] < notas[i][2]){

            menoresNotas[0]++;

        }
        else if(notas[i][1] < notas[i][0] && notas[i][1] < notas[i][2]){

            menoresNotas[1]++;

        }
        else if(notas[i][2] < notas[i][0] && notas[i][2] < notas[i][1]){

            menoresNotas[2]++;

        }

    }

}

   printf("\n%.0f Alunos tiraram a pior nota na P1", menoresNotas[0]);
   printf("\n%.0f Alunos tiraram a pior nota na P2", menoresNotas[1]);
   printf("\n%.0f Alunos tiraram a pior nota na P3", menoresNotas[2]);
   printf("\n As maiores notas nas P1, P2 e P3, respectivamente foram: %.1f, %.1f, %.1f", maiorNota[0], maiorNota[1], maiorNota[2]);

return 0;
}
