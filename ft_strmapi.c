/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 06:49:55 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/15 07:18:05 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	i;
	char		*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(result = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	ft_strlcpy(result, s, ft_strlen(s) + 1);
	while (result[i])
	{
		result[i] = (*f)(i, result[i]);
		i++;
	}
	return (result);
}