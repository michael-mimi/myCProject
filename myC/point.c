#include<stdio.h>

#define SIZE 5

int main(void) {

	int a[SIZE] = {1,1,1,1,1};
	int* p;
	printf("Enter %d numbers: ", SIZE);
	for (p = a; p < a + SIZE; p++)
		scanf("%d", p);

	printf("Reverse array: ");
	for (p = a + SIZE - 1; p >= a; p--)
		printf("%d ", *p);
	printf("\n");

	return 0;
}