/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:56:41 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 21:17:34 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	k;
	unsigned int	j;
	unsigned int	len;

	k = 0;
	j = 0;
	str = NULL;
	if (s)
	{
		while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
			k++;
		len = k;
		while (s[len] != '\0')
			len++;
		len--;
		while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len != 0)
			len--;
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s[k] != '\0' && k < len + 1)
			str[j++] = s[k++];
		str[j] = '\0';
	}
	return (str);
}
