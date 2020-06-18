#include "../ft_putchar.h"

int ft_alphabet(void);

int main()
{
  ft_alphabet();
  return(0);
}

int ft_alphabet()
{
  char letters;

  letters = 'a';
  while (letters <= 'z')
  {
    ft_putchar(letters);
    letters = letters + 1;
  }
  ft_putchar('\n');
  return(0);
}
