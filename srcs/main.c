#include <string.h>
#include "../includes/malloc.h"
#include <stdlib.h>
// # define MAX_LENGTH 150
// # define MAX_ALLOC 4096

// int main(void)
// {
//  void *array[MAX_ALLOC];
//  for (size_t len = 0; len < MAX_LENGTH; len++) {
//      for (size_t i = 0; i < MAX_ALLOC; i++) {
//          array[i] = ft_malloc(len);
//          memset(array[i], 'a', len);
// 		 ft_realloc(array[i], len + len);
//      }
//      for (size_t i = 0; i < MAX_ALLOC; i++) {
//          ft_free(array[i]);
//      }
//  }
// }
#define MAX_LENGTH 100
#define MAX_ALLOC 4096
int main(void)
{
 void *array[MAX_ALLOC];
 for (size_t len = 0; len < MAX_LENGTH; len++)
 {
     for (size_t i = 0; i < MAX_ALLOC; i++)
     {
         array[i] = ft_malloc(len);
         memset(array[i], 'a', len);
         array[i] = ft_realloc(array[i],len + 1);
     }
    //  for (ssize_t i = MAX_ALLOC - 1; i >= 0; i--)
    //  { // ssize_t cause we check on >= 0 which is always rue on unsigned type
    //      ft_free(array[i]);
    //  }
 }
    //  show_alloc_mem();

}
// #define MAX_LENGTH 4096
// #define MAX_ALLOC 1000
// int main(void)
// {
//  void *array[MAX_ALLOC];
//  for (size_t len = 0; len < MAX_LENGTH; len++)
//  {
//      for (size_t i = 0; i < MAX_ALLOC; i++)
//      {
//          array[i] = ft_malloc(len);
//          memset(array[i], 'a', len);
//      }
//      for (size_t i = 0; i < MAX_ALLOC; i++)
//      {
//          ft_free(array[i]);
//      }
//  }
//  show_alloc_mem();
// }
// #include <string.h>
// #include <stdlib.h>
// #define MAX_ALLOC 600
// int main(void)
// {
//  for (size_t len = 0; len < MAX_ALLOC; len++)
//  {
//      for (size_t i = 0; i < 4096; i++)
//      {
//          void *addr = ft_malloc(len);
//          memset(addr, 'a', len);
//          ft_free(addr);
//      }
//  }
// }
// int main(void)
// {
//  void *addr = ft_malloc(64);
//  memset(addr, 'a', 64);
//  show_alloc_mem();
//  ft_free(addr);
//  show_alloc_mem();
// }

// #define M (1024 * 1024)
// void print(char *s)
// {
//     write(1, s, strlen(s));
// }
// int main()
// {
//     char *addr1;
//     char *addr3;
//     addr1 = (char *)ft_malloc(16 * M);
//     strcpy(addr1, "Bonjours\n");
//     print(addr1);
//     addr3 = (char *)ft_realloc(addr1, 128 * M);
//     addr3[127 * M] = 42;
//     print(addr3);
// 	show_alloc_mem();
// 	ft_free(addr1 + 12);

// 	show_alloc_mem();
// 	ft_free(addr3);
// 	show_alloc_mem();
//     return (0);
// }

// void print(char *s)
// {
// 	write(1, s, strlen(s));
// }

// int main()
// {
// 	char *addr;

// 	addr = ft_malloc(16);
// 	ft_free(NULL);
// 	ft_free((void *)addr + 5);
// 	if (ft_realloc((void *)addr + 5, 10) == NULL)
// 		print("Bonjours\n");
// }

// #define M (1024 * 1024)

// void print(char *s)
// {
// 	write(1, s, strlen(s));
// }

// int main()
// {
// 	char *addr1;
// 	char *addr2;
// 	char *addr3;

// 	addr1 = (char*)ft_malloc(16*M);
// 	strcpy(addr1, "Bonjours\n");
// 	print(addr1);
// 	addr2 = (char*)ft_malloc(16*M);
// 	addr3 = (char*)ft_realloc(addr1, 128*M);
// 	addr3[127*M] = 42;
// 	print(addr3);
// 	return (0);
// }

// #define M (1024 * 1024)

// void print(char *s)
// {
// 	write(1, s, strlen(s));
// }

// int main()
// {
// 	char *addr1;
// 	char *addr3;

// 	addr1 = (char*)ft_malloc(16*M);
// 	strcpy(addr1, "Bonjours\n");
// 	print(addr1);
// 	addr3 = (char*)ft_realloc(addr1, 128*M);
// 	addr3[127*M] = 42;
// 	print(addr3);
// 	return (0);
// }