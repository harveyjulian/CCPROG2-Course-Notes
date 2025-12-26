/*
	Goal: Write a program in C to find the sum of the right diagonals of a matrix. 
	Date: 12/26/2025
*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int
main(void)
{
	int arr_size, row, col, index, sum = 0; 
	int matrix[MAX_ROWS][MAX_COLS];
	
	/* Get matrix elements */
	printf("Enter the size of square matrix: ");
	scanf("%d", &arr_size);
	
	for (row = 0; row < arr_size; row++)
	{
		for (col = 0; col < arr_size; col++)
		{
			printf("Element [%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);	
		}
	}
	
	for (index = 0; index < arr_size; index++)
	{
		sum += matrix[index][index];
	}
	
	printf("\nThe sum is: %d", sum);
	
	return 0;
}
	
