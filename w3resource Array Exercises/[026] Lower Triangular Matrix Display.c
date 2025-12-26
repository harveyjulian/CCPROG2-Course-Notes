/*
	Goal: Write a program in C to print or display the lower triangular of a given matrix. 
	Date: 12/26/2025
*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int
main(void)
{
	int arr_size, row, col, index;
	int matrix[MAX_ROWS][MAX_COLS];
	
	/* Get array size */
	printf("Enter the size of square matrix: ");
	scanf("%d", &arr_size);
	
	/* Get matrix elements */
	for (row = 0; row < arr_size; row++)
	{
		for (col = 0; col < arr_size; col++)
		{
			printf("Element [%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);	
		}
	}
	
	/* Replace elements in the lower triangle with 0 */
	for (row = 0; row < arr_size; row++)
	{
		for (col = 0; col < arr_size; col++)
		{
			if (col < row)		/* Below main diagonal */
				printf("%d ", 0);
			else
				printf("%d ", matrix[row][col]);	
		}
		
		printf("\n");
	}
	
	return 0;
}
	
