#include "libft.h"

char *ft_strstr (const char *haystack, const char *needle)
{
  int i;
  int j;

  i = 0;
  if (!(*needle))
    return((char *)haystack);
  while (haystack[i] != '\0')
  {
    j = 0;
    while (haystack [i+j] == needle[j] && needle[j] != '\0')
      j++;
    if (needle [j] =='\0')
      return ((char*)haystack + i);
    i++;
  }
  return (NULL);
}
