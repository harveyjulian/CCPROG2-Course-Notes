/*
	Goal: Write a program in C to find the sum of the left diagonals of a matrix. 
	Date: 12/26/2025
*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int
main(void)
{
	int arr_size, row, col, sum = 0; 
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
	
	for (row = 0; row < arr_size; row++)
	{
		sum += matrix[row][arr_size - 1 - row];		/* Column starts from the arr_size and 
													   decreases by 1 as row increases by 1 */
	}
	
	printf("\nThe sum is: %d", sum);
	
	return 0;
}
	
