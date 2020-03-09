/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:25:56 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 16:58:55 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 2;
	while (i < ac)
	{
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
				j++;
			else
			{
				ft_swap(&av[i], &av[j]);
				j++;
			}
		}
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
		j = i + 1;
	}
}

int		main(int ac, char **av)
{
	ft_sort_params(ac, av);
	return (0);
}
