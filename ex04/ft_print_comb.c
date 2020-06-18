#include "../ft_putchar.h"

void ft_print_comb(void);

void ft_print_comb()
{
  int i;
  int j;
  int k;
  int b;
  int start;
  char first;
  char second;
  char third;

  i = 0;
  j = 1;
  k = 2;
  b = 0;
  start = 1;

  while (i <= 7)
    {
      j = start;
      while (j <= 8)
        {
          k = j + 1;
          start = k - 1;
          while (k <= 9)
            {
              if (i != j) {
                if (j != k) {
                  if ((j != k + 1) || b == 0) {
                    b++;
                    first = i + 48;
                    second = j + 48;
                    third = k + 48;
                    ft_putchar(first);
                    ft_putchar(second);
                    ft_putchar(third);
                    if (!(i == 7 && k == 9)) {
                      ft_putchar(',');
                    }
                  }
                }
              }
              k++;
              start++;
            }
          j++;
        }
      if (j == 9) {
        start = i + 1;
      }
      i++;
    }
  ft_putchar('\n');
}

int main()
{
  ft_print_comb();
  return(0);
}
