#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if (!(ret = (void *)malloc(size)))
		return (NULL);
	ft_memset(ret, '\0', size);
	return (ret);
}
