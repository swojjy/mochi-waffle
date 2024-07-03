#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

void test_memmove(char *dest1, char *dest2, const char *src, size_t n)
{
    printf("Before memmove:\n");
    printf("dest1: %s\n", dest1);
    printf("dest2: %s\n", dest2);

    memmove(dest1, src, n);
    ft_memmove(dest2, src, n);

    printf("After memmove:\n");
    printf("memmove: %s\n", dest1);
    printf("ft_memmove: %s\n", dest2);
    printf("\n");
}

int main(void)
{
    printf("non-overlapping\n");
    char src1[] = "weewewewewweeeeee!";
    char dest1[20] = "ABCDEFGHIJKLMNO";
    char dest2[20] = "ABCDEFGHIJKLMNO";
    
    test_memmove(dest1, dest2, src1, 13);
    
    printf("dest overlaps before src\n");
    char src2[] = "Hello, world!";
    char dest3[20] = "Hello, Hello, world!";
    char dest4[20] = "Hello, Hello, world!";
    
    test_memmove(dest3 + 7, dest4 + 7, src2, 13);
    
    printf("dest overlaps after src\n");
    char src3[] = "Hello, world!";
    char dest5[20] = "Hello, Hello, world!";
    char dest6[20] = "Hello, Hello, world!";
    
    test_memmove(dest5, dest6, src3 + 7, 6);
    
	printf("move 0 length\n");
    char src4[] = "Hello, world!";
    char dest7[20] = "ABCDEFGHIJKLMNO";
    char dest8[20] = "ABCDEFGHIJKLMNO";
    
    test_memmove(dest7, dest8, src4, 0);

	printf("use null ptrs\n");
    char *src5 = NULL;
    char *dest9 = NULL;
    char *dest10 = NULL;
    
    memmove(dest9, src5, 0);
    ft_memmove(dest10, src5, 0);
    
    printf("After null pointer move:\n");
    printf("memmove: %p\n", dest9);
    printf("ft_memmove: %p\n", dest10);
    printf("\n");

    return 0;
}

/*
	added guard
	if (!dest && !src)
		return (NULL);

*/