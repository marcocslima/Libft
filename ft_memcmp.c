/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 20:17:29 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 11:36:45 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{	
	if (size == 0)
		return (0);
	while (*(unsigned char*)s1 != '\0' && *(unsigned char*)s2 != '\0' && size - 1 > 0)
	{
		if (*(unsigned char*)s1 != *(unsigned char*)s2)
			break ;
		s1++;
		s2++;
		size--;
	}	
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
