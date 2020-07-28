/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:16:41 by maboye            #+#    #+#             */
/*   Updated: 2020/07/28 17:24:16 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool			ft_isprime(int nb)
{
	int x;

	x = 3;
	if (nb <= 3)
		return (nb <= 1 ? 0 : 1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (false);
	while (x * x <= nb)
	{
		if (nb % x == 0)
			return (false);
		x += 2;
	}
	return (true);
}
