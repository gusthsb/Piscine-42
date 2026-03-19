/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:26:26 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/08 17:26:30 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		input_validation(int argc, char **argv);
int		fill(int board[4][4], char **argv, int n_row, int perms[24][4]);
void	ft_create_permutations(int perms[24][4]);

//Receives the complete board and prints it on the
//standard output.
void	ft_print_board(int board[4][4])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{	
			c = board[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}	
}

//Decides what output to print, the board or an "Error".
void	print_output(int board[4][4], char **argv)
{
	int	perms[24][4];

	ft_create_permutations(perms);
	if (fill(board, argv, 0, perms) == 0)
	{
		ft_print_board(board);
	}
	else
		write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	if (input_validation(argc, argv) == 0)
		print_output(board, argv);
	return (0);
}
