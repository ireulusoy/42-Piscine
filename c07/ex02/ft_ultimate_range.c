/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:47:38 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/12 11:49:45 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/
int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (0);
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/*int	main(void)
{
	int a = 3;
	int *s = &a;
	int **k = &s;
	
	a = ft_ultimate_range(k, 3, 100);
	printf("%d", a);
}*/
