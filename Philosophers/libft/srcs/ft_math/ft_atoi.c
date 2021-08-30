/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:48:48 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 15:48:49 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	b;

	b = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' || \
	*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		b = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
		res = res * 10 + (*str++ - 48);
	return ((int)res * b);
}
