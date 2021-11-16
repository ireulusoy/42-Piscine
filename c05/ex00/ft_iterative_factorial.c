/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:28:01 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/05 18:28:03 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 12)
	{
		if (nb < 0)
			return (0);
		if (nb == 0 )
			return (1);
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
/*int	main(void)
{
	int t;
	t =	ft_iterative_factorial(11);
	printf("%d", t);
}*/
