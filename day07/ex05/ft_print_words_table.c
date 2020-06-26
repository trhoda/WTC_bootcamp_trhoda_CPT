#include <unistd.h>
#include <stdlib.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0') ft_putchar(str[i++]);
}

void ft_print_words_table(char **tab)
{
    res = ft_split_whitespaces("hello fucking world");
    while (*res != 0)
    {
        ft_putstr(*res);
        ft_putchar('\n');
        res++;
    }
}
