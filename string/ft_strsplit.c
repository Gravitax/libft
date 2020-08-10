/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:37:46 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:39:33 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		ft_copyin_tab(const char *s, char **str, char c, int *x)
{
	int		len;
	int		start;

	len = 0;
	while (s[*x] && s[*x] == c)
		(*x)++;
	start = *x;
	while (s[*x] && s[(*x)++] != c)
		len++;
	if (!(*str = ft_strsub(s, start, len)))
		return (0);
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		x;
	int		len;
	char	**split;

	if (!s)
		return (NULL);
	x = 0;
	len = ft_wordcount(s, c);
	if (len < 1 || !(split = (char **)malloc((len + 1) * sizeof(char *))))
		return (NULL);
	i = -1;
	while (++i < len)
		if (!(ft_copyin_tab(s, &split[i], c, &x)))
		{
			ft_arrfree((void **)split);
			return (NULL);
		}
	split[i] = NULL;
	return (split);
}
