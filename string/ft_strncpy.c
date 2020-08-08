/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:43 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:30:47 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strncpy(char *dest, const char *src, size_t n)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	i = -1;
	while (src[++i] && (i < (int)n))
		dest[i] = src[i];
	while (i < (int)n)
		dest[i++] = '\0';
	return (dest);
}
