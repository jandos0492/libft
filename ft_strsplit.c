/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:10:23 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/10 16:12:58 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		skip(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	return (i);
}

static int		len_word(char const *string, char c)
{
	int i;

	i = 0;
	while (string[i] != c && string[i] != '\0')
		i++;
	return (i);
}

static int		count_word(char const *st, char c)
{
	int n;
	int i;
	int res;

	n = 0;
	i = 0;
	res = 0;
	while (st[i] != '\0')
	{
		i = i + skip(st + i, c);
		n = len_word(st + i, c);
		if (n > 0)
			res++;
		i = i + n;
	}
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr_str;
	int		i;
	int		j;
	int		words;
	int		len;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	if (!(arr_str = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = s + skip(s, c);
		len = len_word(s, c);
		arr_str[i] = (char*)malloc(sizeof(char) * (len + 1));
		j = -1;
		while (++j < len)
			arr_str[i][j] = s[j];
		s = s + len;
		arr_str[i++][len] = '\0';
	}
	arr_str[words] = 0;
	return (arr_str);
}
