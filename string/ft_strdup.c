/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:29 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:38:14 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strdup(const char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src);
	if (!(copy = ft_strnew(len)))
		return (NULL);
	ft_strcpy(copy, src);
	return (copy);
}
