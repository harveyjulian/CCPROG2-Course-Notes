/*
	Problem: Write a program in C to delete an element at a desired position from an array. 
	Date: 12/25/2025
*/

#include <stdio.h>

#define MAX 100

int
main(void)
{
	int arr_size, index, position, array[MAX];
	
	printf("Enter the size of array: ");
	scanf("%d", &arr_size);
	
	/* Ask for inputs */
	for (index = 0; index < arr_size; index++)
	{
		printf("Enter element[%d]: ", index);
		scanf("%d", &array[index]);
	}
	
	/* Ask for position */
	printf("\nEnter the position where to delete: ");
	scanf("%d", &position);
	
	position -= 1;	/* Since it's 1-based */
	
	/* Left shift by one at [position] */
	for (index = position; index < arr_size - 1; index++)
	{
		array[index] = array[index + 1]; 
	}
		
	arr_size -= 1;
	
	/* Print the modified array */
	for (index = 0; index < arr_size; index++)
	{
		printf("%d ", array[index]);
	}

}
