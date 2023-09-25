/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:46:38 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 15:46:41 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_limit(long result)
{
	if (result > __INT_MAX__)
		return (-1);
	else if (result < -__INT_MAX__ - 1)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	long	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i++] - '0');
		if (ft_limit(sign * result) != 1)
			return (ft_limit(sign * result));
	}
	return (result * sign);
}
