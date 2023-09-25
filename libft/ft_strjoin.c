/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:00:32 by fgunay            #+#    #+#             */
/*   Updated: 2023/09/06 16:00:33 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*r_str;
	size_t	i;
	size_t	j;

	r_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	i = -1;
	j = -1;
	while (s1[++i])
		r_str[i] = s1[i];
	r_str[i] = ' ';
	i++;
	while (s2[++j])
		r_str[i++] = s2[j];
	r_str[i] = '\0';
	return (r_str);
}
