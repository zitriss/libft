/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:39:05 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 13:12:47 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (nmemb < 1 || size < 1)
		return (0);
	pt = malloc(nmemb * size);
	if (!pt)
		return (pt);
	ft_bzero(pt, (nmemb * size));
	return (pt);
}

// int	main(void)
// {
// 	int	*ptr = (int *)ft_calloc(5, sizeof(int));
// 	if (ptr == NULL)
//         printf("KO");
// 	else
// 		printf("OK");
// 	return (0);
// }