/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 14:55:04 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:11:56 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s3;

	if (!s1 || !s2)
		return (NULL);
	s3 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (s3 == NULL)
		return (NULL);
	s3 = ft_strncpy(s3, s1, ft_strlen(s1));
	s3 = ft_strcat(s3, s2);
	return (s3);
}
