/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 18:12:25 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/21 14:10:38 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	i = 0;
	dst = ft_strdup(s);
	if (dst == NULL)
		return (NULL);
	while (dst[i])
	{
		dst[i] = (*f)(i, dst[i]);
		i++;
	}
	return (dst);
}
