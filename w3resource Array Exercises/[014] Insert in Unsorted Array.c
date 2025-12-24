#include <stdio.h>

int main(void)
{
    int arr_size, insert_val, insert_pos, i;
    int array[51];  // Size + 1 for insertion
    
    printf("Input the size of array: ");
    scanf("%d", &arr_size);
    
    for (i = 0; i < arr_size; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("\nEnter the value to be inserted: ");
    scanf("%d", &insert_val);
    
    printf("\nEnter the position to insert it in (1-based): ");
    scanf("%d", &insert_pos);
    
    while (insert_pos > arr_size + 1 || insert_pos < 1)
    {
        printf("\nInvalid position! Must be between 1 and %d.\nEnter again: ", arr_size + 1);
        scanf("%d", &insert_pos);
    }
    
    printf("\nArray before: ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", array[i]);
    
    for (i = arr_size; i >= insert_pos; i--)
        array[i] = array[i - 1];
    
    array[insert_pos - 1] = insert_val;
        
    printf("\nArray after: ");
    for (i = 0; i < arr_size + 1; i++)
        printf("%d ", array[i]);
    printf("\n");
    
    return 0;
}
