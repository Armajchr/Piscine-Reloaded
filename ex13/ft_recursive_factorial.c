/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:58:18 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 15:08:39 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int result;
	
	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		result = result * ft_recursive_factorial(nb - 1);
	return (result);
}

int		main(void)
{
	printf("r=%d\n", ft_recursive_factorial(12));
	return (1);
}
