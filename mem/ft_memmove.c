/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:08 by maboye            #+#    #+#             */
/*   Updated: 2020/07/28 17:37:01 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;

	if (!dest || !src)
		return (NULL);
	if (src < dest)
		ft_memcpy(dest, src, len);
	else
	{
		i = -1;
		while (++i < (int)len)
			((char *)dest)[i] = ((char *)src)[i];
	}
	return (dest);
}
