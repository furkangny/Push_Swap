/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:14:38 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 16:14:39 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	my_atoi(const char *str, t_stack *data)
{
	int		i;
	int		sign;
	long	number;

	sign = 1;
	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number = (number * 10) + (str[i] - 48) * sign;
		if (number > 2147483647)
			error(data);
		if (number < -2147483648)
			error(data);
		i++;
	}
	return (number);
}

void	selection_sort(t_stack *data)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < data->a_len - 1)
	{
		if (data->sorted[i] > data->sorted[i + 1])
		{
			tmp = data->sorted[i];
			data->sorted[i] = data->sorted[i + 1];
			data->sorted[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
