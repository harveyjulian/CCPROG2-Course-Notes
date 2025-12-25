/*
	Goal: Write a program in C to find the second smallest element in an array. 
	Date: 12/25/2025
*/

#include <stdio.h>

#define MAX 100

int
main(void)
{
	int arr_size, smallest_num, second_smallest_num,
		index, array[MAX];
	
	/* Get array size */
	printf("Enter the size of array: ");
	scanf("%d", &arr_size);
	
	/* Ask user for inputs */
	for (index = 0; index < arr_size; index++)
	{
		printf("Enter element[%d]: ", index);
		scanf("%d", &array[index]);
	}
	
	/* Initialize flag-variables first */
	smallest_num = array[0];
	second_smallest_num = array[1];
	
	/* Loop through the array */
	for (index = 0; index < arr_size; index++)
	{
		if (array[index] < smallest_num)
		{
			second_smallest_num = smallest_num;
			smallest_num = array[index];
		} 
	}
	
	/* Print the result */
	printf("The second smallest number in the array is: %d", second_smallest_num);
	
	return 0;	
}
