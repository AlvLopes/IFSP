#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {

		int pontoX;
		int pontoY;

	}ponto;

int main() {

	float distancia;

	printf("\nDigite o ponto x: ");
	scanf("%d", &ponto.pontoX);
	printf("Digite o ponto y: ");
	scanf("%d", &ponto.pontoY);

	distancia = sqrt(pow((ponto.pontoX - 0), 2) + pow((ponto.pontoY - 0), 2));

	printf("\nDistancia entre o ponto e a origem(0, 0): %.2f.\n\n", distancia);

	return 0;
}
