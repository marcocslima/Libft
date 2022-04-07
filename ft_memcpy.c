/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:44:29 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 19:46:22 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	
	i = 0;
	while (*(unsigned char*)src != '\0' && i < size)
	{
		*(unsigned char*)dest = *(unsigned char*)src;
		dest++;
		src++;
		i++;
	}
	*(unsigned char*)dest = '\0';
	return(dest);
}