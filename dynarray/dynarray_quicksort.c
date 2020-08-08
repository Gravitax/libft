/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray_quicksort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:13:14 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 20:40:50 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		partition(t_dynarray *arr, int low, int high,
					int (*compare)(void *a, void *b))
{
	int		i;
	int		j;
	void	*pivot;

	pivot = dyacc(arr, high);
	i = low - 1;
	j = low - 1;
	while (++j <= high)
	{
		if (compare(dyacc(arr, j), pivot))
			dynarray_swap_cells(arr, ++i, j);
	}
	dynarray_swap_cells(arr, i + 1, high);
	return (i + 1);
}

void			dynarray_quicksort(t_dynarray *arr, int low, int high,
					int (*compare)(void *a, void *b))
{
	int	pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, compare);
		dynarray_quicksort(arr, low, pivot - 1, compare);
		dynarray_quicksort(arr, pivot + 1, high, compare);
	}
}
