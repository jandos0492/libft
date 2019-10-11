/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:39:51 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:12:40 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	while (i <= size)
		result[i++] = '\0';
	result[0] = '\0';
	return (result);
}
