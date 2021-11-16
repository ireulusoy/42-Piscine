/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:18:01 by irulusoy          #+#    #+#             */
/*   Updated: 2021/10/23 20:19:26 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input)
{
	if (input == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		input = 147483648;
	}
	if (input < 0)
	{
		ft_putchar('-');
		input *= -1;
	}
	if (input < 10)
	{
		ft_putchar(input + 48);
		return ;
	}
	else
		ft_putnbr(input / 10);
	ft_putnbr(input % 10);
}
