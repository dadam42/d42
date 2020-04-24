#include "array_collection.h"
#include "array_stack.h"

void	autonomous_init()
{
	t_array_collection collection;
	t_array_collection_initer initer;

	initer.removed = 0;
	initer.rtag = 0;
	array_collection_init(&collection, &initer);
	array_collection_release(&collection);
}


int main()
{
	t_array_collection collection;
	t_array_collection_initer initer;
	t_array_stack	array_stack;
	t_stack			stack;

	array_stack_init(&array_stack);
	array_stack_init_stack(&array_stack, &stack);
	initer.removed = &stack;
	initer.rtag = 0;
	array_collection_init(&collection, &initer);
	array_collection_release(&collection);
}
