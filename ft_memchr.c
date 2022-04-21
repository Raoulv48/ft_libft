/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 19:00:52 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/18 18:02:01 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*src;
	size_t			i;

	i = 0;
	src = s;
	while (i < n)
	{
		if (src[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
