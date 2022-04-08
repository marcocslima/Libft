/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:33:29 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/08 07:38:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;
	i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t counter;
	size_t i;
	char buffer[size];

	ft_strcpy(buffer, src);
	counter = 0;
	i = 0;
	while (buffer[counter] != '\0')
		counter++;
	while (counter < (size - 1))
		buffer[counter++] = dest[i++];
	dest[i] = '\0';
	return (counter);
}
