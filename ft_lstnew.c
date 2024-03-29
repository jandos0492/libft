/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:16:56 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:07:34 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *head;

	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		head->content = ft_memalloc(content_size);
		if (!head->content)
		{
			free(head);
			return (NULL);
		}
		head->content = ft_memmove(head->content, content, content_size);
		head->content_size = content_size;
	}
	head->next = NULL;
	return (head);
}
