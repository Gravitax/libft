/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:37 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:34:12 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*strncat(char *dest, const char *src, size_t n)
{
	int	len1;
	int	len2;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (len2 < (int)n)
		ft_strcpy(&dest[len1], src);
	else
		ft_strncpy(&dest[len1], src, n);
	dest[len1 + n] = '\0';
	return (dest);
}
