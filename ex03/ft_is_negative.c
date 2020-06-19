#include "../ft_putchar.h"

void ft_is_negative(int n);

int main()
{
  int n = -2;
  ft_is_negative(n);
}

void ft_is_negative(int n)
{
  if (n < 0) {
    ft_putchar('N');
  } else {
    ft_putchar('P');
  }
  ft_putchar('\n');
}
