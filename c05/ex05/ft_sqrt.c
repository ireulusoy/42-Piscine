/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:34:19 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/05 18:34:21 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{	
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*int	main(void)
{
	int t;
	t = ft_sqrt(7);
	printf("%d", t); 
}*/
