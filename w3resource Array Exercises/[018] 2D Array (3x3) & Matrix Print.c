/*
	Goal: Write a program in C for a 2D array of size 3x3 and print the matrix. 
	Date: 12/25/2025
*/
#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 3

int
main(void)
{
	int row, col, matrix[MAX_ROWS][MAX_COLS];
	
	/* Ask for inputs */
	printf("Input elements in the matrix:\n");
	for(row = 0; row < MAX_ROWS; row++)
	{
		for (col = 0; col < MAX_COLS; col++)
		{
			printf("Element [%d][%d]: ", row, col);
			scanf("%d", &matrix[row][col]);
		}
	}
	
	/* Print matrix */
	printf("\nThe matrix is:\n");
	for (row = 0; row < MAX_ROWS; row++)
	{
		for(col = 0; col < MAX_COLS; col++)
		{
			printf("%d ", matrix[row][col]);
		}
		
		printf("\n");
	}
}
