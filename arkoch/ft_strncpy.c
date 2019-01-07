#include "libft.h"

char *ft_strncpy(char *dst, char *src, size_t len)
{
  size_t i;

  i = 0;
  while (i < len && src[i] != '\0')
  {
    dst[i] = src[i];
    i++;
  }
  while (i < len)
    dst[i++] = '\0';
  return (dst);
}