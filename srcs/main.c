#include "../includes/malloc.h"
#include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     for (int i = 0; i < 150; i++) {
//         for (int len = 0; len < 4096; len++) {
//             // printf("i: %d, len = %d \n", i ,len);
//             void * addr = ft_malloc(len);
//             memset(addr, 'a', len);
//             ft_free(addr);
            
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     int i = 0;
//     int len = 0;

//     while(i < 150)
//     {
//         len = 0;
//         while(len < 4096)
//         {
//             // ft_putnbr(len);
//             // ft_putchar('\n');
//             void * addr = ft_malloc(len);
//             memset(addr, 'a', len);
//             ft_free(addr);
//             len++;
//         }
//         i++;
//     }
//     show_alloc_mem();
// }

// 


# define MAX_LENGTH 4096
# define MAX_ALLOC 200

int main(void)
{

	void *array[MAX_ALLOC];

	for (size_t len = 0; len < MAX_LENGTH; len++) {
		for (size_t i = 0; i < MAX_ALLOC; i++) {
			array[i] = ft_malloc(len);
			memset(array[i], 'a', len);
		}
		for (ssize_t i = MAX_ALLOC - 1; i >= 0; i--) { // ssize_t cause we check on >= 0 which is always rue on unsigned type
			ft_free(array[i]);
		}
	}
    show_alloc_mem();
}

// # define MAX_LENGTH 4096
// # define MAX_ALLOC 300

// int main(void)
// {

// 	void *array[MAX_ALLOC];

// 	for (size_t len = 0; len < MAX_LENGTH; len++) {
// 		for (size_t i = 0; i < MAX_ALLOC; i++) {
// 			array[i] = ft_malloc(len);
// 			memset(array[i], 'a', len);
// 		}
// 		for (size_t i = 0; i < MAX_ALLOC; i++) {
// 			ft_free(array[i]);
// 		}
// 	}
//         show_alloc_mem();

// }