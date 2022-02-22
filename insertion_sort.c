#include <stdio.h>

#define MESSY_ARRAY_SIZE 6

void sortArray(int *array, int size)
{
    int i = 0;

    for (int j = 1; j < size; j++)
    {
        int second_obs_p = array[j];

        i = j - 1;
        int first_obs_p = array[i];

        while (i >= 0 && first_obs_p > second_obs_p)
        {
            array[i + 1] = first_obs_p;
            i--;
            first_obs_p = array[i];
        }

        array[i + 1] = second_obs_p;
    }
}

void printArray(int *array, int size)
{
    for (int index = 0; index < size; index++)
    {
        printf("%d ", array[index]);
    }

    printf("\n");
}

int main()
{
    int messy_array[MESSY_ARRAY_SIZE] = {31, 41, 59, 26, 41, 58};

    printArray(messy_array, MESSY_ARRAY_SIZE);

    sortArray(messy_array, MESSY_ARRAY_SIZE);

    printArray(messy_array, MESSY_ARRAY_SIZE);

    return 0;
}
