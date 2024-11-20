/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:38:03 by tlize             #+#    #+#             */
/*   Updated: 2024/11/19 18:41:35 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!little[j])
		return (big);
	while (big[i] && little[j] && i < len)
	{
		if (big[i] == little[j])
			j ++;
		else
			j = 0;
		if (!little[j])
			if (i - j + 1 <= len)
				return (&big[i - j + 1]);
			else
				return (0);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n",ft_strnstr("j'adore la vie","ore",45));
// 	return(0);
// }
