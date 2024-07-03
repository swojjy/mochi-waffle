#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

void    test_ft_strchr(char const *s, int c)
{
    char *a = ft_strchr(s, c);
    char *b = strchr(s, c);
    printf("%s, %d. ft_strchr: %s. strchr: %s\n", s, c, a, b);
}

int main()
{
    test_ft_strchr("ploop", 'o');
    test_ft_strchr("ploop", 1024);
    test_ft_strchr("ploop", '\0');
    test_ft_strchr("ploop", 'a');
    test_ft_strchr("ploop", '!');
    return 0;
}

/*

strchr and strrchr casts c to unsigned char - 
need to mimic the way it handles c < 0 or c > 255 (c % 256)
ie use (unsigned char)c

*/