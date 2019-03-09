/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpuzzle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazalee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 19:53:18 by sazalee           #+#    #+#             */
/*   Updated: 2019/03/09 20:12:03 by sazalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	printpuzzle(char puzzle[9][9])
{
	int row;
	int column;

	row = 0;
	while (row < 9)
	{
		column = 0;
		while (column < 8)
		{
			write(1, &puzzle[row][column], 1);
			write(1, " ", 1);
			column++;
		}
		write(1, &puzzle[row][column], 1);
		write(1, "\n", 1);
		row++;
	}
}
