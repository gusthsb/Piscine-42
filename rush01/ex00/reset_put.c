/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 13:31:26 by gviniciu          #+#    #+#             */
/*   Updated: 2026/03/08 13:50:26 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Inserts a row into the board.
void	put_row(int board[4][4], int n_row, int perms[4])
{
	int	c;

	c = 0;
	while (c < 4)
	{
		board[n_row][c] = perms[c];
		c++;
	}
}

//Resets a row from the board.
void	reset_row(int board[4][4], int n_row)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		board[n_row][k] = 0;
		k++;
	}
}
