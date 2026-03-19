/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 10:38:13 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/17 16:46:53 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char d1[20] = "sabao";
//     char s1[] = " pururuca!";   
//     printf("Antes: %s\n", d1);
//     ft_strncat(d1, s1, 5); // 
//     printf("Depois (n=5): %s\n", d1); 
//     char d2[20] = "Hello";
//     ft_strncat(d2, s1, 10); 
//     printf("Depois (n=10): %s\n", d2);
//     return (0);
// }
