/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:28:55 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/11 13:06:55 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t		len;
	size_t		i;
	const char	*p1;
	const char	*p2;

	i = 0;
	p2 = s1;
	len = ft_strlen(s2);
	while (*s2 != '\0')
	{
		while (*s1 != '\0' && size >= len)
		{
			size--;
			p1 = s1;
			while (s1[i] == s2[i] && size >= len - 1)
				i++;
			if (i == len)
				return ((char *)p1);
			i = 0;
			s1++;
		}
		s2++;
	}
	return ((char *)p2);
}
