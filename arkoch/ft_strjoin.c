/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:45:23 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 21:12:40 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	unsigned int		i;
	unsigned int		j;
	unsigned int		len;

	i = -1;
	j = -1;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		ft_putnbr(len);
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s1[++i] != '\0')
			str[i] = s1[i];
		while (s2[++j] != '\0')
			str[i++] = s2[j];
		str[++i] = '\0';
	}
	return (str);
}
