#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble sort algorithm
 * @array: array to be printed
 * @size: number of elements in @array
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
    size_t i;
    size_t j;
    int temp;

    for (i = 0; i < size; i++)
    {
            for (j = 0; j < size-1; j++)
            {
                if (array[j] > array[j + 1])
                {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    print_array(array, size);
                }
                else
                {
                    continue;
                }
            }
    }
}