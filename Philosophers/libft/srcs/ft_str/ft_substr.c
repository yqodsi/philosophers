/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:03:17 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 16:03:18 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	int		x;

	if (!s)
		return (0);
	ret = malloc(len + 1);
	x = len;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	while (start-- > 0)
		s++;
	while (len-- > 0)
		*ret++ = *s++;
	*ret = '\0';
	return (ret - x);
}
