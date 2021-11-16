/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:36:36 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/05 18:36:38 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_find_next_prime(int nb)
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
		{
			nb++;
			i = 2;
		}	
	}
	return (nb);
}
/*int	main(void)
{
	int t;
	int a;
	a = 51;
	t = ft_find_next_prime(a);
	printf("%d", t);
}*/
