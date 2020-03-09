/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 18:20:22 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 18:28:57 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
}

void	ft_foreach(int *tab, int lenght, void(*f)(int))
{
	int i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}

int		main(void)
{
	int	tab[4] = {0, 3, 4, 1};
	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
