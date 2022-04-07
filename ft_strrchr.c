/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:09:31 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/07 01:35:41 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len_str;
	
	len_str = ft_strlen(s) - 1;
	
	if (s == NULL)
		return (NULL);
	while (len_str >= 0)
	{
		if (s[len_str] == 0 && s[len_str] != c)
			return (NULL);
		if (s[len_str] == c)
			return((char *) &s[len_str]);
		len_str--;
	}
	return(NULL);
}
