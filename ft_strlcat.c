/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:43:19 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/15 14:31:33 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[j] && dstsize > j)
		j++;
	while (src[res] != '\0')
		res++;
	if (dstsize <= j)
		res = res + dstsize;
	else
		res = res + j;
	while (src[i] != '\0' && j + 1 < dstsize)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (dstsize != j)
		dst[j] = '\0';
	return (res);
}
