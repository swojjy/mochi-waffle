#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
    char    *temp_dest;

    temp_dest = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return temp_dest;
}

int main()
{
    char    src[] = "bloop bloop";
    char    dest[20];

    ft_strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return (0);
}