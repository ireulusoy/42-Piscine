/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 20:16:12 by irulusoy          #+#    #+#             */
/*   Updated: 2021/10/23 20:16:14 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	ch_a;	
	char	ch_b;	

	if (num <= 9)
	{
		ch_a = num + 48;
		ft_putchar('0', ch_a);
	}
	else if (num <= max)
	{
		ch_a = (num % 10) + 48;
		ch_b = (num / 10) + 48;
		ft_putchar(ch_b, ch_a);
	}
}

void	ft_comma(int a, int b)
{
	ft_putint(a, 98);
	write(1, " ", 1);
	ft_putint(b, 99);
	if (a != 98 || b != 99)
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int		a;	
	int		b;	

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_comma(a, b);
			b++;
		}
		a++;
	}
}
