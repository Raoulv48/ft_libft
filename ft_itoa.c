/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/09 18:27:00 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 18:32:45 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		getlen(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

static	char	getsign(int n)
{
	if (n < 0)
		return ('-');
	else
		return ('+');
}

static	char	*getresult(long n, char *str)
{
	char	sign;
	int		count;
	int		end;

	end = getlen(n);
	count = getlen(n);
	if (getsign(n) == '-')
	{
		sign = '-';
		n = n * -1;
	}
	while (n >= 10 || count > 0)
	{
		str[count - 1] = n % 10 + 48;
		n = n / 10;
		count--;
	}
	if (sign == '-')
		str[0] = '-';
	str[end] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	nbr;

	if (n < -2147483647)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = (char*)malloc(sizeof(char) * getlen(n) + 1);
	if (str == NULL)
		return (NULL);
	nbr = n;
	str = getresult(nbr, str);
	return (str);
}
