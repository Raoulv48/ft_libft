/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rverscho <rverscho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:28:54 by rverscho       #+#    #+#                */
/*   Updated: 2019/11/15 19:57:16 by rverscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		is_char(char c, char s)
{
	if (c != s)
		return (1);
	if (c == s)
		return (0);
	return (0);
}

static	int		getwords(const char *s, int c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	if (count == 1)
		return (1);
	return (count + 1);
}

static	void	*allocstr(char *s, char c)
{
	char	*dst;
	int		i;

	i = 0;
	while (s[i] && is_char(s[i], c) == 1)
		i++;
	dst = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (s[i] && is_char(s[i], c) == 1)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static	char	**addwords(const char *s, char c, char **dst, int i)
{
	while (*s)
	{
		while (*s && is_char(*s, c) == 0)
			s++;
		if (*s && is_char(*s, c) == 1)
		{
			dst[i] = allocstr((char*)s, c);
			if (dst[i] == NULL)
			{
				while (i >= 0)
				{
					free(dst[i]);
					i--;
				}
				return (NULL);
			}
			i++;
			while (*s && is_char(*s, c) == 1)
				s++;
		}
	}
	dst[i] = NULL;
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	dst = (char**)malloc(sizeof(char*) * (getwords(s, c) + 1));
	if (dst == NULL)
		return (NULL);
	dst = addwords(s, c, dst, i);
	if (dst == NULL)
	{
		free(dst);
		return (NULL);
	}
	return (dst);
}
