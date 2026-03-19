/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:44:06 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/12 16:46:41 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "bananaaveia";
// 	char str2[] = "NOMETOTALMENTEALEATORIO";	
// 	ft_strlowcase(str);
// 	ft_strlowcase(str2);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// }
