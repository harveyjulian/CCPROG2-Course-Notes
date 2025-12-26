/*
	Goal: Write a program in C to find the transpose of a given matrix. 
	Date: 12/26/2025
*/

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

void printMatrix(int m[][MAX_COLS], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


int
main(void)
{
	int rows, cols, curr_row, curr_col;
	int matrix[MAX_ROWS][MAX_COLS], swapped[MAX_ROWS][MAX_COLS];

	printf("Input the rows and columns of the matrix: ");
	scanf("%d %d", &rows, &cols);

  /* Get elements from user */
	for (curr_row = 0; curr_row < rows; curr_row++)
	{
		for (curr_col = 0; curr_col < cols; curr_col++)
		{
	
			printf("Element[%d][%d]: ", curr_row, curr_col);
			scanf("%d", &matrix[curr_row][curr_col]);
		}
	}

  /* Perform swapping */
	for (curr_row = 0; curr_row < cols; curr_row++)
	{
	    for (curr_col = 0; curr_col < rows; curr_col++)
	    {
	    	swapped[curr_row][curr_col] = matrix[curr_col][curr_row];
	    }
	}

	printMatrix(swapped, cols, rows);    

}
