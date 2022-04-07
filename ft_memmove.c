/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:58:25 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 22:18:26 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t i;

	i = 0;
	if (src == NULL)
		return (NULL);
	while (*(unsigned char*)src != '\0' && i < size)
	{
		if (*(unsigned char*)src == '\0')
			return (NULL);
        *(unsigned char*)dest = *(unsigned char*)src;
		src++;
        dest++;
		i++;
	}
    return((unsigned char*)src);
}
