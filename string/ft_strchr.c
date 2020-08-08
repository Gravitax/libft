/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:21 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:37:03 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != (char)c)
		if (!str[i++])
			return (NULL);
	return ((char *)&str[i]);
}
