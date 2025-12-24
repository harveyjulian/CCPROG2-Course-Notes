/*
  Problem: Write a program in C to separate odd and even integers into separate arrays.
  Date: 12/24/2025
  Time: 15 mins
*/

#include <stdio.h>

int
main(void)
{
	int array[50], odd[50], even[50];
	int arr_size, i, odd_idx = 0, even_idx = 0;
	
	printf("Enter array size: ");
	scanf("%d", &arr_size);
	printf("\n");	

	/* Get elements of array */
	for (i = 0; i < arr_size; i++)
	{
		printf("Enter [%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	/* Separate odd and even into separate arrays */
	for (i = 0; i < arr_size; i++)
	{
		if (array[i] % 2 == 0)
			even[even_idx++] = array[i];
		else
			odd[odd_idx++] = array[i];
	}
	
	printf("\n");
	printf("Even elements: ");
	
	/* Print even elements */
	for (i = 0; i < even_idx; i++)
		printf("%d ", even[i]);
	
	printf("\n");
	printf("Odd elements: ");
	
	/* Print odd elements */
	for (i = 0; i < odd_idx; i++)
		printf("%d ", odd[i]);
	
}
