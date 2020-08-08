/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:14 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:09:13 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*new;

	if (!ptr)
		return (NULL);
	new = (unsigned char *)ptr;
	while (n--)
		*new++ = (unsigned char)c;
	return (new);
}
