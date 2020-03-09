/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:48:59 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 15:10:13 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int result;
	
	result = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int		main(void)
{
	printf("r=%d\n", ft_iterative_factorial(1));
	return (0);
}
