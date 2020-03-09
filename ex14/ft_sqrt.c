/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:11:32 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 15:30:03 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i*i < nb)
		i++;
	if (i*i == nb)
		return (i);
	else
		return (0);
}

int		main(void)
{
	printf("s=%d\n", ft_sqrt(0));
	return (0);
}
