/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 18:05:39 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 15:18:15 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	if (s != 0)
	{
		while (s[i] != '\0')
		{
			c = s[i];
			write(fd, &c, 1);
			i++;
		}
		c = '\n';
		write(fd, &c, 1);
	}
}
