/*
	Goal: Write a program in C to find the sum of rows and columns
	Date: 12/26/2025
*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int
main(void)
{
	int arr_size, row, col, index;
	int matrix[MAX_ROWS][MAX_COLS],
		col_sum[MAX_COLS] = {0}, 
		row_sum[MAX_ROWS] = {0};
	
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
	
	for (row = 0; row < arr_size; row++)
	{	
		for (col = 0; col < arr_size; col++)
		{
			printf("%4d ", matrix[row][col]);
			
			/* Add each element per row and column */
			row_sum[row] += matrix[row][col];
			col_sum[col] += matrix[row][col];
		}	
		
		/* Print row sums after each row */
		printf("%4d", row_sum[row]);
		printf("\n");
	}
	
	/* Print column sums */
	for (col = 0; col < arr_size; col++)
		printf("%4d ", col_sum[col]);
	
	return 0;
}
	
