/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:43:26 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:07:14 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_back(t_list **alst, void const *content, size_t new)
{
	t_list *current;

	current = *alst;
	while (current->next)
		current = current->next;
	current->next = ft_lstnew(content, new);
}
