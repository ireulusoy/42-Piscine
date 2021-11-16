/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 21:07:40 by irulusoy          #+#    #+#             */
/*   Updated: 2021/10/27 21:08:38 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	swap;

	start = 0;
	while (start < (size - 1))
	{
		if (tab[start] > tab[start + 1])
		{
			swap = tab[start];
			tab[start] = tab[start + 1];
			tab[start + 1] = swap;
			start = 0;
		}
		else
			start++;
	}
}
