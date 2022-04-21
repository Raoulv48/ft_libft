/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/02 18:23:45 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 19:24:24 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char*)dst;
	str2 = (unsigned char*)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		str1[i] = str2[i];
		i++;
		n--;
	}
	return (dst);
}
