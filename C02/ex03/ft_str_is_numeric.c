/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:00:48 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/17 17:57:56 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("Letras = %d\n", ft_str_is_numeric("Sauxixa"));
// 	printf("numeros = %d\n", ft_str_is_numeric("42"));
// 	printf("nada = %d\n", ft_str_is_numeric(""));
// }
