/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irulusoy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:53:26 by irulusoy          #+#    #+#             */
/*   Updated: 2021/11/12 11:58:01 by irulusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*arr;
	int		i;
	int		j;
	int		c;
	int		k;

	k = 0;
	i = 0;
	arr = (char *)malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}
		c = 0;
		while (sep[c] != '\0' && i < size - 1)
			arr[k++] = sep[c++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}
/*int	main(void)
{
	char *array[] = {"I" , "You" , "We", "He", "She", "It"};
	char sep[] = "&&";
	char *t;
	t = ft_strjoin(6, array, sep);
	printf("%s", t);

}*/
