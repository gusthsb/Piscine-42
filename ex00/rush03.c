/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 17:00:46 by gustde-s          #+#    #+#             */
/*   Updated: 2026/02/28 20:05:17 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	linha;
	int	coluna;

	if (x <= 0 || y <= 0)
		return ;
	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if ((linha == 1 && coluna == 1) || (linha == y && coluna == 1))
				ft_putchar('A');
			else if ((linha == 1 && coluna == x) || (linha == y && coluna == x))
				ft_putchar('C');
			else if (linha == 1 || linha == y || coluna == 1 || coluna == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}