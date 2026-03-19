/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 05:04:50 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/17 17:00:26 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	palavra1[] = "Oi, sou uma palavra mesmo";
// 	char	palavra2[] = "Oi, nao sou uma palavra";
// 	char	palavra3[] = "Oi";
// 	char	palavra4[] = "Oi";

// 	if (ft_strcmp(palavra1, palavra2) == 0)
// 		printf("As strings são iguais");
// 	else
// 		printf("definitivamente não são iguais mesmo");
// 	printf("\n");
// 	if (ft_strcmp(palavra3, palavra4) == 0)
// 		printf("As strings são iguais");
// 	else
// 		printf("As strings não são iguais");
// 	return (0);
// }
