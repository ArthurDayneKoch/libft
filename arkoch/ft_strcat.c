#include "libft.h"

char *ft_strcat(char *restrict s1, const char *restrict s2)
{
  size_t i;
  size_t j;

  i = 0;
  j = 0;
  while (s1[i])
    i++;
  while(s1[i] && s2[j])
    s1[i++] = s2[j++];
  s1[i] = '\0';
  return (s1);
}
