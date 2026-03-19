/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:12:20 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/08 17:08:23 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_create_permutations(int perms[24][4]);
int		row_col_validation(int lim1, int lim2, int *line_col);
int		check_columns(int board[4][4], int lim1, int lim2, int n_col);
int		col_compare(int board[4][4]);
void	put_row(int board[4][4], int n_row, int perms[4]);
void	reset_row(int board[4][4], int n_row);

//Gets the user's input for a specific position horizontally.
void	hor_lims(int x, int *lims, char **argv)
{
	int	pos;

	x += 9;
	pos = x * 2 - 2;
	lims[0] = argv[1][pos] - '0';
	lims[1] = argv[1][pos + 8] - '0';
}

//Gets the user's input for a specific position vertically.
void	vert_lims(int y, int *lims, char **argv)
{
	int	pos;

	y += 1;
	pos = y * 2 - 2;
	lims[0] = argv[1][pos] - '0';
	lims[1] = argv[1][pos + 8] - '0';
}

//Decides if the board is valid after checking the rules for
//the top and bottom views.
int	validate_final_board(int board[4][4], char **argv)
{
	int	n_col;
	int	lims[2];

	n_col = 0;
	while (n_col < 4)
	{
		vert_lims(n_col, lims, argv);
		if (check_columns(board, lims[0], lims[1], n_col) == 0)
			n_col++;
		else
			return (1);
	}
	if (n_col == 4)
		return (0);
	return (0);
}

//Fills the board by trying all 24 permutations for each row. 
int	fill(int board[4][4], char **argv, int n_row, int perms[24][4])
{
	int	j;
	int	lims[2];

	if (n_row == 4)
		return (validate_final_board(board, argv));
	hor_lims(n_row, lims, argv);
	j = 0;
	while (j < 24)
	{
		if (row_col_validation(lims[0], lims[1], perms[j]) == 0)
		{
			put_row(board, n_row, perms[j]);
			if (col_compare(board) == 0)
			{
				if (fill(board, argv, n_row + 1, perms) == 0)
					return (0);
			}
			reset_row(board, n_row);
		}
		j++;
	}
	return (1);
}
