#include "../libft/libft.h"
#include <stdio.h>
#include <bsd/string.h>

void test_ft_strlcat(char *dst, char *dst1, const char *src, size_t size)
{
    printf("before: dest: %s, dest1: %s.\n", dst, dst1);
    size_t a = strlcat(dst, src, size);
    size_t b = ft_strlcat(dst1, src, size);
    
    printf("strlcat: %lu, dest: %s, dlen: %lu, \n", a, dst, ft_strlen(dst));
    printf("ft_strlcat: %lu, dest: %s, dlen: %lu.\n\n", b, dst1, ft_strlen(dst1));
}

int main(void)
{
	char dest[10] = "abc";
	char dest1[10] = "abc";
	
    test_ft_strlcat(dest, dest1, "def", 11);
    test_ft_strlcat(dest, dest1, "def", 1);

	char dest2[4] = "abc";
	char dest3[4] = "abc";
	
    test_ft_strlcat(dest2, dest3, "def", 11);

    char dest4[4] = "abc";
	char dest5[4] = "abc";
    test_ft_strlcat(dest4, dest5, "def", 3);

    return 0;
}