/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:55:10 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 21:50:01 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(char const *str, char c)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		k++;
	}
	return (k);
}

static	int		ft_count(char const *str, char c)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			k++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (k);
}

static	char	**ft_free(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	if (!s || !(str = (char **)malloc(sizeof(*str) * (ft_count(s, c) + 1))))
		return (NULL);
	while (++i < ft_count(s, c))
	{
		k = 0;
		if (!(str[i] = ft_strnew(ft_length(&s[j], c) + 1)))
			return (ft_free(str, i));
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][k++] = s[j++];
		str[i][k] = '\0';
	}
	str[i] = 0;
	return (str);
}
