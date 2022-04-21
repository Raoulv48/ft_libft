/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 14:04:29 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/15 19:09:02 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	front = 0;
	while (ft_strchr(set, s1[front]) && s1[front] != '\0')
		front++;
	back = ft_strlen(s1);
	if (front > back)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[back - 1]) && back > front)
		back--;
	str = malloc(sizeof(char) * (back - front) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + front, (back - front) + 1);
	return (str);
}
