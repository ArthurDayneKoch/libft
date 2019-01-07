#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
  char  b;
  char *str;
  unsigned int i;

  b = (char)c;
  str = (char *)s;
  i = 0;
  while (str[i] != '\0' && str[i] != c)
    i++;
  if (str[i] == c)
    return (str + i);
  else
    return(NULL);
}
