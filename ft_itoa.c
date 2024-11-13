/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:30:18 by tlize             #+#    #+#             */
/*   Updated: 2024/11/13 16:41:12 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i ++;
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}

// int	main(void)
// {
// 	int		num;
// 	char	*str;

// 	num = 80085;
// 	str = ft_itoa(num);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
