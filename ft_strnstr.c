/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:29:01 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 21:01:24 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n;

	if (*needle)
	{
		n = ft_strlen(needle);
		while (ft_strncmp(haystack, needle, n) && n <= len && len-- &&
															*haystack)
			haystack++;
		if (!*haystack || !len || n > len)
			return (NULL);
	}
	return ((char *)haystack);
}
