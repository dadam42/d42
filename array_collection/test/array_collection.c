#include "array_collection.h"

int main()
{
	t_array_collection collection;
	t_array_collection_initer initer;

	initer.removed = 0;
	initer.rtag = 0;
	array_collection_init(&collection, &initer);
	array_collection_release(&collection);
}
