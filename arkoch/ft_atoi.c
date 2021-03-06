/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkoch <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:11:32 by arkoch            #+#    #+#             */
/*   Updated: 2019/01/12 20:11:44 by arkoch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				sign;
	long long int	rez;
	long long int	tmp;

	sign = 0;
	rez = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		tmp = rez;
		rez = rez * 10;
		rez += (int)(*str) - '0';
		if (rez < tmp)
			return (sign == 1 ? 0 : -1);
		str++;
	}
	return (sign == 1 ? -rez : rez);
}
