#include "../ft_putchar.h"

void ft_print_comb2(void);

int main()
{
  ft_print_comb2();
  return(0);
}

void ft_print_comb2(void)
{
  int i;
  int j;
  int rem;
  int quo;
  char first_1;
  char first_2;
  char second_1;
  char second_2;

  i = 0;
  j = 1;

  while (i <= 98) {
    while (j <= 99) {
      /*  Do i part of loop */
      first_1 = j/10 + 48;
      first_2 = i%10 + 48;
      /*  Do j part of loop */
      second_1 = j/10 + 48;
      second_2 = j%10 + 48;
      /*  Print */
      ft_putchar(first_1);
      ft_putchar(first_2);
      ft_putchar(' ');
      ft_putchar(second_1);
      ft_putchar(second_2);
      if (!(i == 98 && j == 99)) {
        ft_putchar(',');
      }
      j++;
    }
    i++;
    j = i+1;
  }
  ft_putchar('\n');
}
