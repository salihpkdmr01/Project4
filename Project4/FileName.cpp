#include <stdio.h>
#include <stdlib.h>
int ma1in() {

	int n= 10;
	
	int *p= (int*)malloc(sizeof(int) *n);
	p[0]=1;
	p[9]=20;
	printf("birinci %d \n ikinci %d", p[0], p[9]);

	free(p);

	return 0;
}