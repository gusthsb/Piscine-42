/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:22:16 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/18 13:29:51 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;
	
	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "bananacomfarofa";

// 	printf("%d\n", ft_strlen(str));
// 	return (0);
// }
