/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 17:27:14 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 15:20:37 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				res;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			res = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (res);
		}
		if (s1[i] == s2[i] && s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
