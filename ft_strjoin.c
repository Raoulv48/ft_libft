/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 19:43:06 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/15 15:06:41 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*combine(char *dst, int i, char const *tocpy, int max)
{
	int	j;

	j = 0;
	while (i < max)
	{
		dst[i] = tocpy[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		lend;
	int		lent;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lend = ft_strlen(s1);
	lent = ft_strlen(s2);
	dst = malloc(sizeof(char) * (lend + lent) + 1);
	if (dst == NULL)
		return (NULL);
	dst = ft_strcpy(dst, s1);
	dst = combine(dst, (lend + i), s2, (lent + lend));
	return (dst);
}
