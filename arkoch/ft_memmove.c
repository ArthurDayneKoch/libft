/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:19:42 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 20:19:46 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*ret;

	if (!dst || !src)
		return (dst);
	ret = dst;
	if (dst < src)
		while ((size_t)(dst - ret) < len)
			*(t_byte *)dst++ = *(t_byte *)src++;
	else
		while (len-- > 0)
			((t_byte *)dst)[len] = ((t_byte *)src)[len];
	return (ret);
}
