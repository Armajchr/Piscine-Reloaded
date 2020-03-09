/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armajchr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:38:43 by armajchr          #+#    #+#             */
/*   Updated: 2019/04/01 16:37:48 by armajchr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "test1";
	s2 = "test2";
	printf("ft=%d\n", ft_strcmp(s1, s2));
	printf("cmp=%d\n", strcmp(s1, s2));
}
