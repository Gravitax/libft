/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_cdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 19:09:49 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:51:31 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		**ft_arr_cdup(const char **arr)
{
	char	**new;
	int		len;
	int		i;

	if (!arr || (len = ft_arrlen((void **)arr)) == 0)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		if (!(new[i] = ft_strdup(arr[i])))
		{
			ft_arrfree((void **)new);
			return (NULL);
		}
	new[i] = NULL;
	return (new);
}
