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

	b = (char)c;
	str = (char *)s;
	i = ft_strlen(str);
	while (i > 0 && str[i] != b)
		i--;
	if (str[i] == b)
		return (str + i);
	else
		return (NULL);
}
