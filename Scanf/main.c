#include <stdio.h>
#include <stdlib.h>

#define nbInputs 5

void getInputs()
{

    void* inputs[nbInputs];
    int len_inputs = nbInputs;

    printf("Enter %d input: ", nbInputs);
    for (size_t i = 0; i < nbInputs; i++)
    {   
        char *pi = malloc(100 * sizeof(char));
        scanf("%s", pi);
        inputs[i] = (void*)pi;
        printf("Input: %s\n", pi);
        // printf("Adress: %p\n", inputs[i]);
    }

    puts("\n--------------\n");

    for (size_t i = 0; i < len_inputs; i++)
    {
        char* po = inputs[i];
        printf("Value n°%ld : %s\n", i+1, po);
        free(po);
    }
}

int main()
{
    getInputs();
    return 0;
}