/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:54:08 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/11 17:24:31 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char first[] = "Palavra e palavra";
// 	char last[20];		
// 	printf("inicio: %s\n", first);
// 	ft_strcpy(last, first);
// 	printf("Destino: %s\n", last);
// 	return (0);
// }
