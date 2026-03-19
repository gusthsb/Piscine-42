/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:20:48 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/16 16:29:38 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("palavra normal = %d\n", ft_str_is_uppercase("Sauxixa"));
// 	printf("So Letras maiusculas = %d\n", ft_str_is_uppercase("BALAO"));
// 	printf("numeros = %d\n", ft_str_is_uppercase("42"));
// 	printf("nada = %d\n", ft_str_is_uppercase(""));
// 	printf("minusculo = %d\n", ft_str_is_uppercase("menosculo"));
// }
