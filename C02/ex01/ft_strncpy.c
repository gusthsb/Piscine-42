/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:09:54 by gustde-s          #+#    #+#             */
/*   Updated: 2026/03/19 18:13:34 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    char    ft_strncpy(char dest, char *src, unsigned int n)
    {
        unsigned int    i;

        i = 0;
        while (src[i] != '\0' && i < n)
        {
            dest[i] = &src[i];
            i++;
        }
        dest[i] = '\0';
        while (i < n)
        {
            i++;
        }
        dest[i] = '\0';
        return (dest);
    }
	
    // int    main(void)
    // {
    //     unsigned int    n = 3;
    //     char    src[7] = "duvido";
    //     char    dest[7] = "será";

    //     ft_strncpy (dest, src, n);
    //     write (1, dest, 3);
    //     return (0);
    // }
