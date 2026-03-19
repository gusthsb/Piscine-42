/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:23:48 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/16 16:58:41 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("Letras = %d\n", ft_str_is_alpha("Sauxixa"));
// 	printf("numeros = %d\n", ft_str_is_alpha("42"));
// 	printf("nada = %d\n", ft_str_is_alpha(""));
// }
