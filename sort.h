#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* the Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - The enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 * Project by Stanley Ibeneme.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - The doubly linked list node
 *
 * @n: The integer stored in the node
 * @prev: Points to previous element of the list
 * @next: Points to next element of the list
 * Project by Stanley Ibeneme
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algoritms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
