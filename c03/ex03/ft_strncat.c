/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:21:37 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/03 16:31:11 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	unsigned int	i;	

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	m;	

	m = 0;
	i = ft_strlen(dest);
	while (src[m] != '\0' && m < nb)
	{
		dest[i] = src[m];
		m++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
