/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:37:50 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:29:51 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	if (!str || !(new = (char *)ft_memalloc(len * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < (int)len)
		new[i] = str[start++];
	return (new);
}
