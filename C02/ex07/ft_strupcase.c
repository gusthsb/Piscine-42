/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:13:47 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/12 16:42:13 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "bananaaveia";
// 	char str2[] = "NOMETOTALMENTEALEATORIO";	
// 	ft_strupcase(str);
// 	ft_strupcase(str2);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// }
