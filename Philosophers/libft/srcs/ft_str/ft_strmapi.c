/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yqodsi <yqodsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:02:52 by yqodsi            #+#    #+#             */
/*   Updated: 2021/06/24 16:02:53 by yqodsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s)
		return (NULL);
	result = malloc((ft_strlen((char *)s) + 1));
	ft_bzero(result, ft_strlen((char *)s) + 1);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		++i;
	}
	result[i] = '\0';
	return (result);
}
