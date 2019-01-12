/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:53:48 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 21:14:21 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			b;
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	x = -1;
	b = (char)c;
	str = (char *)s;
	i = 0;
	j = -1;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == c)
			j = i;
	}
	if (j != x)
		return (str + j);
	else
		return (NULL);
}
