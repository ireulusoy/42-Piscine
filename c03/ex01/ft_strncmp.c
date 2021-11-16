/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:31:26 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/03 20:33:04 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*int     main(void)
{
   
   char str1[] = {"1234567890"};
   char str2[] = {"1234467890"};
  
  
   if (ft_strncmp(str1, str2, 5) == 0)
     printf("Satırların n ye kadar ki karakterleri aynı");
   else
      printf("Satırların n ye kadar ki karakterleri farklı");

   return (0);
}*/
