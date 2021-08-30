/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:50:39 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 15:50:41 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dst && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d)
		while ((int)(--len) >= 0)
			*(d + len) = *(s + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
