#include <stdio.h>
#include <stdlib.h>

	void pointer_array(int a[], int n){
		for (int i = 0; i < n; i++) {
			printf("%10d",a[i]);
		}
		printf("\n");
	}

	void print_pointer(int *p, int n) {
		for (int i = 0; i < n; i++)
		{
			printf("%10d", p[i]);
		}
		printf("\n");
	}
#define N 4
	int ma2in() {
		int array[N] = { 5, 6, 7, 8 };
		pointer_array(array, N);
		print_pointer(array, N);
		
		int* pointer = (int*)calloc(N, sizeof (int));
		pointer[0] = 5;
		pointer[1] = 6;
		pointer[2] = 7;
		pointer[3] = 8;
		
		print_pointer(pointer, N);
		pointer_array(pointer, N);
		free(pointer);


	return 0;
}