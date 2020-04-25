#include "int_dyn_array.h"
#include <stdio.h>

void test_one_size(int size)
{
	t_int_dyn_array array;
	int		cur;

	printf("Test size %d\n", size);
	int_dyn_array_init(&array, size);
	cur = -1;
	while (++cur < size)
	{
		printf("cur = %d\n", cur);
		int_dyn_array_set_elt(&array, cur, cur);
	}
	cur = -1;
	while (++cur < size)
		printf("%d\n", int_dyn_array_get_elt(&array, cur));
	int_dyn_array_release(&array);
	printf("End of test size %d\n\n", size);
}

void test_size()
{
	int size;

	size = 0;
	while (size <= 20)
		test_one_size(size++);
}

void test_add_elt_outside_bounds()
{
	t_int_dyn_array array;

	int_dyn_array_init(&array, 3);
	int_dyn_array_set_elt(&array, 15, 42);
	printf("%d\n", int_dyn_array_get_elt(&array, 15));
	int_dyn_array_release(&array);
}

void test_read_elt_outside_bounds()
{
	t_int_dyn_array array;

	int_dyn_array_init(&array, 3);
	printf("%d\n", int_dyn_array_get_elt(&array, 3));
	int_dyn_array_release(&array);
}

void print_sizes(t_int_dyn_array *array)
{
	printf("fake_size = %ld\n", int_dyn_array_get_size(array));
	printf("real_size = %ld\n", ((t_chunk_dyn_array*)array)->size);
}

void test_get_size_and_shrink()
{
	t_int_dyn_array array;
	bool shrinked;
	int size;

	size = 1;
	while (size > 0)
	{
		int_dyn_array_init(&array, 1);
		printf("After initing at size 1 : \n");
		print_sizes(&array);
		int_dyn_array_set_elt(&array, 18, 42);
		printf("After setting elt at index 18 :\n");
		print_sizes(&array);
		shrinked = int_dyn_array_shrink(&array);
		printf("After shrink %s \n", (shrinked ? "succeeded" : "failed"));
		print_sizes(&array);
		int_dyn_array_release(&array);
		size--;
	}
}

void test_get_elt_addr()
{
	t_int_dyn_array array;
	int cur;
	int* ptr;

	int_dyn_array_init(&array, 10);
	cur = 0;
	while (cur < 10)
	{
		int_dyn_array_set_elt(&array, cur, cur);
		cur++;
	}
	cur = 0;
	while (cur < 10)
	{
		ptr = int_dyn_array_get_elt_addr(&array, cur);
		printf("At %p elt is %d\n", ptr, *ptr);
		cur++;
	}
	int_dyn_array_release(&array);
}
int main()
{
	test_get_elt_addr();
	return (0);
}
