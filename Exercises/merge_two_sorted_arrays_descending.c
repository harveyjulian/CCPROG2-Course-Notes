#include <stdio.h>

int
main(void)
{
	int size1, size2, index1, index2, index3;
	int curr_index, next_index, temp, iteration = 0, is_sorted = 0;
	int array1[50], array2[50], merged[100];
	
	printf("Size of array 1: ");
	scanf("%d", &size1);
	
	for (index1 = 0; index1 < size1; index1++)
	{
		printf("Enter element for array1[%d]", index1);
		scanf("%d", &array1[index1]);
	}
	
	printf("\n");
	
	printf("Size of array 2: ");
	scanf("%d", &size2);
	
	for (index2 = 0; index2 < size2; index2++)
	{
		printf("Enter element for array2[%d]", index2);
		scanf("%d", &array2[index2]);
	}
	
	/* Merge arrays */
	for (index3 = 0; index3 < size1 + size2; index3++)
	{
		if (index3 < size1)
			merged[index3] = array1[index3];
		else
			merged[index3] = array2[index3 - (size1)];
	}

	/* Sort merged */
	while (is_sorted == 0)
	{
		for (curr_index = 0; curr_index < size1 + size2; curr_index++)
		{
			for (next_index = curr_index + 1; next_index < size1 + size2; next_index++)
			{
				if (merged[curr_index] < merged[next_index])
				{
					temp = merged[curr_index];
					merged[curr_index] = merged[next_index];
					merged[next_index] = temp;
					
				}
			}
		}
		
		iteration++;
		
		if (iteration == size1 - 1)
			is_sorted = 1;
	}
	
	printf("\nThe merged array in descending order is: ");
	
	for (int i = 0; i < size1 + size2; i++)
		printf("%d ", merged[i]);
}