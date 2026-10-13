/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descaler <eamescaleradario@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 22:05:34 by descaler          #+#    #+#             */
/*   Updated: 2026/10/11 22:05:34 by descaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escritura(int a, int b)
{
	char	c[6];

	c[0] = a / 10 + '0';
	c[1] = a % 10 + '0';
	c[2] = ' ';
	c[3] = b / 10 + '0';
	c[4] = b % 10 + '0';
	c[5] = ' ';
	write(1, c, 6);
}

void	fr_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = a + 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < b)
			{
				escritura(a, b);
				b++;
			}
		}
		a++;
	}
}
