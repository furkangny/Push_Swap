/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:02:19 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 16:02:20 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;

	if (s == NULL)
		return ((char *)s);
	i = 0;
	string = ft_strdup(s);
	if (string == NULL)
		return (NULL);
	while (string[i])
	{
		string[i] = f(i, string[i]);
		i++;
	}
	return (string);
}
