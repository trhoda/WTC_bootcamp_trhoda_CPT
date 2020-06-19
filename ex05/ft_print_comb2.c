void ft_print_comb2(void);
int ft_putchar(char c);

void ft_print_comb2(void)
{
  int i;
  int j;
  int r;

  i = 0;
  j = 1;

  while (i <= 98) {
    while (j <= 99) {
      ft_putchar(i/10 + 48);
      ft_putchar(i%10 + 48);
      ft_putchar(' ');
      ft_putchar(j/10 + 48);
      ft_putchar(j%10 + 48);
      if (!(i == 98 && j == 99)) {
        ft_putchar(',');
      }
      j++;
    }
    i++;
    r = i;
    j = r+1;
  }
  ft_putchar('\n');
}
