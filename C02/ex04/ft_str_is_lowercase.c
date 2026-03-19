/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:20:48 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/16 16:29:02 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("palavra normal = %d\n", ft_str_is_lowercase("Sauxixa"));
// 	printf("So Letras maiusculas = %d\n", ft_str_is_lowercase("BALAO"));
// 	printf("numeros = %d\n", ft_str_is_lowercase("42"));
// 	printf("nada = %d\n", ft_str_is_lowercase(""));
// 	printf("minusculo = %d\n", ft_str_is_lowercase("menosculo"));
// }
