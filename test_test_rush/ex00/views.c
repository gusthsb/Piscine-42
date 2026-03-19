/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:05:47 by gviniciu          #+#    #+#             */
/*   Updated: 2026/03/08 13:00:14 by gviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calculates the number of views a row can see on the left
int	ft_left_view(int *arr)
{	
	int		i;
	int		greater;
	int		views;

	views = 0;
	greater = 0;
	i = 0;
	while (i < 4)
	{
		if (arr[i] > greater)
		{
			greater = arr[i];
			views++;
		}
		i++;
	}
	return (views);
}

//calculates the number of views a row can see on the right
int	ft_right_view(int *arr)
{
	int		i;
	int		greater;
	int		views;

	views = 0;
	greater = 0;
	i = 3;
	while (i >= 0)
	{
		if (arr[i] > greater)
		{
			greater = arr[i];
			views++;
		}
		i--;
	}
	return (views);
}
