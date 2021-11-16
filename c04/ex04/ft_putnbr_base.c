/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:05:59 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/04 21:03:15 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putnbr(char c)
{
	write(1, &c, 1);
}

int	len_str(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	ft_calculate(int sayi, int len, char *base)
{
	if (sayi < len)
		ft_putnbr(base[sayi % len]);
	if (sayi >= len)
	{
		ft_calculate(sayi / len, len, base);
		ft_calculate(sayi % len, len, base);
	}
}

int	control(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = len_str(base);
	if (control(len, base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr('-');
		ft_calculate((nbr / -len), len, base);
		ft_calculate((nbr % len) * -1, len, base);
	}
	else if (nbr < 0)
	{
		ft_putnbr('-');
		nbr *= -1;
		ft_calculate(nbr, len, base);
	}
	else
		ft_calculate(nbr, len, base);
}
/*int main(void)
{

    char *a = "0123456789";
    int sayi = 9484 ;
    ft_putnbr_base(sayi, a);
}*/
