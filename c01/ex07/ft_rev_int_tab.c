/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:58:20 by irulusoy          #+#    #+#             */
/*   Updated: 2021/10/27 21:05:57 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	index;
	int	swap;

	start = 0;
	index = size - 1;
	while (start < (size / 2))
	{
		swap = tab[start];
		tab[start] = tab[index];
		tab[index] = swap;
		index--;
		start++;
	}
}
