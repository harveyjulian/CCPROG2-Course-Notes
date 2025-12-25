/*
	Goal: Write a program in C to find the second largest element in an array. 
	Date: 12/25/2025
*/

#include <stdio.h>

#define MAX 100

int
main(void)
{
	int arr_size, largest_num, second_largest_num,
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
	
	/* Initialize largest num to first element first */
	largest_num = array[0];
	
	/* Loop through the array */
	for (index = 0; index < arr_size; index++)
	{
		if (array[index] > largest_num)
		{
			second_largest_num = largest_num;
			largest_num = array[index];
		}
	}
	
	/* Print the result */
	printf("The second largest number in the array is: %d", second_largest_num);
	
	return 0;	
}
