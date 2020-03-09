/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:37:56 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 14:44:42 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 9;
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}
