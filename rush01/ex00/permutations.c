/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:58:53 by gviniciu          #+#    #+#             */
/*   Updated: 2026/03/08 16:40:31 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_add_perms(int a, int b, int perms[24][4], int *n_perm);

//Creates all possible permutations using 1 and 4 (4!).
void	ft_create_permutations(int perms[24][4])
{
	int	a;
	int	b;
	int	*n_perm;
	int	x;

	x = 0;
	n_perm = &x;
	a = 1;
	while (a <= 4)
	{
		b = 1;
		while (b <= 4)
		{
			ft_add_perms(a, b, perms, n_perm);
			b++;
		}
		a++;
	}
}

//Continues the logic and adds the permutations to a grid.
void	ft_add_perms(int a, int b, int perms[24][4], int *n_perm)
{
	int	c;
	int	d;

	c = 1;
	while (c <= 4)
	{
		d = 1;
		while (d <= 4)
		{
			if (a != b && a != c && a != d && b != c && b != d && c != d)
			{
				perms[*n_perm][0] = a;
				perms[*n_perm][1] = b;
				perms[*n_perm][2] = c;
				perms[*n_perm][3] = d;
				(*n_perm)++;
			}
			d++;
		}
		c++;
	}
}
