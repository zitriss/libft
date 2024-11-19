/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:55:23 by tlize             #+#    #+#             */
/*   Updated: 2024/11/12 13:28:05 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i ++;
	}
	if (c == '\0')
		return (&s[i]);
	return (0);
}

// int	main(void)
// {
// 	printf("%s\n",ft_strchr("Allo Bassem ?", 'o'));
// 	printf("%s\n",strchr("Allo Bassem ?", 'o'));
// 	return (0);
// }
