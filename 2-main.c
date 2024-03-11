#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("\n<<== Unsorted Array ==>>\n");
    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    printf("========================>>\n");

    printf("\n<<== Sorted Array ==>>\n");
    print_array(array, n);
    selection_sort(array, n);
    print_array(array, n);
    printf("========================>>\n");
    return (0);
}
