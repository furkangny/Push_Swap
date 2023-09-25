/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:12:15 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 16:12:22 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_without_free(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	error(t_stack *data)
{
	ft_free(data);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_free(t_stack *data)
{
	int	i;

	i = 0;
	if (data->a_s)
		free (data->a_s);
	if (data->b_s)
		free (data->b_s);
	if (data->sorted)
		free (data->sorted);
	while (data->numbers[i])
	{
		free(data->numbers[i]);
		i++;
	}
	free(data->numbers);
	free (data);
}
