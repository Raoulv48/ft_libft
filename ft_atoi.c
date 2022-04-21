/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:23:09 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/14 15:12:19 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static	int	iswhitespace(const char *str, int i)
{
	if (str[i] == ' ')
		return (0);
	if (str[i] == '\n')
		return (0);
	if (str[i] == '\t')
		return (0);
	if (str[i] == '\v')
		return (0);
	if (str[i] == '\f')
		return (0);
	if (str[i] == '\r')
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	while (iswhitespace(str, i) == 0)
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result >= 922337203685477580)
		{
			if ((sign == -1 && str[i] >= '9') || (sign == 1 && str[i] >= '8'))
				return ((sign == -1) ? 0 : -1);
			result = (result * 10) + (str[i] - '0');
			return ((int)result * sign);
		}
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return ((int)result * sign);
}
