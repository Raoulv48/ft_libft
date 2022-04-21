/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:45:22 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/15 12:58:51 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	char	*calc(char *dest, char *source, size_t len)
{
	dest = dest + len - 1;
	source = source + len - 1;
	while (len > 0)
	{
		*dest = *source;
		dest--;
		source--;
		len--;
	}
	return (dest);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*dest;
	char			*source;

	if (dst == 0 && src == 0 && len > 0)
		return (dst);
	i = 0;
	dest = (char*)dst;
	source = (char*)src;
	if (dest < source)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	else
		dest = calc(dest, source, len);
	return (dst);
}
