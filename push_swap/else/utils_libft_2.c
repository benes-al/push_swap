/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:25:10 by benes-al          #+#    #+#             */
/*   Updated: 2025/06/20 21:11:02 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_wrdcnt(char *str, char sep)
{
	int	i;
	int	wrd;

	i = 0;
	wrd = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
			wrd++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (wrd);
}

static char	*ft_genwrd(char *str, char sep)
{
	char	*new_s;
	int		len;

	len = 0;
	while (str[len] != sep && str[len])
		len++;
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	len = 0;
	while (str[len] != sep && str[len])
	{
		new_s[len] = str[len];
		len++;
	}
	new_s[len] = '\0';
	return (new_s);
}

static char	**ft_free(char **strs, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(strs[n]);
		n++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	char	**strs;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_wrdcnt(s, c) + 1));
	if (!strs)
		return (NULL);
	while (++i < ft_wrdcnt(s, c))
	{
		while (s[j] == c && s[j])
			j++;
		strs[i] = ft_genwrd(&s[j], c);
		if (!strs[i])
			return (ft_free(strs, i));
		while (s[j] != c && s[j])
			j++;
	}
	strs[i] = 0;
	return (strs);
}
