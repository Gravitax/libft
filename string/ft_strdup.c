/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:29 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:34:04 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strdup(const char *src)
{
	char	*new;

	if (!(new = (char *)ft_memalloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(new, src);
	return (new);
}
