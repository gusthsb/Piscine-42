/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 15:24:07 by lucferre          #+#    #+#             */
/*   Updated: 2026/03/08 19:53:39 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_left_view(int *arr);
int	ft_right_view(int *arr);

//Uses the functions above to determine if the rows/collumns
//are valid according to the user's input.
int	row_col_validation(int lim1, int lim2, int *line_col)
{
	int	vis;
	int	vis_i;

	vis = ft_left_view(line_col);
	vis_i = ft_right_view(line_col);
	if (vis == lim1 && vis_i == lim2)
	{
		return (0);
	}
	else
		return (1);
}

int	str_len(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

//Validates the user's input according to the challenge.
int	input_validation(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2 && str_len(argv[1]) == 31)
	{
		while (i < 32)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
			{
				write(1, "Error\n", 6);
				return (1);
			}
			i += 2;
			if (i == 32)
				return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}

//Checks if the collumns respect the correct number of views
//required.
int	check_columns(int board[4][4], int lim1, int lim2, int n_col)
{
	int	col[4];
	int	y;

	y = 0;
	while (y < 4)
	{
		col[y] = board[y][n_col];
		y++;
	}
	if (row_col_validation(lim1, lim2, col) == 0)
		return (0);
	else
		return (1);
}

//Checks if there are any repetitions on the collumns
//as they are being formed.
int	col_compare(int board[4][4])
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	p = 1;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			p = 1;
			while (p < (4 - j))
			{
				if (board[j][i] != 0 && board[j][i] == board[j + p][i])
					return (1);
				p++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
