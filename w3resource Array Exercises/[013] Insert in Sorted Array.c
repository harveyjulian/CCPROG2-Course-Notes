/*
	Write a program in C to insert the values in the array (sorted list). 
	Date: 12/24/2025
*/

#include <stdio.h>

int
main(void)
{
	int arr_size, insert_val, array[100], i;
	
	printf("Enter array size: ");
	scanf("%d", &arr_size);
	
	printf("\nEnter elements in ascending order:\n");
	
	for (i = 0; i < arr_size; i++)
	{
		printf("Enter element[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\nEnter value to insert: ");
	scanf("%d", &insert_val);
	
	printf("\n");
	
	printf("Array before insertion: ");
	for (i = 0; i < arr_size; i++)
		printf("%d ", array[i]);
	
	for (i = arr_size; i >= 0 && insert_val < array[i - 1]; i--)
		array[i] = array[i - 1];
	
	array[i] = insert_val;
	
	printf("\nArray after insertion: ");
	for (i = 0; i < arr_size + 1; i++)
		printf("%d ", array[i]);
}
