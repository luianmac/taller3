/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include "vector.h"
int main() {
	vector vectorX,vectorY,vectorZ;
	printf("Ingrese un elemento 1 de vector X: ");      
	scanf("%d",&vectorX->valor1);
	printf("Ingrese un elemento 2 de vector X: ");      
	scanf("%d",&vectorX->valor2);
	printf("Ingrese un elemento 1 de vector Y ");      
	scanf("%d",&vectorY->valor1);
	printf("Ingrese un elemento 2 de vector Y: ");      
	scanf("%d",&vectorY->valor2);

	addvec(vectorX,vectorY, vectorZ, 2);
	printf("sumando X + Y  resultado : z = [%d %d]\n", vectorZ->valor1, vectorZ->valor2);
	multvec(vectorX,vectorY, vectorZ, 2);
	printf("multiplicando X * Y  resultado : z = [%d %d]\n", vectorZ->valor1, vectorZ->valor2);
	return 0;
}
/* $end main2 */
