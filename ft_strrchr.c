/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:10:27 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/17 14:07:29 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	getcharcount(const char *ptr, int c)
{
	int i;

	i = 0;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			i++;
		}
		ptr++;
	}
	return (i);
}

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*ptr;

	a = c - 0;
	ptr = (char*)s;
	i = getcharcount(s, c);
	while (*ptr != '\0')
	{
		if (*ptr == a)
		{
			i--;
			if (i == 0)
				return ((char*)ptr);
		}
		ptr++;
		if (*ptr == '\0' && c == '\0')
			return (ptr);
	}
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}
