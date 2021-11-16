/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:35:58 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/05 18:35:59 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	int t;
	int a;
	a = 113;
	t = ft_is_prime(a);
	printf("%d" , t);
}*/
