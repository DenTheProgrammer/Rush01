/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazalee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 20:44:02 by sazalee           #+#    #+#             */
/*   Updated: 2019/03/09 20:56:54 by sazalee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	(char **argv, char puzzle[9][9])
{
	int row;
	int column;

	row = 0;
	while (row < 9)
	{
		column = 0;
		while (column < 9)
		{
			if (argv[row][column] = '.')
				char[row][column] = '0';
			else
				char[row][column] = argv[row][column];
			column++;
		}
		row++;
	}
}
