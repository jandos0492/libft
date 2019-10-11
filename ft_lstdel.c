/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:41:14 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:07:20 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *node_ptr;
	t_list *next_ptr;

	node_ptr = *alst;
	while (node_ptr)
	{
		next_ptr = node_ptr->next;
		ft_lstdelone(&node_ptr, del);
		node_ptr = next_ptr;
	}
	*alst = NULL;
}
