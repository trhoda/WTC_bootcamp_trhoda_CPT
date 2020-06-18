#include "../ft_putchar.c"

void ft_putnbr(int nb);

int main()
{
  int nb;
  nb = -1984;
  ft_putnbr(nb);
  return(0);
}

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
