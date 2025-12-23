#include <stdio.h>

int
main(void)
{
	int size, element_ctr, numbers[100], ctr2;
	int is_unique = 1;
	
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &size);
	
	printf("Input %d elements in the array:\n", size);
	
	/* Get input from the user */
	for (element_ctr = 0; element_ctr < size; element_ctr++)
	{
		printf("element - %d: ", element_ctr);
		scanf("%d", &numbers[element_ctr]);
	}
	
	for (element_ctr = 0; element_ctr < size; element_ctr++)
	{
		is_unique = 1;
		
		for (ctr2 = 0; ctr2 < size; ctr2++)
		{
			if (element_ctr != ctr2 && 
				numbers[element_ctr] == numbers[ctr2])
			{
				is_unique = 0;
			}
		}
		
		if (is_unique)
		{
			printf("%d is unique\n", numbers[element_ctr]);

		}
	}
}