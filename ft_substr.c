/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:54:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/10 22:13:47 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	i;
	size_t	l_string;

	l_string = ft_strlen(s);
	i = 0;
	p2 = (char *)malloc(len * sizeof(char));
	p1 = (char *)(s + start);
	if (!p2 || s[0] == '\0' || !s)
		return (NULL);
	while (i < len)
	{
		p2[i] = p1[i];
		i++;
	}
	return (p2);
}
