/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:05:08 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/18 17:09:49 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	sourclen;
	unsigned int	i;
	unsigned int	n;

	destlen = 0;
	sourclen = 0;
	while (destlen < size && dest[destlen])
		destlen++;
	while (src[sourclen])
		sourclen++;
	if (size <= destlen)
		return (size + sourclen);
	i = destlen;
	n = 0;
	while (src[n] && (i + 1) < size)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (destlen + sourclen);
}	

// #include <stdio.h>
// int main(void)
// {
//     char dest[44] = "Sucrilhoscomcoca";
//     char *src = "eleite";
//     unsigned int size = 23;
//     unsigned int res = ft_strlcat(dest, src, size);

//     printf("dest = %s\n", dest);
//     printf("res = %d\n", res);
// 	printf("eleite = %s\n", src);
// }
