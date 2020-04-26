#include "int_dyn_array.h"
#include <stdio.h>

void test_get_fw()
{
	t_int_dyn_array array;
	t_int_dyn_array_iterator iterator;

	int_dyn_array_init(&array, 20);
	int_dyn_array_get_fw_iterator(&array, &iterator);
	int_dyn_array_release(&array);
}


void test_get_bw()
{
	t_int_dyn_array array;
	t_int_dyn_array_iterator iterator;

	int_dyn_array_init(&array, 20);
	int_dyn_array_get_fw_iterator(&array, &iterator);
	int_dyn_array_release(&array);
}

void	iterator_print_array(t_int_dyn_array_iterator *iterator)
{
	while (!int_dyn_array_iterator_at_end(iterator))
	{
		printf("%d\n", *int_dyn_array_iterator_deref(iterator));
		int_dyn_array_iterator_next(iterator);
	}
}

void test_next_deref()
{
	t_int_dyn_array array;
	t_int_dyn_array_iterator iterator;
	int cur;

	int_dyn_array_init(&array, 20);
	cur = 0;
	while (cur < 20)
	{
		int_dyn_array_set_elt(&array, cur, cur);
		cur++;
	}
	int_dyn_array_get_bw_iterator(&array, &iterator);
	iterator_print_array(&iterator);
	//int_dyn_array_get_bw_iterator(&array, &iterator);
	//iterator_print_array(&iterator);
	int_dyn_array_release(&array);
}
int main()
{
	test_next_deref();
	return (0);
}
