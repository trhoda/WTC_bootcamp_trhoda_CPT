#include "../ft_putchar.h"

void ft_alphabet(void);
int ft_putchar(char c);

void ft_alphabet(void)
{
  char c

  c = 'a';
  while (c <= 'z')
  {
    ft_putchar(c++);
  }
  ft_putchar('\n');
}
