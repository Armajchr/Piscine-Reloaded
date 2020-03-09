/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 14:23:40 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 14:28:40 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
