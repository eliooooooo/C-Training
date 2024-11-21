#include <stdio.h>
#include <stdlib.h>

int* sort(int* array, int array_length)
{
    int sortedArray[10];
    int sorted_length = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("value %ld: %d\n", i+1, array[i]);
        if (sorted_length != 0)
        {
            for (size_t j = 0; j < sorted_length; j++)
            {
                if (array[i] < sortedArray[j])
                {
                    int tmp_nb = sortedArray[j];
                    sortedArray[j] = array[i];
                    for (size_t k = j; k < sorted_length; k++)
                    {
                        int tmp_sorted_nb = sortedArray[k+1];
                        sortedArray[k+1] = sortedArray[k];
                    }
                }
                
            }
            
        }
        else 
        {
            sortedArray[1] = array[i];
        }
        
    }

    return sortedArray;
}

int main()
{
    int numArray[10] = {9, 6, 3, 4, 2, 3, 9, 3, 0, 7};

    int* sortResult = sort(numArray, 10);  
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d", sortResult[i]);
    }
    

    return 0;
}