/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:39:51 by mcesar-d          #+#    #+#             */
/*   Updated: 2022/04/20 09:46:28 by mcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;
	int		is_l;

	is_l = 0;
	aux = ft_lstlast(new);
	if (aux != new)
		is_l = 1;
	if (new)
	{
		if (is_l == 0)
			new->next = NULL;
		if (*lst == NULL)
			*lst = new;
		else
		{
			aux = ft_lstlast(*lst);
			aux->next = new;
		}
	}
	else
		return ;
}
