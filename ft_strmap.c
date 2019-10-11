/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 14:12:28 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:12:10 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*new_str;
	size_t	i;

	i = -1;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	new_str = ft_strnew(size);
	if (!new_str)
		return (NULL);
	while (s[++i])
		new_str[i] = f(s[i]);
	return (new_str);
}
