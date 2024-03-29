/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarinov <zarinov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:27:38 by zarinov           #+#    #+#             */
/*   Updated: 2019/10/09 15:30:40 by zarinov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ');
}
