#include "../libft/libft.h"
#include <stdio.h>
#include <bsd/string.h>

void test_strlcpy(char *dst1, char *dst2, const char *src, size_t size)
{
    size_t result1 = strlcpy(dst1, src, size);
    size_t result2 = ft_strlcpy(dst2, src, size);

    printf("src: \"%s\", size: %zu\n", src, size);
    printf("strlcpy: \"%s\", return value: %zu\n", dst1, result1);
    printf("ft_strlcpy: \"%s\", return value: %zu\n", dst2, result2);
    printf("Comparison: %s\n\n", (result1 == result2 && ft_strncmp(dst1, dst2, ft_strlen(dst1)) == 0) ? "match" : "no match :\()");
}

int main(void)
{
    char src[] = "mondy mondy!";
    char dst1[20];
    char dst2[20];

    printf("more than enough space\n");
    test_strlcpy(dst1, dst2, src, sizeof(dst1));

    printf("exact space\n");
    test_strlcpy(dst1, dst2, src, 12);

    printf("smaller space\n");
    test_strlcpy(dst1, dst2, src, 5);

    printf("zero size\n");
    test_strlcpy(dst1, dst2, src, 0);

    printf("empty src\n");
    test_strlcpy(dst1, dst2, "", sizeof(dst1));

    return 0;
}

/*
removed this guard because strlcpy segfaults when it receives a null parameter
	if (!dst || !src)
		return (0);
*/