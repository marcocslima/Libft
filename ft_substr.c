/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:54:49 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/13 21:02:44 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nstr;
	size_t	lens;

	lens = ft_strlen(s);
	i = 0;
	if (start >= lens)
		nstr = (char *)malloc(1);
	else if (len >= lens)
		nstr = (char *)malloc(lens - start + 1);
	else
		nstr = (char *)malloc(len + 1);
	if (!nstr)
		return((char *)s);
	while (start < lens && i < len)
		nstr[i++] = s[start++];
	nstr[i] = '\0';
	return(nstr);
}
