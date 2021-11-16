/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:37:47 by irulusoy          #+#    #+#             */
/*   Updated: 2021/10/31 17:11:27 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	k;

	index = 0;
	k = 0;
	while (str[index] != '\0')
	{
		if (k == 0 && ('a' <= str[index] && str[index] <= 'z'))
		{
			str[index] -= 32;
			k++;
		}
		else if (k > 0 && 'A' <= str[index] && str[index] <= 'Z')
			str[index] += 32;
		else if (str[index] < '0' || (str[index] > '9' && str[index] < 'A'))
			k = 0;
		else if ((str[index] > 'Z' && str[index] < 'a') || str[index] > 'z')
			k = 0;
		else
			k++;
		index++;
	}
	return (str);
}
