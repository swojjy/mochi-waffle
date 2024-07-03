#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

void    test_ft_strrchr(char const *s, int c)
{
    char *a = ft_strrchr(s, c);
    char *b = strrchr(s, c);
    printf("%s, %d. ft_strrchr: %s. strrchr: %s\n", s, c, a, b);
}

int main()
{
    test_ft_strrchr("ploop", 'o');
    test_ft_strrchr("ploop", 1024);
    test_ft_strrchr("ploop", '\0');
    test_ft_strrchr("ploop", 'a');
    test_ft_strrchr("ploop", '!');
    return 0;
}

/*

strchr and strrchr casts c to unsigned char - 
need to mimic the way it handles c < 0 or c > 255 (c % 256)
ie use (unsigned char)c

*/