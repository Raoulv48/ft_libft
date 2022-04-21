/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 19:28:01 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 15:17:17 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*se1;
	const unsigned char		*se2;
	int						i;
	int						res;

	se1 = s1;
	se2 = s2;
	i = 0;
	while (n > 0)
	{
		if (se1[i] != se2[i])
		{
			res = se1[i] - se2[i];
			return (res);
		}
		if (se1[i] == se2[i] && se1[i] == '\0' && se2[i] == '\0' && n == 0)
			return (0);
		n--;
		i++;
	}
	return (0);
}
