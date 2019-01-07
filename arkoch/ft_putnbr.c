#include "libft.h"

void ft_putnbr(int n)
{
  if (n == -2147483648)
		ft_putstr("-2147483648");
  if (n < 0)
  {
    ft_putchar('-');
    n *= -1;
  }
  if (n > 9)
  {
    ft_putnbr(n/10);
    ft_putnbr(n%10);
  }
  if (n >= 0 && n <= 9)
  {
    char k = n + '0';
    ft_putchar(k);
  }
}
