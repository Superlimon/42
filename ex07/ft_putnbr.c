/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descaler <eamescaleradario@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:42:24 by descaler          #+#    #+#             */
/*   Updated: 2026/10/13 13:42:24 by descaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		writer('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		writer(nb/10+'0');
	}
	writer(nb%10+'0');
}

int main()
{
	ft_putnbr(42);
	writer('\n');
	ft_putnbr(-2);
	return(0);
}