/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:14:27 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/08 10:14:28 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	if (argc > 1)
	{
		while (argc > k)
		{
			i = 0;
			while (argv[k][i] != '\0')
			{
				write(1, &argv[k][i], 1);
				i++;
			}
			write (1, "\n", 1);
			k++;
		}
	}
	return (0);
}
