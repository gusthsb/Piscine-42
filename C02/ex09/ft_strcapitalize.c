/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:42:57 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/13 18:26:41 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	char	str1[] = "eu como 1pao de queijo, mas somente com requeijao";
// 	printf("%s\n", ft_strcapitalize(str));
// 	printf("\n");
// 	printf("%s\n", ft_strcapitalize(str1));
// 	return (0);
// }
