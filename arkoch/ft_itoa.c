/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:17:26 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 20:17:38 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	n1;

	len = ft_len(n);
	n1 = n;
	if (n < 0)
	{
		n1 = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = n1 % 10 + '0';
	while (n1 /= 10)
		s[--len] = n1 % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
