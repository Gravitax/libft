/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:10:44 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 19:29:09 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strfjoin(const char *s1, const char *s2, int choose)
{
	if (choose == 1)
		ft_strdel((char **)&s1);
	else if (choose == 2)
		ft_strdel((char **)&s2);
	else if (choose == 3)
	{
		ft_strdel((char **)&s1);
		ft_strdel((char **)&s2);
	}
	return (ft_strjoin(s1, s2));
}
