#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void print_array(int *arr, size_t n)
{
	printf("[");
	size_t i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("]\n");
}

void test_int_memcpy(void *dest, void *dest1, const void *src, size_t n)
{
	ft_memcpy(dest, src, n * sizeof(int));
	memcpy(dest1, src, n * sizeof(int));

	printf("src: ");
	print_array((int *)src, n);
	printf("ft_memcpy dest: ");
	print_array((int *)dest, n);
	printf("memcpy dest: ");
	print_array((int *)dest1, n);
}

void test_ft_memcpy(void *dest, const void *src, size_t n)
{
	void *result = ft_memcpy(dest, src, n);
	void *memcpyres = memcpy(dest, src, n);
	if (result != memcpyres)
		printf("tak match");
	if (!result)
		printf("%s, %s, %zu: NULL\n", (char *)dest, (char *)src, n);
	else
		printf("%s, %s, %zu: %s.\n", (char *)dest, (char *)src, n, (char *)result);
}

int main(void)
{
	char a[] = "wee";
	char adest[20];

	test_ft_memcpy(adest, a, strlen(a) + 1);

	int b[] = {1, 2, 3};
	int bdest1[3];
	int bdest2[3];
	test_int_memcpy(bdest1, bdest2, b, 3);

	//char adest1[20];
	char adest2[20];

	//test_ft_memcpy(NULL, NULL, 10); //segfault
	//segfault. test_ft_memcpy(adest1, NULL, 10);
	//segfault. test_ft_memcpy(NULL, a, 10);
	test_ft_memcpy(adest2, a, 0); //rubbish vals


	/*seg fault
	
	char adest3[20];
	size_t maxsize = SIZE_MAX;
	test_ft_memcpy(adest3, a, maxsize);*/

	char overlap[] = "overlap!";
	test_ft_memcpy(overlap + 3, overlap, ft_strlen(overlap));

	return 0;
}

/*
	changed guard from or to and
	if (!dest || !src)
		return (NULL);

	memcpy assumes that it will receive valid params
	so we should check for null pointers before calling memcpy

*/