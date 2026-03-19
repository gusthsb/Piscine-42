/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 05:22:47 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/17 19:41:30 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *s1 = "Sauxixa";
//     char *s2 = "Saux";
//     unsigned int n = 5;

//     printf("--- Teste 1 ---\n");
//     printf("Sua ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//     printf("Original strncmp: %d\n", strncmp(s1, s2, n));

//     printf("\n--- Teste 2 (n = 0) ---\n");
//     printf("Sua ft_strncmp: %d\n", ft_strncmp(s1, s2, 0));
//     printf("Original strncmp: %d\n", strncmp(s1, s2, 0));

//     printf("\n--- Teste 3 (Strings iguais) ---\n");
//     printf("Sua ft_strncmp: %d\n", ft_strncmp("Igual", "Igual", 10));
//     printf("Original strncmp: %d\n", strncmp("Igual", "Igual", 10));

//     return (0);
// }
