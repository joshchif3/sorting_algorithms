#include "sort.h"

/**
 * bubble_sort - the function that sorts using bubble
 * @array : the array
 * @size : the size of the array
 */


void bubble_sort(int *array, size_t size)
{
size_t i, index, tmp = 0;
for (int a = 0; a < size; a++)
{
for (int b = 1; b < size; b++)
{
if (array[b] < array[b + 1])
{
tmp = array[b];
array[b] = array[b + 1];
array[b + 1] = tmp;


}
}

}

}
