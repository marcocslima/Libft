/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:51:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 20:50:22 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t i;
	
	i = 0;
	if (s == NULL)
		return (NULL);
	while (*(unsigned char*)s != c && i < size)
	{
		if (*(unsigned char*)s == '\0')
			return (NULL);
		s++;
		i++;
	}
	return((unsigned char*)s);
}
