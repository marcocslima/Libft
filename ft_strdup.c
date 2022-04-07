/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:26:15 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/05 19:39:07 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int len_src;
	char *new_src;
	int index;

	len_src =	ft_strlen(s);
	new_src = malloc( len_src * sizeof(char));
	index = 0;
	while(index < len_src)
	{
		new_src[index] = s[index]; 
		index++;	
	}
	return(new_src);
}
