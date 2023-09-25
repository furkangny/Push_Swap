/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:59:51 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 15:59:53 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		n;
	int		l;

	l = ft_strlen(s1);
	n = 0;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[n])
	{
		if (s1[n] != 13)
			ptr[n] = s1[n];
		else
		{
			ptr[n] = '\n';
			ptr[n + 1] = '\0';
			return (ptr);
		}
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
