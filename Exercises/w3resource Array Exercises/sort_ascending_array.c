/*
	Problem: Write a program in C to sort elements of an array in ascending order. 
	Date: 12/24/2025
	Start time: 1:26 PM
	End time: 1:32 PM
*/

#include <stdio.h>

int
main(void)
{
	int arr_size, array[50], i, j, temp;
	
	printf("Enter array size: ");
	scanf("%d", &arr_size);
	
	/* Get all elements */
	for (i = 0; i < arr_size; i++)
	{
		printf("Enter element[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	printf("\n");
	
	/* Sort array */
	for (i = 0; i < arr_size; i++)
	{
		for (j = i + 1; j < arr_size; j++)
		{
				if (array[i] > array[j])
				{
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}		
		}	
	}
	
	printf("\n");
	printf("Sorted array: ");
	
	/* Print array */
	for (i = 0; i < arr_size; i++)
		printf("%d ", array[i]);
	
}
