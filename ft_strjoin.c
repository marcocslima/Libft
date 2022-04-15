/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:14:00 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/13 21:28:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr_res;

	i = 0;
	j = 0;
	ptr_res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr_res)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr_res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr_res[i] = s2[j];
		i++;
		j++;
	}
	ptr_res[i] = '\0';
	return (ptr_res);
}
