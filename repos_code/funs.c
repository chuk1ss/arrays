#include "Header.h"

void printArray(cr x)
{
	
	for (int i = 0; i < rows; i++)
	{
		printf("( ");
		for (int j = 0; j < cols; j++)
			printf("%d ", x.array[i * cols + j]);
		printf(")\n");
	}
	printf("\n\n");
}

cr create_Arr(void) {
	int** test = NULL;
	cr mem;
	mem.r = rows;
	mem.c = cols;
	test = (int*)malloc((mem.r * mem.c) * sizeof(int));
	mem.array = test;
	
	if (mem.array != NULL) {
		printf("Memory succsessfuly created\n");
		return mem;

	}
	if (mem.array == NULL) {
		return mem;
	}

	



}

void values(cr values)
{
	for (int i = 0; i < (values.r * values.c); i++)
		values.array[i] = i* (i+2);
	printf("Array is filled\n");
}
void freeArr(int** arr)
{
	free(arr); 
}