#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int   matricula;
	float nota1, nota2, nota3;
	char  nome[30];
}Aluno;
int main()
{

  float somamedia = 0, media = 0, maiormedia=0;
  int a = 0, i = 0, nAlunos = 0;

  printf ("Digite o numero total de alunos nessa disciplina: ");
  scanf ("%d", &nAlunos);
  setbuf(stdin, NULL);
  Aluno aluno[nAlunos];

  for (i=0;i<nAlunos; i++){

    printf("\nDigite o nome do aluno: ");
    scanf ("%s", aluno[i].nome);

    printf("Digite o número da matrícula de %s: ", aluno[i].nome);
    scanf ("%d",&aluno[i].matricula);

    printf("Digite a nota na P1: ");
    scanf ("%f",&aluno[i].nota1);

    printf("Digite a nota na P2: ");
    scanf ("%f",&aluno[i].nota2);


    printf("Digite a nota na P3: ");
    scanf ("%f",&aluno[i].nota3); printf("\n\n");


    somamedia = aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 ;

  }


    media = somamedia/3;

    if(maiormedia < media)
    {
      maiormedia = media;
    }

  printf("A maior media foi de %.2f, do aluno %s, matricula de numero %d, o qual tirou %.2f na P1, %.2f na P2 e %.2f na P3 \n", maiormedia, aluno[a].nome, aluno[a].matricula, aluno[a].nota1, aluno[a].nota2, aluno[a].nota3);

  return 0;
}
