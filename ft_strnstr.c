/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:38:03 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 15:24:57 by tlize            ###   ########.fr       */
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
		return (&big[i]);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
			j ++;
		else
			j = 0;
		if (!little[j])
			return (&big[i - j + 1]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n",ft_strnstr("j'adore la vie","ore",45));
// 	return(0);
// }
