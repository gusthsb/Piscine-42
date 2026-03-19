/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 19:12:34 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/18 14:27:00 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size <= 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// int main(void)
// {
// 	char first[] = "mingau";
// 	char last[10];
// 	unsigned int s;	
// 	printf("inicio: %s\n", first);
// 	s = ft_strlcpy(last, first, sizeof(last));
// 	printf("Destino: %s\n", last);
// 	printf("Tamanho string: %u\n", s);
// 	return (0);
// }
