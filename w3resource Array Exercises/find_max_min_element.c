#include <stdio.h>

int
main(void)
{
	int size, max, min, elements[50], index_ctr;
	
	printf("Enter array size: ");
	scanf("%d", &size);
	
	/* Get array elements */
	for (index_ctr = 0; index_ctr < size; index_ctr++)
	{
		printf("Enter element[%d]: ", index_ctr);
		scanf("%d", &elements[index_ctr]);
	}
	
	max = min = elements[0];
	
	
	for (index_ctr = 1; index_ctr < size; index_ctr++)
	{
		/* NOTICE: Since we already initialized max and min to [0],
				   we can just start counting from [1]
		*/
		
		if (elements[index_ctr] > max)
			max = elements[index_ctr];
		
		if (elements[index_ctr] < min)
			min = elements[index_ctr];	
	}
	
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
}
