/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 17:08:22 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 17:18:58 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (max < min)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min) + 1)))
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int		main(void)
{
	int	i;
	int	*tab;
	int	max;
	int min;

	max = 3;
	min = 5;
	i = 0;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
		printf("tab[%d]=%d\n", i,  tab[i]);
		i++;
	}
}
