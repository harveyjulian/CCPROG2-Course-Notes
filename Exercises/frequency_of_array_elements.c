#include <stdio.h>

/*
	Challenge: Write a program in C to count the frequency of each element of an array.
	Date: 12/24/2025
	Time: 1h
*/

int
main(void)
{
	int size, index_ctr, next_elem, counter;
	int elements[100];
	int counted[100] = {0};
	
	printf("Enter size of array (0 - 100): ");
	scanf("%d", &size);

	printf("\n");
	
	/* Get elements of array */
	for (index_ctr = 0; index_ctr < size; index_ctr++)
	{
		printf("Enter element[%d]: ", index_ctr);
		scanf("%d", &elements[index_ctr]);
	}
	
	/* Loop through the array */
	for (index_ctr = 0; index_ctr < size; index_ctr++)
	{
		counter = 1;
		
		/* Check if it's counted already */
		if (!counted[index_ctr])
		{
			/* If not, count the frequency */
			for (next_elem = index_ctr + 1; next_elem < size; next_elem++)
				if (elements[index_ctr] == elements[next_elem])
				{
					counter++;
					counted[next_elem] = 1;		/* Mark element as counted */
				}
			
			printf("%d appeared %d times\n", elements[index_ctr], counter);
		}
	}
	
}