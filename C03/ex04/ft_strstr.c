/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 10:53:35 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/18 12:41:47 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str [i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str = "sauxixa";
//     char *find = "bola";
//     char *res;
//     res = ft_strstr(str, find);
//     if (res)
//         printf("e: %s\n", res);
//     else
//         printf("n/e.\n");
//     return (0);
// }
