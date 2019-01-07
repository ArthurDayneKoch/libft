#include "libft.h"

char *ft_strcpy(char *dst, char *src)
{
  size_t len;
  size_t i;

  i = 0;
  len = ft_strlen(src);
  while (i < len)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return (dst);
}
