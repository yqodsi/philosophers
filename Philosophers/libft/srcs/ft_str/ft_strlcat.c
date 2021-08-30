/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:59:52 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 15:59:54 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (!dst && size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		res = ft_strlen(src) + size;
	else
		res = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (i + 1 < size)
	{
		while (src[j] && i + 1 < size)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (res);
}
