/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:37 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:45:42 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*strncat(char *dst, const char *src, size_t n)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(dst);
	len2 = ft_strlen(src);
	if (len2 < (int)n)
		ft_strcpy(&dst[len1], src);
	else
		ft_strncpy(&dst[len1], src, n);
	dst[len1 + n] = '\0';
	return (dst);
}
