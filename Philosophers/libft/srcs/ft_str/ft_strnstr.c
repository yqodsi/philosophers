/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:03:02 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 16:03:03 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] && needle[j])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && \
		haystack[i + j] && needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		else
			i++;
	}
	return (0);
}
