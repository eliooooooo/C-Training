#include <stdio.h>
#include <stdlib.h>

void getInputs( int nb_inputs )
{

    char** inputs = malloc(nb_inputs*sizeof(char*));

    printf("Enter %d input: ", nb_inputs);
    for (size_t i = 0; i < nb_inputs; i++)
    {   
        char *pi = malloc(100 * sizeof(char));
        scanf("%s", pi);
        inputs[i] = (char*)pi;
        printf("Input: %s\n", pi);
        // printf("Adress: %p\n", inputs[i]);
    }

    puts("\n--------------\n");

    for (size_t i = 0; i < nb_inputs; i++)
    {
        char* po = inputs[i];
        printf("Value n°%ld : %s\n", i+1, po);
        free(po);
    }

    free(inputs);
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Arguments error: <nb_inputs> is missing");
        return 1;
    }
    
    int nb = atoi(argv[1]);
    getInputs(nb);
    return 0;
}