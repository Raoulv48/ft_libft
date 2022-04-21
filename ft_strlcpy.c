/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:45:15 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/07 20:23:52 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (src == NULL)
		return (0);
	if (src != NULL && dstsize == 0)
		return (ft_strlen(src));
	while (dstsize - 1 != 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
