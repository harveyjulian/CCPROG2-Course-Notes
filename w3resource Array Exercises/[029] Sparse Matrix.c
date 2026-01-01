#include <stdio.h>

#define ROW_MAX 100
#define COL_MAX 100
#define FIFTY_PERCENT 0.5

int
main(void)
{
	int matrix[ROW_MAX][COL_MAX];
	int r, c, rows, cols;
	int zero_counter = 0;
	
	/* Get rows and cols */
	do
	{
		printf("Enter number of rows (1 - 100): ");
		scanf("%d", &rows);
		
		if (rows > ROW_MAX || rows <= 0)
			printf("Invalid input. Please try again.\n\n");
	} while (rows > ROW_MAX || rows <= 0);
	
	do
	{
		printf("Enter number of cols (1 - 100): ");
		scanf("%d", &cols);
		
		if (cols > ROW_MAX || cols <= 0)
			printf("Invalid input. Please try again.\n\n");
	} while (cols > COL_MAX || cols <= 0);
		
	putchar('\n');
	
	/* Get all elements from the user */
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
		{
			printf("Enter element[%d][%d]: ", r, c);
			scanf("%d", &matrix[r][c]);
		}
	}

	/* Count all zero elements */
	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			if (matrix[r][c] == 0)
				zero_counter++;
	
	putchar('\n');
	
	/* Check if zero elements are more than 90% */
	if (zero_counter > FIFTY_PERCENT * r * c)
		printf("The matrix is a sparse matrix.\n");
	else
		printf("The matrix is NOT a sparse matrix.\n");
	
	
	/* Display number of zeroes in the matrix */
	printf("There are %d number of zeros in the matrix.", zero_counter);
	
	return 0;
}
