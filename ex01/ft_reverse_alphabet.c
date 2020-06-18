#include "../ft_putchar.h"

void ft_reverse_alphabet(void);

int main()
{
  ft_reverse_alphabet();
}


void ft_reverse_alphabet(void) {
  char c;

  c = 'z';
  while (c >= 'a')
    {
      ft_putchar(c--);
    }
  ft_putchar('\n');
}
