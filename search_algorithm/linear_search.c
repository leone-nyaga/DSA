#include "main.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located,
 *         or -1 if the value is not present or if array is NULL.
 */
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1; // Return -1 if array is NULL
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]); // Print the checked value
        if (array[i] == value) {
            return i; // Return index if value is found
        }
    }

    return -1; // Return -1 if value is not found
}
