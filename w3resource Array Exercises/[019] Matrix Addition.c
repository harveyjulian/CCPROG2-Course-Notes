/*
	Goal: Write a program in C for a 2D array of size 3x3 and print the matrix. 
	Date: 12/25/2025
*/

#include <stdio.h>

#define MAX_ROWS 2
#define MAX_COLS 2

int
main(void)
{
	int row, col;
	int matrix1[MAX_ROWS][MAX_COLS], 
		matrix2[MAX_ROWS][MAX_COLS],
		matrix3[MAX_ROWS][MAX_COLS];
	
	/* Ask inputs for matrix 1 */
	printf("Input elements in matrix1:\n");
	for(row = 0; row < MAX_ROWS; row++)
	{
		for (col = 0; col < MAX_COLS; col++)
		{
			printf("Element [%d][%d]: ", row, col);
			scanf("%d", &matrix1[row][col]);
		}
	}
	
	/* Ask inputs for matrix 2 */
	printf("\nInput elements in matrix 2:\n");
	for(row = 0; row < MAX_ROWS; row++)
	{
		for (col = 0; col < MAX_COLS; col++)
		{
			printf("Element [%d][%d]: ", row, col);
			scanf("%2d", &matrix2[row][col]);
		}
	}
	
	/* Print matrix1 */
	printf("\nThe first matrix is:\n");
	for (row = 0; row < MAX_ROWS; row++)
	{
		for(col = 0; col < MAX_COLS; col++)
		{
			printf("%2d ", matrix1[row][col]);
		}
		
		printf("\n");
	}
	
	/* Print matrix2 */
	printf("\nThe second matrix is:\n");
	for (row = 0; row < MAX_ROWS; row++)
	{
		for(col = 0; col < MAX_COLS; col++)
		{
			printf("%2d ", matrix2[row][col]);
		}
		
		printf("\n");
	}
	
	/* Add two matrices */
	for (row = 0; row < MAX_ROWS; row++)
	{
		for(col = 0; col < MAX_COLS; col++)
		{
			matrix3[row][col] = matrix1[row][col] + matrix2[row][col];
		}
	}
	
	/* Print results */
	printf("\nThe resulting matrix is:\n");
	for (row = 0; row < MAX_ROWS; row++)
	{
		for(col = 0; col < MAX_COLS; col++)
		{
			printf("%2d ", matrix3[row][col]);
		}
		
		printf("\n");
	}
}
