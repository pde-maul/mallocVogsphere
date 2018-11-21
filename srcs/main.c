#include <string.h>
#include "../includes/malloc.h"
#include <stdlib.h>

# define MAX_LENGTH 150
# define MAX_ALLOC 4096

int main(void)
{
	void *array[MAX_ALLOC];

	for (size_t len = 0; len < MAX_LENGTH; len++) {
		for (size_t i = 0; i < MAX_ALLOC; i++) {
			array[i] = ft_malloc(len);
			memset(array[i], 'a', len);
		}
		for (size_t i = 0; i < MAX_ALLOC; i++) {
			ft_free(array[i]);
		}
	}
}