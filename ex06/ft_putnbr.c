void ft_putnbr(int nb);
int ft_putchar(char c);

void ft_putnbr(int nb)
{
  char c;

  if (nb < 0) {
    ft_putchar('-');
    nb *= -1;
  }
  if (nb/10 != 0) {
    ft_putnbr(nb/10);
  }
  c = nb%10 + 48;
  ft_putchar(c);
}
