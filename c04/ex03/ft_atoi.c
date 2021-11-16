/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:21:43 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/04 21:01:55 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_atoi(char	*str)
{
	int	c;
	int	s;
	int	digit;

	c = 0;
	s = 1;
	digit = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		digit = (str[c] - 48) + (digit * 10);
		c++;
	}
	return (digit * s);
}
/*int	main(void)
{
	char	str[] = " ---+--123ahbg";
	int	t;
	t = ft_atoi(str);
	
	printf("%d", t);
}*/
