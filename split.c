/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stak <stak@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:16:14 by stak              #+#    #+#             */
/*   Updated: 2024/04/24 14:23:32 by stak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	wordcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*wordtoprint(const char **s, char c)
{
	int			i;
	char		*word;
	const char	*str;

	str = *s;
	i = 0;
	while (*str && *str == c)
		str++;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (*str && *str != c)
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	*s = str;
	return (word);
}

static void	free_all(int i, char **ptr)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**newstr;
	int		i;

	if (!s)
		return (NULL);
	len = wordcount(s, c);
	newstr = (char **)malloc((len + 1) * sizeof(char *));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		newstr[i] = wordtoprint(&s, c);
		if (newstr[i] == NULL)
		{
			free_all(i, newstr);
			return (NULL);
		}
		i++;
	}
	newstr[i] = 0;
	return (newstr);
}
