#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node.
 *
 * @n: Integer stored in the node.
 * @prev: Pointer to the previous element of the list.
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Source File: print_list.c */
void print_list(const listint_t *list);
/* Source File: print_array.c */
void print_array(const int *array, size_t size);

/* BUBBLE SORT || Source File: 0-bubble_sort.c */
void bubble_sort(int *array, size_t size);

/* INSERTION SORT || Source File: 1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);

/* SELECTION SORT || Source File: 2-selection_sort.c */
void selection_sort(int *array, size_t size);

/* QUICK SORT || source File: 3-quick_sort.c  */
void quick_sort(int *array, size_t size);

/* SHELL SORT USING KNUTH SEQUENCE || source file: 100-shell_sort.c*/
void shell_sort(int *array, size_t size);

/* COCKTAIL SHAKER SORT || source file: 101-cocktail_sort_list.c*/
void cocktail_sort_list(listint_t **list);

/* COUNTING SORT || source file: 102-counting_sort.c */
void counting_sort(int *array, size_t size);

/* MERGE SORT || source file: 103-merge_sort.c */
void merge_sort(int *array, size_t size);

/* HEAP SORT || SOURCE FILE: 104-heap_sort.c  */
void heap_sort(int *array, size_t size);

/* RADIX SORT || SOURCE FILE: 105-radix_sort.c */
void radix_sort(int *array, size_t size);

/* BITONIC SORT || SOURCE FILE: 106-bitonic_sort.c*/
void bitonic_sort(int *array, size_t size);

void quick_sort_hoare(int *array, size_t size);

#endif
